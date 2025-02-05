`include "define.vh" 

module AGEX_STAGE(
  input wire clk,
  input wire reset,
  input wire [`from_MEM_to_AGEX_WIDTH-1:0] from_MEM_to_AGEX,    
  input wire [`from_WB_to_AGEX_WIDTH-1:0] from_WB_to_AGEX,   
  input wire [`DE_latch_WIDTH-1:0] from_DE_latch,
  output wire [`AGEX_latch_WIDTH-1:0] AGEX_latch_out,
  output wire [`from_AGEX_to_FE_WIDTH-1:0] from_AGEX_to_FE,
  output wire [`from_AGEX_to_DE_WIDTH-1:0] from_AGEX_to_DE,
  output wire [`from_AGEX_to_updater_WIDTH-1:0] from_AGEX_to_updater
);

  `UNUSED_VAR (from_MEM_to_AGEX)
  `UNUSED_VAR (from_WB_to_AGEX)

  reg [`AGEX_latch_WIDTH-1:0] AGEX_latch; 
  // wire to send the AGEX latch contents to other pipeline stages 
  assign AGEX_latch_out = AGEX_latch;
  
  wire[`AGEX_latch_WIDTH-1:0] AGEX_latch_contents; 
  
  wire valid_AGEX; 
  wire [`INSTBITS-1:0]inst_AGEX; 
  wire [`DBITS-1:0]PC_AGEX;
  wire [`DBITS-1:0] inst_count_AGEX; 
  wire [`DBITS-1:0] pcplus_AGEX; 
  wire [`IOPBITS-1:0] op_I_AGEX;
  reg br_cond_AGEX; // 1 means a branch condition is satisified. 0 means a branch condition is not satisifed 
  reg [`DBITS-1:0] pctarget_AGEX;
  wire [7:0] BHR_AGEX;
  wire [7:0] PHT_index_AGEX;
  wire [1:0] PHT_entry_AGEX;
 // **TODO: Complete the rest of the pipeline 
  wire [`DBITS-1:0] regval_1_AGEX;
  wire [`DBITS-1:0] regval_2_AGEX;
  wire [`DBITS-1:0] sxt_imm_AGEX;
  wire [`REGNOBITS-1:0] rd_AGEX;
  wire wr_reg_AGEX;
  
  always @ (*) begin
    case (op_I_AGEX)
      `BEQ_I :
      begin
        br_cond_AGEX = regval_1_AGEX == regval_2_AGEX ? 1 : 0; // write correct code to check the branch condition. 
      end
      `BNE_I : 
          br_cond_AGEX = regval_1_AGEX != regval_2_AGEX ? 1 : 0; 

      `BLT_I : begin
        if (regval_1_AGEX[`DBITS-1] == 1'b1 && regval_2_AGEX[`DBITS-1] == 1'b1)
           br_cond_AGEX = regval_1_AGEX > regval_2_AGEX ? 1 : 0;
        else if (regval_1_AGEX[`DBITS-1] == 1'b0 && regval_2_AGEX[`DBITS-1] == 1'b0)
           br_cond_AGEX = regval_1_AGEX < regval_2_AGEX ? 1 : 0;
        else
           br_cond_AGEX = regval_1_AGEX[`DBITS-1] == 1'b1 ? 1 : 0;
       end
      `BGE_I : begin
        if (regval_1_AGEX[`DBITS-1] == 1'b1 && regval_2_AGEX[`DBITS-1] == 1'b1)
           br_cond_AGEX = regval_1_AGEX <= regval_2_AGEX ? 1 : 0;
        else if (regval_1_AGEX[`DBITS-1] == 1'b0 && regval_2_AGEX[`DBITS-1] == 1'b0)
           br_cond_AGEX = regval_1_AGEX >= regval_2_AGEX ? 1 : 0;
        else
           br_cond_AGEX = regval_1_AGEX[`DBITS-1] == 1'b0 ? 1 : 0;
       end

      `BLTU_I: br_cond_AGEX = regval_1_AGEX < regval_2_AGEX ? 1 : 0;
      `BGEU_I :  br_cond_AGEX = regval_1_AGEX >= regval_2_AGEX ? 1 : 0;
      `JAL_I, `JALR_I, `JR_I: br_cond_AGEX = 1'b1;
      default : br_cond_AGEX = 1'b0;
    endcase
  end
  reg signed [`DBITS-1:0] sign_temp;
  reg [`DBITS-1:0] aluout_AGEX;
  reg [`DBITS-1:0] memaddr_AGEX;
 // compute ALU operations  (alu out or memory addresses)
 
  always @ (*) begin
  case (op_I_AGEX)
    `ADD_I:
      aluout_AGEX = regval_1_AGEX + regval_2_AGEX;
    `SUB_I:
      aluout_AGEX = regval_1_AGEX - regval_2_AGEX;
    `AND_I:
      aluout_AGEX = regval_1_AGEX & regval_2_AGEX;
    `OR_I:
      aluout_AGEX = regval_1_AGEX | regval_2_AGEX;
    `XOR_I:
      aluout_AGEX = regval_1_AGEX ^ regval_2_AGEX;
    `SLT_I:
       begin
        if (regval_1_AGEX[`DBITS-1] == 1'b1 && regval_2_AGEX[`DBITS-1] == 1'b1)
           aluout_AGEX = regval_1_AGEX > regval_2_AGEX ? 1 : 0;
        else if (regval_1_AGEX[`DBITS-1] == 1'b0 && regval_2_AGEX[`DBITS-1] == 1'b0)
           aluout_AGEX = regval_1_AGEX < regval_2_AGEX ? 1 : 0;
        else
           aluout_AGEX = regval_2_AGEX[`DBITS-1] == 1'b0 ? 1 : 0;
       end
    `SLTU_I:
      aluout_AGEX = regval_1_AGEX < regval_2_AGEX ? 1 : 0;
    `SRA_I:
    begin
      sign_temp = regval_1_AGEX;
      aluout_AGEX = sign_temp >>> regval_2_AGEX[4:0];
      end
    `SRL_I:
      aluout_AGEX = regval_1_AGEX >> regval_2_AGEX[4:0];
    `SLL_I:
      aluout_AGEX = regval_1_AGEX << regval_2_AGEX[4:0];
    `MUL_I:
      aluout_AGEX = regval_1_AGEX * regval_2_AGEX[4:0];
    `ADDI_I:
      aluout_AGEX = regval_1_AGEX + sxt_imm_AGEX;
    `ANDI_I:
      aluout_AGEX = regval_1_AGEX & sxt_imm_AGEX;
    `ORI_I:
      aluout_AGEX = regval_1_AGEX | sxt_imm_AGEX;
    `XORI_I:
      aluout_AGEX = regval_1_AGEX ^ sxt_imm_AGEX;
    `SLTI_I:
       begin
        if (regval_1_AGEX[`DBITS-1] == 1'b1 && sxt_imm_AGEX[`DBITS-1] == 1'b1)
           aluout_AGEX = regval_1_AGEX > sxt_imm_AGEX ? 1 : 0;
        else if (regval_1_AGEX[`DBITS-1] == 1'b0 && sxt_imm_AGEX[`DBITS-1] == 1'b0)
           aluout_AGEX = regval_1_AGEX < sxt_imm_AGEX ? 1 : 0;
        else
           aluout_AGEX = sxt_imm_AGEX[`DBITS-1] == 1'b0 ? 1 : 0;
       end
    `SLTIU_I:
      aluout_AGEX = regval_1_AGEX < sxt_imm_AGEX ? 1 : 0;
    `SRAI_I:
    begin
            sign_temp = regval_1_AGEX;
      aluout_AGEX = sign_temp >>> inst_AGEX[24:20];
      end
    `SRLI_I:
      aluout_AGEX = regval_1_AGEX >> inst_AGEX[24:20]; 
    `SLLI_I:
      aluout_AGEX = regval_1_AGEX << inst_AGEX[24:20]; 
    `LUI_I:
      aluout_AGEX = sxt_imm_AGEX;
    `AUIPC_I:
      aluout_AGEX = PC_AGEX + sxt_imm_AGEX;
    `LW_I:
      memaddr_AGEX = regval_1_AGEX + sxt_imm_AGEX;
    `SW_I:
      begin
      aluout_AGEX = regval_2_AGEX;
      memaddr_AGEX = regval_1_AGEX + sxt_imm_AGEX;
      end
    `JAL_I, `JALR_I:
      aluout_AGEX = pcplus_AGEX;
	 endcase 
  end 

// branch target needs to be computed here 
// computed branch target needs to send to other pipeline stages (pctarget_AGEX)
always @(*)begin  
  if (op_I_AGEX == `JALR_I) 
    pctarget_AGEX = (regval_1_AGEX + sxt_imm_AGEX) & 32'hfffffffe;
  else if (op_I_AGEX == `JR_I)
    pctarget_AGEX = regval_1_AGEX;
  else if (op_I_AGEX == `JAL_I)
    pctarget_AGEX = PC_AGEX + sxt_imm_AGEX;
  else if (op_I_AGEX == `BEQ_I || op_I_AGEX == `BNE_I || op_I_AGEX == `BGE_I || op_I_AGEX == `BLT_I || op_I_AGEX == `BGEU_I || op_I_AGEX == `BLTU_I)
    pctarget_AGEX = PC_AGEX + sxt_imm_AGEX;
  else
    pctarget_AGEX = pcplus_AGEX;
end 

   wire is_branch;
   wire taken;
    assign  {                     
                                  valid_AGEX,
                                  inst_AGEX,
                                  PC_AGEX,
                                  pcplus_AGEX,
                                  op_I_AGEX,
                                  inst_count_AGEX,
                                  regval_1_AGEX,
                                  regval_2_AGEX,
                                  sxt_imm_AGEX,
                                  rd_AGEX,
                                  wr_reg_AGEX,
                                  taken,
                                  is_branch,
                                  BHR_AGEX,
                                  PHT_index_AGEX,
                                  PHT_entry_AGEX
                                          // more signals might need
                                  } = from_DE_latch; 
    
  assign from_AGEX_to_DE = {flush, wr_reg_AGEX, rd_AGEX};
  assign from_AGEX_to_FE = {flush, flush_target};
  wire flush; 
  assign flush = (br_cond_AGEX != taken) ? 1 : 0;
  wire [`DBITS-1:0] flush_target;
  assign flush_target = br_cond_AGEX ? pctarget_AGEX : PC_AGEX + `INSTSIZE; 
  assign from_AGEX_to_updater = {PC_AGEX, is_branch, br_cond_AGEX, pctarget_AGEX, BHR_AGEX, PHT_index_AGEX, PHT_entry_AGEX};
  assign AGEX_latch_contents = {
                                valid_AGEX,
                                inst_AGEX,
                                PC_AGEX,
                                op_I_AGEX,
                                inst_count_AGEX,
                                aluout_AGEX,
                                rd_AGEX,
                                wr_reg_AGEX,
                                memaddr_AGEX
                                       // more signals might need
                                 }; 
  reg [`DBITS-1:0] taken_branches;
  reg [`DBITS-1:0] not_taken_branches;
  reg [`DBITS-1:0] correctly_predicted;
  always @ (posedge clk ) begin
    if(reset) begin
      AGEX_latch <= {`AGEX_latch_WIDTH{1'b0}};
      // might need more code here  
      correctly_predicted <= 32'b0;
        end 
    else 
        begin
      // need to complete 
          if (br_cond_AGEX == 1'b1 && is_branch)
            taken_branches <= taken_branches + 1;
          else if (br_cond_AGEX == 1'b0 && is_branch)
                 not_taken_branches <= not_taken_branches + 1;
           if (is_branch && ((br_cond_AGEX && taken) || (!br_cond_AGEX && !taken)))
                   correctly_predicted <= correctly_predicted + 1;
                   AGEX_latch <= AGEX_latch_contents ;
        end 
  end

endmodule
