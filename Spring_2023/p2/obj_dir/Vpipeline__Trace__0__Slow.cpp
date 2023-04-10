// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpipeline__Syms.h"


VL_ATTR_COLD void Vpipeline___024root__trace_init_sub__TOP__0(Vpipeline___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+231,"clk", false,-1);
    tracep->declBit(c+232,"reset", false,-1);
}

VL_ATTR_COLD void Vpipeline___024root__trace_init_sub__TOP__pipeline__0(Vpipeline___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_init_sub__TOP__pipeline__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+231,"clk", false,-1);
    tracep->declBit(c+232,"reset", false,-1);
    tracep->declBus(c+2,"cycle_count", false,-1, 31,0);
    tracep->declArray(c+3,"FE_latch_out", false,-1, 147,0);
    tracep->declArray(c+8,"DE_latch_out", false,-1, 256,0);
    tracep->declArray(c+17,"AGEX_latch_out", false,-1, 172,0);
    tracep->declArray(c+23,"MEM_latch_out", false,-1, 172,0);
    tracep->declBus(c+29,"from_FE_to_predictor", false,-1, 31,0);
    tracep->declArray(c+30,"from_AGEX_to_updater", false,-1, 83,0);
    tracep->declQuad(c+33,"from_predictor_to_FE", false,-1, 55,0);
    tracep->declArray(c+35,"from_updater_to_predictor", false,-1, 81,0);
    tracep->declBus(c+38,"from_DE_to_FE", false,-1, 0,0);
    tracep->declQuad(c+39,"from_AGEX_to_FE", false,-1, 32,0);
    tracep->declBus(c+273,"from_MEM_to_FE", false,-1, 0,0);
    tracep->declBus(c+274,"from_WB_to_FE", false,-1, 0,0);
    tracep->declBus(c+41,"from_AGEX_to_DE", false,-1, 6,0);
    tracep->declBus(c+42,"from_MEM_to_DE", false,-1, 5,0);
    tracep->declQuad(c+43,"from_WB_to_DE", false,-1, 37,0);
    tracep->declBus(c+275,"from_MEM_to_AGEX", false,-1, 0,0);
    tracep->declBus(c+276,"from_WB_to_AGEX", false,-1, 0,0);
    tracep->declBus(c+277,"from_WB_to_MEM", false,-1, 0,0);
    tracep->pushNamePrefix("my_AGEX_stage ");
    tracep->declBit(c+231,"clk", false,-1);
    tracep->declBit(c+232,"reset", false,-1);
    tracep->declBus(c+275,"from_MEM_to_AGEX", false,-1, 0,0);
    tracep->declBus(c+276,"from_WB_to_AGEX", false,-1, 0,0);
    tracep->declArray(c+8,"from_DE_latch", false,-1, 256,0);
    tracep->declArray(c+17,"AGEX_latch_out", false,-1, 172,0);
    tracep->declQuad(c+39,"from_AGEX_to_FE", false,-1, 32,0);
    tracep->declBus(c+41,"from_AGEX_to_DE", false,-1, 6,0);
    tracep->declArray(c+30,"from_AGEX_to_updater", false,-1, 83,0);
    tracep->declArray(c+17,"AGEX_latch", false,-1, 172,0);
    tracep->declArray(c+45,"AGEX_latch_contents", false,-1, 172,0);
    tracep->declBit(c+51,"valid_AGEX", false,-1);
    tracep->declBus(c+52,"inst_AGEX", false,-1, 31,0);
    tracep->declBus(c+53,"PC_AGEX", false,-1, 31,0);
    tracep->declBus(c+54,"inst_count_AGEX", false,-1, 31,0);
    tracep->declBus(c+55,"pcplus_AGEX", false,-1, 31,0);
    tracep->declBus(c+56,"op_I_AGEX", false,-1, 5,0);
    tracep->declBit(c+57,"br_cond_AGEX", false,-1);
    tracep->declBus(c+58,"pctarget_AGEX", false,-1, 31,0);
    tracep->declBus(c+59,"BHR_AGEX", false,-1, 7,0);
    tracep->declBus(c+60,"PHT_index_AGEX", false,-1, 7,0);
    tracep->declBus(c+61,"PHT_entry_AGEX", false,-1, 1,0);
    tracep->declBus(c+62,"regval_1_AGEX", false,-1, 31,0);
    tracep->declBus(c+63,"regval_2_AGEX", false,-1, 31,0);
    tracep->declBus(c+64,"sxt_imm_AGEX", false,-1, 31,0);
    tracep->declBus(c+65,"rd_AGEX", false,-1, 4,0);
    tracep->declBit(c+66,"wr_reg_AGEX", false,-1);
    tracep->declBus(c+67,"sign_temp", false,-1, 31,0);
    tracep->declBus(c+68,"aluout_AGEX", false,-1, 31,0);
    tracep->declBus(c+69,"memaddr_AGEX", false,-1, 31,0);
    tracep->declBit(c+70,"is_branch", false,-1);
    tracep->declBit(c+71,"taken", false,-1);
    tracep->declBit(c+72,"flush", false,-1);
    tracep->declBus(c+73,"flush_target", false,-1, 31,0);
    tracep->declBus(c+74,"taken_branches", false,-1, 31,0);
    tracep->declBus(c+75,"not_taken_branches", false,-1, 31,0);
    tracep->declBus(c+76,"correctly_predicted", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_BR_PREDICTOR ");
    tracep->declBit(c+231,"clk", false,-1);
    tracep->declBit(c+232,"reset", false,-1);
    tracep->declBus(c+29,"from_FE_to_predictor", false,-1, 31,0);
    tracep->declArray(c+35,"from_updater_to_predictor", false,-1, 81,0);
    tracep->declQuad(c+33,"from_predictor_to_FE", false,-1, 55,0);
    tracep->declBus(c+29,"PC_BR", false,-1, 31,0);
    tracep->declBus(c+77,"BHR", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+78+i*2,"BTB", true,(i+0), 58,0);
    }
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->declBus(c+77,"PHT_index", false,-1, 7,0);
    tracep->declQuad(c+110,"BTB_entry", false,-1, 58,0);
    tracep->declBit(c+112,"BTB_hit", false,-1);
    tracep->declBus(c+113,"target_addr", false,-1, 31,0);
    tracep->declBit(c+114,"taken", false,-1);
    tracep->declBus(c+115,"updated_BHR", false,-1, 7,0);
    tracep->declBus(c+60,"PHT_index_updater", false,-1, 7,0);
    tracep->declBus(c+116,"PHT_entry_updater", false,-1, 1,0);
    tracep->declBus(c+117,"BTB_index_updater", false,-1, 3,0);
    tracep->declQuad(c+118,"BTB_entry_updater", false,-1, 58,0);
    tracep->declBit(c+278,"br_cond_predictor", false,-1);
    tracep->declBit(c+70,"is_branch", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_DE_stage ");
    tracep->declBit(c+231,"clk", false,-1);
    tracep->declBit(c+232,"reset", false,-1);
    tracep->declArray(c+3,"from_FE_latch", false,-1, 147,0);
    tracep->declBus(c+41,"from_AGEX_to_DE", false,-1, 6,0);
    tracep->declBus(c+42,"from_MEM_to_DE", false,-1, 5,0);
    tracep->declQuad(c+43,"from_WB_to_DE", false,-1, 37,0);
    tracep->declBus(c+38,"from_DE_to_FE", false,-1, 0,0);
    tracep->declArray(c+8,"DE_latch_out", false,-1, 256,0);
    tracep->declArray(c+8,"DE_latch", false,-1, 256,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+198+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->declBus(c+279,"busy_bits", false,-1, 31,0);
    tracep->declBit(c+120,"valid_DE", false,-1);
    tracep->declBus(c+121,"inst_DE", false,-1, 31,0);
    tracep->declBus(c+122,"PC_DE", false,-1, 31,0);
    tracep->declBus(c+123,"pcplus_DE", false,-1, 31,0);
    tracep->declBus(c+124,"inst_count_DE", false,-1, 31,0);
    tracep->declArray(c+187,"DE_latch_contents", false,-1, 256,0);
    tracep->declBit(c+125,"taken", false,-1);
    tracep->declBus(c+126,"F3_DE", false,-1, 2,0);
    tracep->declBus(c+127,"F7_DE", false,-1, 6,0);
    tracep->declBus(c+128,"op_DE", false,-1, 6,0);
    tracep->declBus(c+129,"op_I_DE", false,-1, 5,0);
    tracep->declBus(c+130,"type_I_DE", false,-1, 3,0);
    tracep->declBus(c+131,"type_immediate_DE", false,-1, 2,0);
    tracep->declBit(c+132,"is_branch", false,-1);
    tracep->declBus(c+133,"sxt_imm_DE", false,-1, 31,0);
    tracep->declBit(c+134,"wr_reg_WB", false,-1);
    tracep->declBus(c+135,"rs1_DE", false,-1, 4,0);
    tracep->declBus(c+136,"rs2_DE", false,-1, 4,0);
    tracep->declBus(c+137,"rd_DE", false,-1, 4,0);
    tracep->declBus(c+196,"regval_1_DE", false,-1, 31,0);
    tracep->declBus(c+197,"regval_2_DE", false,-1, 31,0);
    tracep->declBit(c+138,"wr_reg_DE", false,-1);
    tracep->declBit(c+139,"hazard", false,-1);
    tracep->declBit(c+140,"rs1_read_DE", false,-1);
    tracep->declBit(c+141,"rs2_read_DE", false,-1);
    tracep->declBit(c+280,"rs_busy", false,-1);
    tracep->declBus(c+142,"wregno_WB", false,-1, 4,0);
    tracep->declBus(c+143,"regval_WB", false,-1, 31,0);
    tracep->declBit(c+144,"wr_reg_MEM", false,-1);
    tracep->declBus(c+145,"wregno_MEM", false,-1, 4,0);
    tracep->declBit(c+38,"pipeline_stall_DE", false,-1);
    tracep->declBit(c+72,"br_cond_DE", false,-1);
    tracep->declBus(c+65,"wregno_AGEX", false,-1, 4,0);
    tracep->declBit(c+66,"wr_reg_AGEX", false,-1);
    tracep->declBus(c+146,"BHR_DE", false,-1, 7,0);
    tracep->declBus(c+147,"PHT_index_DE", false,-1, 7,0);
    tracep->declBus(c+148,"PHT_entry_DE", false,-1, 1,0);
    tracep->declBus(c+149,"num_branches", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_FE_stage ");
    tracep->declBit(c+231,"clk", false,-1);
    tracep->declBit(c+232,"reset", false,-1);
    tracep->declBus(c+38,"from_DE_to_FE", false,-1, 0,0);
    tracep->declQuad(c+39,"from_AGEX_to_FE", false,-1, 32,0);
    tracep->declBus(c+273,"from_MEM_to_FE", false,-1, 0,0);
    tracep->declBus(c+274,"from_WB_to_FE", false,-1, 0,0);
    tracep->declQuad(c+33,"from_predictor_to_FE", false,-1, 55,0);
    tracep->declBus(c+29,"from_FE_to_predictor", false,-1, 31,0);
    tracep->declArray(c+3,"FE_latch_out", false,-1, 147,0);
    tracep->declArray(c+3,"FE_latch", false,-1, 147,0);
    tracep->declBit(c+150,"valid_FE", false,-1);
    tracep->declBit(c+72,"br_cond_FE", false,-1);
    tracep->declBus(c+29,"PC_FE_latch", false,-1, 31,0);
    tracep->declBus(c+151,"inst_count_FE", false,-1, 31,0);
    tracep->declBus(c+281,"inst_count_AGEX", false,-1, 31,0);
    tracep->declBus(c+152,"inst_FE", false,-1, 31,0);
    tracep->declBus(c+153,"pcplus_FE", false,-1, 31,0);
    tracep->declBit(c+38,"stall_pipe_FE", false,-1);
    tracep->declBus(c+73,"branch_pc_FE", false,-1, 31,0);
    tracep->declArray(c+154,"FE_latch_contents", false,-1, 147,0);
    tracep->declBus(c+113,"target_addr", false,-1, 31,0);
    tracep->declBit(c+114,"taken", false,-1);
    tracep->declBus(c+77,"PHT_index_FE", false,-1, 7,0);
    tracep->declBus(c+77,"BHR_FE", false,-1, 7,0);
    tracep->declBus(c+159,"PHT_entry_FE", false,-1, 1,0);
    tracep->declBus(c+160,"BTB_index_FE", false,-1, 3,0);
    tracep->declQuad(c+282,"BTB_entry_FE", false,-1, 60,0);
    tracep->declBit(c+112,"BTB_hit", false,-1);
    tracep->declBit(c+161,"predicted_take", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_MEM_stage ");
    tracep->declBit(c+231,"clk", false,-1);
    tracep->declBit(c+232,"reset", false,-1);
    tracep->declBus(c+277,"from_WB_to_MEM", false,-1, 0,0);
    tracep->declArray(c+17,"from_AGEX_latch", false,-1, 172,0);
    tracep->declArray(c+23,"MEM_latch_out", false,-1, 172,0);
    tracep->declBus(c+273,"from_MEM_to_FE", false,-1, 0,0);
    tracep->declBus(c+42,"from_MEM_to_DE", false,-1, 5,0);
    tracep->declBus(c+275,"from_MEM_to_AGEX", false,-1, 0,0);
    tracep->declArray(c+23,"MEM_latch", false,-1, 172,0);
    tracep->declBit(c+162,"valid_MEM", false,-1);
    tracep->declArray(c+163,"MEM_latch_contents", false,-1, 172,0);
    tracep->declBus(c+169,"op_I_MEM", false,-1, 5,0);
    tracep->declBus(c+170,"inst_count_MEM", false,-1, 31,0);
    tracep->declBus(c+171,"inst_MEM", false,-1, 31,0);
    tracep->declBus(c+172,"PC_MEM", false,-1, 31,0);
    tracep->declBus(c+173,"memaddr_MEM", false,-1, 31,0);
    tracep->declBus(c+174,"rd_val_MEM", false,-1, 31,0);
    tracep->declBus(c+175,"wr_val_MEM", false,-1, 31,0);
    tracep->declBit(c+176,"wr_mem_MEM", false,-1);
    tracep->declBit(c+176,"is_sw", false,-1);
    tracep->declBus(c+175,"aluout_MEM", false,-1, 31,0);
    tracep->declBus(c+145,"rd_MEM", false,-1, 4,0);
    tracep->declBit(c+144,"wr_reg_MEM", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_updater ");
    tracep->declBit(c+231,"clk", false,-1);
    tracep->declBit(c+232,"reset", false,-1);
    tracep->declArray(c+30,"from_AGEX_to_updater", false,-1, 83,0);
    tracep->declArray(c+35,"from_updater_to_predictor", false,-1, 81,0);
    tracep->declBus(c+59,"BHR_updater", false,-1, 7,0);
    tracep->declBus(c+60,"PHT_index_updater", false,-1, 7,0);
    tracep->declBus(c+61,"PHT_entry_updater", false,-1, 1,0);
    tracep->declBus(c+53,"PC_updater", false,-1, 31,0);
    tracep->declBit(c+57,"br_cond_updater", false,-1);
    tracep->declBit(c+70,"is_branch", false,-1);
    tracep->declBus(c+58,"target_addr", false,-1, 31,0);
    tracep->declBus(c+115,"updated_BHR", false,-1, 7,0);
    tracep->declBus(c+116,"updated_PHT_entry", false,-1, 1,0);
    tracep->declQuad(c+118,"updated_BTB_entry", false,-1, 58,0);
    tracep->declBus(c+284,"BTB_index", false,-1, 3,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vpipeline___024root__trace_init_sub__TOP__pipeline__my_WB_stage__0(Vpipeline___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_init_sub__TOP__pipeline__my_WB_stage__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+231,"clk", false,-1);
    tracep->declBit(c+232,"reset", false,-1);
    tracep->declArray(c+23,"from_MEM_latch", false,-1, 172,0);
    tracep->declBus(c+274,"from_WB_to_FE", false,-1, 0,0);
    tracep->declQuad(c+43,"from_WB_to_DE", false,-1, 37,0);
    tracep->declBus(c+276,"from_WB_to_AGEX", false,-1, 0,0);
    tracep->declBus(c+277,"from_WB_to_MEM", false,-1, 0,0);
    tracep->declBit(c+177,"valid_WB", false,-1);
    tracep->declBus(c+178,"op_I_WB", false,-1, 5,0);
    tracep->declBus(c+179,"inst_WB", false,-1, 31,0);
    tracep->declBus(c+180,"PC_WB", false,-1, 31,0);
    tracep->declBus(c+181,"inst_count_WB", false,-1, 31,0);
    tracep->declBit(c+182,"wr_reg_WB", false,-1);
    tracep->declBus(c+183,"wregno_WB", false,-1, 4,0);
    tracep->declBus(c+183,"rd_WB", false,-1, 4,0);
    tracep->declBus(c+184,"regval_WB", false,-1, 31,0);
    tracep->declBus(c+185,"aluout_WB", false,-1, 31,0);
    tracep->declBus(c+186,"rd_val_WB", false,-1, 31,0);
    tracep->pushNamePrefix("last_WB_value");
    tracep->declBus(c+233,"[0]", false,-1, 31,0);
    tracep->declBus(c+234,"[1]", false,-1, 31,0);
    tracep->declBus(c+235,"[2]", false,-1, 31,0);
    tracep->declBus(c+236,"[3]", false,-1, 31,0);
    tracep->declBus(c+237,"[4]", false,-1, 31,0);
    tracep->declBus(c+238,"[5]", false,-1, 31,0);
    tracep->declBus(c+239,"[6]", false,-1, 31,0);
    tracep->declBus(c+240,"[7]", false,-1, 31,0);
    tracep->declBus(c+241,"[8]", false,-1, 31,0);
    tracep->declBus(c+242,"[9]", false,-1, 31,0);
    tracep->declBus(c+243,"[10]", false,-1, 31,0);
    tracep->declBus(c+244,"[11]", false,-1, 31,0);
    tracep->declBus(c+245,"[12]", false,-1, 31,0);
    tracep->declBus(c+246,"[13]", false,-1, 31,0);
    tracep->declBus(c+247,"[14]", false,-1, 31,0);
    tracep->declBus(c+248,"[15]", false,-1, 31,0);
    tracep->declBus(c+249,"[16]", false,-1, 31,0);
    tracep->declBus(c+250,"[17]", false,-1, 31,0);
    tracep->declBus(c+251,"[18]", false,-1, 31,0);
    tracep->declBus(c+252,"[19]", false,-1, 31,0);
    tracep->declBus(c+253,"[20]", false,-1, 31,0);
    tracep->declBus(c+254,"[21]", false,-1, 31,0);
    tracep->declBus(c+255,"[22]", false,-1, 31,0);
    tracep->declBus(c+256,"[23]", false,-1, 31,0);
    tracep->declBus(c+257,"[24]", false,-1, 31,0);
    tracep->declBus(c+258,"[25]", false,-1, 31,0);
    tracep->declBus(c+259,"[26]", false,-1, 31,0);
    tracep->declBus(c+260,"[27]", false,-1, 31,0);
    tracep->declBus(c+261,"[28]", false,-1, 31,0);
    tracep->declBus(c+262,"[29]", false,-1, 31,0);
    tracep->declBus(c+263,"[30]", false,-1, 31,0);
    tracep->declBus(c+264,"[31]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB_counters");
    tracep->declBus(c+265,"[0]", false,-1, 31,0);
    tracep->declBus(c+266,"[1]", false,-1, 31,0);
    tracep->declBus(c+267,"[2]", false,-1, 31,0);
    tracep->declBus(c+268,"[3]", false,-1, 31,0);
    tracep->declBus(c+269,"[4]", false,-1, 31,0);
    tracep->declBus(c+270,"[5]", false,-1, 31,0);
    tracep->declBus(c+271,"[6]", false,-1, 31,0);
    tracep->declBus(c+272,"[7]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+230,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vpipeline___024root__trace_init_top(Vpipeline___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_init_top\n"); );
    // Body
    Vpipeline___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("pipeline ");
    Vpipeline___024root__trace_init_sub__TOP__pipeline__0(vlSelf, tracep);
    tracep->pushNamePrefix("my_WB_stage ");
    Vpipeline___024root__trace_init_sub__TOP__pipeline__my_WB_stage__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vpipeline___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vpipeline___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vpipeline___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vpipeline___024root__trace_register(Vpipeline___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vpipeline___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vpipeline___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vpipeline___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vpipeline___024root__trace_full_sub_0(Vpipeline___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vpipeline___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_full_top_0\n"); );
    // Init
    Vpipeline___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpipeline___024root*>(voidSelf);
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vpipeline___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vpipeline___024root__trace_full_sub_0(Vpipeline___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_h8d788692__0;
    VlWide<3>/*95:0*/ __Vtemp_h37955558__0;
    VlWide<6>/*191:0*/ __Vtemp_hf9bf48fb__0;
    VlWide<5>/*159:0*/ __Vtemp_h084ac38d__0;
    VlWide<6>/*191:0*/ __Vtemp_h5f2e7620__0;
    VlWide<4>/*127:0*/ __Vtemp_h8c5112c3__0;
    VlWide<9>/*287:0*/ __Vtemp_hd390b217__0;
    // Body
    bufp->fullIData(oldp+1,(vlSymsp->TOP__pipeline.__PVT__my_BR_PREDICTOR__DOT__i),32);
    bufp->fullIData(oldp+2,(vlSymsp->TOP__pipeline.__PVT__cycle_count),32);
    bufp->fullWData(oldp+3,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch),148);
    bufp->fullWData(oldp+8,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch),257);
    bufp->fullWData(oldp+17,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch),173);
    bufp->fullWData(oldp+23,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch),173);
    bufp->fullIData(oldp+29,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch),32);
    __Vtemp_h8d788692__0[0U] = (IData)((((QData)((IData)(
                                                         (1U 
                                                          & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                             >> 0x12U)))) 
                                         << 0x33U) 
                                        | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX)) 
                                            << 0x32U) 
                                           | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__pctarget_AGEX)) 
                                               << 0x12U) 
                                              | (QData)((IData)(
                                                                (0x3ffffU 
                                                                 & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U])))))));
    __Vtemp_h8d788692__0[1U] = ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                 << 0x14U) | (IData)(
                                                     ((((QData)((IData)(
                                                                        (1U 
                                                                         & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                                            >> 0x12U)))) 
                                                        << 0x33U) 
                                                       | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX)) 
                                                           << 0x32U) 
                                                          | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__pctarget_AGEX)) 
                                                              << 0x12U) 
                                                             | (QData)((IData)(
                                                                               (0x3ffffU 
                                                                                & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U])))))) 
                                                      >> 0x20U)));
    __Vtemp_h8d788692__0[2U] = (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                >> 0xcU);
    bufp->fullWData(oldp+30,(__Vtemp_h8d788692__0),84);
    bufp->fullQData(oldp+33,((((QData)((IData)((2U 
                                                <= (IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT_entry_FE)))) 
                               << 0x37U) | (((QData)((IData)(
                                                             (((0x3ffffffU 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__pipeline.__PVT__my_BR_PREDICTOR__DOT__BTB_entry 
                                                                           >> 0x21U))) 
                                                               == 
                                                               (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                                >> 6U)) 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__pipeline.__PVT__my_BR_PREDICTOR__DOT__BTB_entry 
                                                                         >> 0x20U))))) 
                                             << 0x36U) 
                                            | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_BR_PREDICTOR__DOT__BTB_entry)) 
                                                << 0x16U) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSymsp->TOP__pipeline.__PVT__my_BR_PREDICTOR__DOT__BHR) 
                                                                   << 0xeU) 
                                                                  | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_BR_PREDICTOR__DOT__BHR) 
                                                                      << 6U) 
                                                                     | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT_entry_FE) 
                                                                         << 4U) 
                                                                        | (0xfU 
                                                                           & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)))))))))),56);
    __Vtemp_h37955558__0[0U] = (IData)((0x100000000ULL 
                                        | (((QData)((IData)(
                                                            (0xfU 
                                                             & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                                >> 2U)))) 
                                            << 0x3bU) 
                                           | (((QData)((IData)(
                                                               (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                                >> 6U))) 
                                               << 0x21U) 
                                              | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__pctarget_AGEX))))));
    __Vtemp_h37955558__0[1U] = ((((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX)
                                   ? ((3U == (3U & 
                                              vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]))
                                       ? 3U : ((IData)(1U) 
                                               + vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]))
                                   : ((0U == (3U & 
                                              vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]))
                                       ? 0U : (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                               - (IData)(1U)))) 
                                 << 0x1fU) | (IData)(
                                                     ((0x100000000ULL 
                                                       | (((QData)((IData)(
                                                                           (0xfU 
                                                                            & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                                               >> 2U)))) 
                                                           << 0x3bU) 
                                                          | (((QData)((IData)(
                                                                              (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                                               >> 6U))) 
                                                              << 0x21U) 
                                                             | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__pctarget_AGEX))))) 
                                                      >> 0x20U)));
    __Vtemp_h37955558__0[2U] = ((0x20000U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                             >> 1U)) 
                                | ((0x1fe00U & ((0xfffffc00U 
                                                 & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]) 
                                                | ((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX) 
                                                   << 9U))) 
                                   | ((0x1feU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                 >> 1U)) 
                                      | (1U & (((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX)
                                                 ? 
                                                ((3U 
                                                  == 
                                                  (3U 
                                                   & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]))
                                                  ? 3U
                                                  : 
                                                 ((IData)(1U) 
                                                  + 
                                                  vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]))
                                                 : 
                                                ((0U 
                                                  == 
                                                  (3U 
                                                   & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]))
                                                  ? 0U
                                                  : 
                                                 (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                  - (IData)(1U)))) 
                                               >> 1U)))));
    bufp->fullWData(oldp+35,(__Vtemp_h37955558__0),82);
    bufp->fullBit(oldp+38,(vlSymsp->TOP__pipeline.__PVT__from_DE_to_FE));
    bufp->fullQData(oldp+39,((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_cond_FE)) 
                               << 0x20U) | (QData)((IData)(
                                                           ((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX)
                                                             ? vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__pctarget_AGEX
                                                             : 
                                                            ((IData)(4U) 
                                                             + 
                                                             vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U])))))),33);
    bufp->fullCData(oldp+41,((((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_cond_FE) 
                               << 6U) | ((0x20U & (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                   >> 0xfU)) 
                                         | (0x1fU & 
                                            (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                             >> 0x15U))))),7);
    bufp->fullCData(oldp+42,(((0x20U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                        << 5U)) | (0x1fU 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                      >> 1U)))),6);
    bufp->fullQData(oldp+43,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE),38);
    __Vtemp_hf9bf48fb__0[0U] = (IData)((((QData)((IData)(
                                                         (0x3fU 
                                                          & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                             >> 0x14U)))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX))));
    __Vtemp_hf9bf48fb__0[1U] = ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                                 << 6U) | (IData)((
                                                   (((QData)((IData)(
                                                                     (0x3fU 
                                                                      & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                                         >> 0x14U)))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX))) 
                                                   >> 0x20U)));
    __Vtemp_hf9bf48fb__0[2U] = (((IData)((0x3fffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                              << 6U) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U])) 
                                                >> 0x1aU)))) 
                                 << 6U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                                           >> 0x1aU));
    __Vtemp_hf9bf48fb__0[3U] = ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                 << 0xcU) | (((IData)(
                                                      (0x3fffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                           << 6U) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U])) 
                                                             >> 0x1aU)))) 
                                              >> 0x1aU) 
                                             | ((IData)(
                                                        ((0x3fffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                              << 6U) 
                                                             | ((QData)((IData)(
                                                                                vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U])) 
                                                                >> 0x1aU))) 
                                                         >> 0x20U)) 
                                                << 6U)));
    __Vtemp_hf9bf48fb__0[4U] = ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                 >> 0x14U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                              << 0xcU));
    __Vtemp_hf9bf48fb__0[5U] = ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                 >> 0x14U) | (0x1000U 
                                              & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                 << 0xcU)));
    bufp->fullWData(oldp+45,(__Vtemp_hf9bf48fb__0),173);
    bufp->fullBit(oldp+51,((1U & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U])));
    bufp->fullIData(oldp+52,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U]),32);
    bufp->fullIData(oldp+53,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U]),32);
    bufp->fullIData(oldp+54,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                               << 6U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                         >> 0x1aU))),32);
    bufp->fullIData(oldp+55,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U]),32);
    bufp->fullCData(oldp+56,((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                              >> 0x1aU)),6);
    bufp->fullBit(oldp+57,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX));
    bufp->fullIData(oldp+58,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__pctarget_AGEX),32);
    bufp->fullCData(oldp+59,((0xffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                       >> 0xaU))),8);
    bufp->fullCData(oldp+60,((0xffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                       >> 2U))),8);
    bufp->fullCData(oldp+61,((3U & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U])),2);
    bufp->fullIData(oldp+62,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                               << 6U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                         >> 0x1aU))),32);
    bufp->fullIData(oldp+63,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                               << 6U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                         >> 0x1aU))),32);
    bufp->fullIData(oldp+64,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                               << 6U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                         >> 0x1aU))),32);
    bufp->fullCData(oldp+65,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                       >> 0x15U))),5);
    bufp->fullBit(oldp+66,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                  >> 0x14U))));
    bufp->fullIData(oldp+67,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__sign_temp),32);
    bufp->fullIData(oldp+68,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX),32);
    bufp->fullIData(oldp+69,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX),32);
    bufp->fullBit(oldp+70,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                  >> 0x12U))));
    bufp->fullBit(oldp+71,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                  >> 0x13U))));
    bufp->fullBit(oldp+72,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_cond_FE));
    bufp->fullIData(oldp+73,(((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX)
                               ? vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__pctarget_AGEX
                               : ((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U]))),32);
    bufp->fullIData(oldp+74,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__taken_branches),32);
    bufp->fullIData(oldp+75,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__not_taken_branches),32);
    bufp->fullIData(oldp+76,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__correctly_predicted),32);
    bufp->fullCData(oldp+77,(vlSymsp->TOP__pipeline.__PVT__my_BR_PREDICTOR__DOT__BHR),8);
    bufp->fullQData(oldp+78,(vlSymsp->TOP__pipeline.__PVT__my_BR_PREDICTOR__DOT__BTB[0]),59);
    bufp->fullQData(oldp+80,(vlSymsp->TOP__pipeline.__PVT__my_BR_PREDICTOR__DOT__BTB[1]),59);
    bufp->fullQData(oldp+82,(vlSymsp->TOP__pipeline.__PVT__my_BR_PREDICTOR__DOT__BTB[2]),59);
    bufp->fullQData(oldp+84,(vlSymsp->TOP__pipeline.__PVT__my_BR_PREDICTOR__DOT__BTB[3]),59);
    bufp->fullQData(oldp+86,(vlSymsp->TOP__pipeline.__PVT__my_BR_PREDICTOR__DOT__BTB[4]),59);
    bufp->fullQData(oldp+88,(vlSymsp->TOP__pipeline.__PVT__my_BR_PREDICTOR__DOT__BTB[5]),59);
    bufp->fullQData(oldp+90,(vlSymsp->TOP__pipeline.__PVT__my_BR_PREDICTOR__DOT__BTB[6]),59);
    bufp->fullQData(oldp+92,(vlSymsp->TOP__pipeline.__PVT__my_BR_PREDICTOR__DOT__BTB[7]),59);
    bufp->fullQData(oldp+94,(vlSymsp->TOP__pipeline.__PVT__my_BR_PREDICTOR__DOT__BTB[8]),59);
    bufp->fullQData(oldp+96,(vlSymsp->TOP__pipeline.__PVT__my_BR_PREDICTOR__DOT__BTB[9]),59);
    bufp->fullQData(oldp+98,(vlSymsp->TOP__pipeline.__PVT__my_BR_PREDICTOR__DOT__BTB[10]),59);
    bufp->fullQData(oldp+100,(vlSymsp->TOP__pipeline.__PVT__my_BR_PREDICTOR__DOT__BTB[11]),59);
    bufp->fullQData(oldp+102,(vlSymsp->TOP__pipeline.__PVT__my_BR_PREDICTOR__DOT__BTB[12]),59);
    bufp->fullQData(oldp+104,(vlSymsp->TOP__pipeline.__PVT__my_BR_PREDICTOR__DOT__BTB[13]),59);
    bufp->fullQData(oldp+106,(vlSymsp->TOP__pipeline.__PVT__my_BR_PREDICTOR__DOT__BTB[14]),59);
    bufp->fullQData(oldp+108,(vlSymsp->TOP__pipeline.__PVT__my_BR_PREDICTOR__DOT__BTB[15]),59);
    bufp->fullQData(oldp+110,(vlSymsp->TOP__pipeline.__PVT__my_BR_PREDICTOR__DOT__BTB_entry),59);
    bufp->fullBit(oldp+112,((((0x3ffffffU & (IData)(
                                                    (vlSymsp->TOP__pipeline.__PVT__my_BR_PREDICTOR__DOT__BTB_entry 
                                                     >> 0x21U))) 
                              == (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                  >> 6U)) & (IData)(
                                                    (vlSymsp->TOP__pipeline.__PVT__my_BR_PREDICTOR__DOT__BTB_entry 
                                                     >> 0x20U)))));
    bufp->fullIData(oldp+113,((IData)(vlSymsp->TOP__pipeline.__PVT__my_BR_PREDICTOR__DOT__BTB_entry)),32);
    bufp->fullBit(oldp+114,((2U <= (IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT_entry_FE))));
    bufp->fullCData(oldp+115,((0xffU & (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                          << 0x17U) 
                                         | (0x7ffffeU 
                                            & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                               >> 9U))) 
                                        | (IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX)))),8);
    bufp->fullCData(oldp+116,((3U & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX)
                                      ? ((3U == (3U 
                                                 & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]))
                                          ? 3U : ((IData)(1U) 
                                                  + 
                                                  vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]))
                                      : ((0U == (3U 
                                                 & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]))
                                          ? 0U : (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                  - (IData)(1U)))))),2);
    bufp->fullCData(oldp+117,((0xfU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                       >> 2U))),4);
    bufp->fullQData(oldp+118,((0x100000000ULL | (((QData)((IData)(
                                                                  (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                                   >> 6U))) 
                                                  << 0x21U) 
                                                 | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__pctarget_AGEX))))),59);
    bufp->fullBit(oldp+120,((1U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                   >> 0x13U))));
    bufp->fullIData(oldp+121,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                << 0xdU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                            >> 0x13U))),32);
    bufp->fullIData(oldp+122,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                << 0xdU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                            >> 0x13U))),32);
    bufp->fullIData(oldp+123,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                << 0xdU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                            >> 0x13U))),32);
    bufp->fullIData(oldp+124,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                << 0xdU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                            >> 0x13U))),32);
    bufp->fullBit(oldp+125,((1U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                   >> 0x12U))));
    bufp->fullCData(oldp+126,((7U & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                      << 1U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                >> 0x1fU)))),3);
    bufp->fullCData(oldp+127,((0x7fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                        >> 0xcU))),7);
    bufp->fullCData(oldp+128,((0x7fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                        >> 0x13U))),7);
    bufp->fullCData(oldp+129,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE),6);
    bufp->fullCData(oldp+130,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE),4);
    bufp->fullCData(oldp+131,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE),3);
    bufp->fullBit(oldp+132,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_branch));
    bufp->fullIData(oldp+133,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                ? (((- (IData)((1U 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   >> 0x12U)))) 
                                    << 0xbU) | (0x7ffU 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   >> 7U)))
                                : ((4U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                       >> 0x12U)))) 
                                        << 0xbU) | 
                                       ((0x7e0U & (
                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   >> 7U)) 
                                        | (0x1fU & 
                                           (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                            >> 0x1aU))))
                                    : ((5U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                        ? (((- (IData)(
                                                       (1U 
                                                        & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                           >> 0x12U)))) 
                                            << 0xcU) 
                                           | ((0x800U 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                  >> 0xfU)) 
                                              | ((0x7e0U 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     >> 7U)) 
                                                 | (0x1eU 
                                                    & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                       >> 0x1aU)))))
                                        : ((3U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                            ? (0xfffff000U 
                                               & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   << 0xdU) 
                                                  | (0x1000U 
                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                        >> 0x13U))))
                                            : ((2U 
                                                == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                ? (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                   >> 0x12U)))) 
                                                    << 0x14U) 
                                                   | ((0xff000U 
                                                       & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                           << 0xdU) 
                                                          | (0x1000U 
                                                             & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                >> 0x13U)))) 
                                                      | ((0x800U 
                                                          & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                             << 4U)) 
                                                         | (0x7feU 
                                                            & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                               >> 7U)))))
                                                : 0U)))))),32);
    bufp->fullBit(oldp+134,((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                           >> 0x25U)))));
    bufp->fullCData(oldp+135,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                        >> 2U))),5);
    bufp->fullCData(oldp+136,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                        >> 7U))),5);
    bufp->fullCData(oldp+137,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                        >> 0x1aU))),5);
    bufp->fullBit(oldp+138,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__wr_reg_DE));
    bufp->fullBit(oldp+139,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__hazard));
    bufp->fullBit(oldp+140,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__rs1_read_DE));
    bufp->fullBit(oldp+141,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__rs2_read_DE));
    bufp->fullCData(oldp+142,((0x1fU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                                >> 0x20U)))),5);
    bufp->fullIData(oldp+143,((IData)(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE)),32);
    bufp->fullBit(oldp+144,((1U & vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U])));
    bufp->fullCData(oldp+145,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                        >> 1U))),5);
    bufp->fullCData(oldp+146,((0xffU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                        >> 0xaU))),8);
    bufp->fullCData(oldp+147,((0xffU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                        >> 2U))),8);
    bufp->fullCData(oldp+148,((3U & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U])),2);
    bufp->fullIData(oldp+149,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__num_branches),32);
    bufp->fullBit(oldp+150,(((0U < vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch) 
                             & (0x79cU >= vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))));
    bufp->fullIData(oldp+151,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE),32);
    bufp->fullIData(oldp+152,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                              [(0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                           >> 2U))]),32);
    bufp->fullIData(oldp+153,(((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)),32);
    __Vtemp_h084ac38d__0[0U] = ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE 
                                 << 0x13U) | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__predicted_take) 
                                               << 0x12U) 
                                              | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_BR_PREDICTOR__DOT__BHR) 
                                                  << 0xaU) 
                                                 | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_BR_PREDICTOR__DOT__BHR) 
                                                     << 2U) 
                                                    | (IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT_entry_FE)))));
    __Vtemp_h084ac38d__0[1U] = ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE 
                                 >> 0xdU) | (((IData)(4U) 
                                              + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch) 
                                             << 0x13U));
    __Vtemp_h084ac38d__0[2U] = ((((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch) 
                                 >> 0xdU) | ((IData)(
                                                     (((QData)((IData)(
                                                                       vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                                                       [
                                                                       (0x3fffU 
                                                                        & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                                           >> 2U))])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                                             << 0x13U));
    __Vtemp_h084ac38d__0[3U] = (((IData)((((QData)((IData)(
                                                           vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                                           [
                                                           (0x3fffU 
                                                            & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                               >> 2U))])) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                                 >> 0xdU) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                                                        [
                                                                        (0x3fffU 
                                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                                            >> 2U))])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                                      >> 0x20U)) 
                                             << 0x13U));
    __Vtemp_h084ac38d__0[4U] = ((((0U < vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch) 
                                  & (0x79cU >= vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)) 
                                 << 0x13U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                                                         [
                                                                         (0x3fffU 
                                                                          & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                                             >> 2U))])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                                       >> 0x20U)) 
                                              >> 0xdU));
    bufp->fullWData(oldp+154,(__Vtemp_h084ac38d__0),148);
    bufp->fullCData(oldp+159,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT_entry_FE),2);
    bufp->fullCData(oldp+160,((0xfU & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)),4);
    bufp->fullBit(oldp+161,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__predicted_take));
    bufp->fullBit(oldp+162,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                   >> 0xcU))));
    __Vtemp_h5f2e7620__0[0U] = vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
        [(0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                     >> 2U))];
    __Vtemp_h5f2e7620__0[1U] = vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U];
    __Vtemp_h5f2e7620__0[2U] = vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U];
    __Vtemp_h5f2e7620__0[3U] = vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U];
    __Vtemp_h5f2e7620__0[4U] = vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U];
    __Vtemp_h5f2e7620__0[5U] = (0x1fffU & vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U]);
    bufp->fullWData(oldp+163,(__Vtemp_h5f2e7620__0),173);
    bufp->fullCData(oldp+169,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                        >> 6U))),6);
    bufp->fullIData(oldp+170,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                << 0x1aU) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                             >> 6U))),32);
    bufp->fullIData(oldp+171,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                << 0x14U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                             >> 0xcU))),32);
    bufp->fullIData(oldp+172,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                << 0x14U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                             >> 0xcU))),32);
    bufp->fullIData(oldp+173,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U]),32);
    bufp->fullIData(oldp+174,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                              [(0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                           >> 2U))]),32);
    bufp->fullIData(oldp+175,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                << 0x1aU) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                             >> 6U))),32);
    bufp->fullBit(oldp+176,((0x18U == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                                >> 6U)))));
    bufp->fullBit(oldp+177,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                   >> 0xcU))));
    bufp->fullCData(oldp+178,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                        >> 6U))),6);
    bufp->fullIData(oldp+179,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                << 0x14U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                             >> 0xcU))),32);
    bufp->fullIData(oldp+180,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                << 0x14U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                             >> 0xcU))),32);
    bufp->fullIData(oldp+181,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                << 0x1aU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                             >> 6U))),32);
    bufp->fullBit(oldp+182,((1U & vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U])));
    bufp->fullCData(oldp+183,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                        >> 1U))),5);
    bufp->fullIData(oldp+184,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__regval_WB),32);
    bufp->fullIData(oldp+185,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                << 0x1aU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                             >> 6U))),32);
    bufp->fullIData(oldp+186,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U]),32);
    __Vtemp_h8c5112c3__0[0U] = ((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                 ? (((- (IData)((1U 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                    >> 0x12U)))) 
                                     << 0xbU) | (0x7ffU 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                    >> 7U)))
                                 : ((4U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                     ? (((- (IData)(
                                                    (1U 
                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                        >> 0x12U)))) 
                                         << 0xbU) | 
                                        ((0x7e0U & 
                                          (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                           >> 7U)) 
                                         | (0x1fU & 
                                            (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                             >> 0x1aU))))
                                     : ((5U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                         ? (((- (IData)(
                                                        (1U 
                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                            >> 0x12U)))) 
                                             << 0xcU) 
                                            | ((0x800U 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 0xfU)) 
                                               | ((0x7e0U 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                      >> 7U)) 
                                                  | (0x1eU 
                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                        >> 0x1aU)))))
                                         : ((3U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                             ? (0xfffff000U 
                                                & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                    << 0xdU) 
                                                   | (0x1000U 
                                                      & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                         >> 0x13U))))
                                             : ((2U 
                                                 == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                 ? 
                                                (((- (IData)(
                                                             (1U 
                                                              & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                 >> 0x12U)))) 
                                                  << 0x14U) 
                                                 | ((0xff000U 
                                                     & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                         << 0xdU) 
                                                        | (0x1000U 
                                                           & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                              >> 0x13U)))) 
                                                    | ((0x800U 
                                                        & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                           << 4U)) 
                                                       | (0x7feU 
                                                          & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                             >> 7U)))))
                                                 : 0U)))));
    __Vtemp_hd390b217__0[0U] = ((__Vtemp_h8c5112c3__0[0U] 
                                 << 0x1aU) | ((0x3e00000U 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                  >> 5U)) 
                                              | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__wr_reg_DE) 
                                                  << 0x14U) 
                                                 | ((0x80000U 
                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                        << 1U)) 
                                                    | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_branch) 
                                                        << 0x12U) 
                                                       | (0x3ffffU 
                                                          & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U]))))));
    __Vtemp_hd390b217__0[1U] = ((__Vtemp_h8c5112c3__0[0U] 
                                 >> 6U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                           [(0x1fU 
                                             & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                >> 7U))] 
                                           << 0x1aU));
    __Vtemp_hd390b217__0[2U] = ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                 [(0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                            >> 7U))] 
                                 >> 6U) | ((IData)(
                                                   (((QData)((IData)(
                                                                     ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                       << 0xdU) 
                                                                      | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                         >> 0x13U)))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                                      [
                                                                      (0x1fU 
                                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                          >> 2U))])))) 
                                           << 0x1aU));
    __Vtemp_hd390b217__0[3U] = (((IData)((((QData)((IData)(
                                                           ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                             << 0xdU) 
                                                            | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                               >> 0x13U)))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                            [
                                                            (0x1fU 
                                                             & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                >> 2U))])))) 
                                 >> 6U) | ((IData)(
                                                   ((((QData)((IData)(
                                                                      ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                        << 0xdU) 
                                                                       | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                          >> 0x13U)))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                                       [
                                                                       (0x1fU 
                                                                        & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                           >> 2U))]))) 
                                                    >> 0x20U)) 
                                           << 0x1aU));
    __Vtemp_hd390b217__0[4U] = (((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE) 
                                 << 0x1aU) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                           << 0xdU) 
                                                                          | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                             >> 0x13U)))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                                          [
                                                                          (0x1fU 
                                                                           & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                              >> 2U))]))) 
                                                       >> 0x20U)) 
                                              >> 6U));
    __Vtemp_hd390b217__0[5U] = ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                 << 0xdU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                             >> 0x13U));
    __Vtemp_hd390b217__0[6U] = ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                 << 0xdU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                             >> 0x13U));
    __Vtemp_hd390b217__0[7U] = ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                 << 0xdU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                             >> 0x13U));
    __Vtemp_hd390b217__0[8U] = (1U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                      >> 0x13U));
    bufp->fullWData(oldp+187,(__Vtemp_hd390b217__0),257);
    bufp->fullIData(oldp+196,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                              [(0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                         >> 2U))]),32);
    bufp->fullIData(oldp+197,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                              [(0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                         >> 7U))]),32);
    bufp->fullIData(oldp+198,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[0]),32);
    bufp->fullIData(oldp+199,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[1]),32);
    bufp->fullIData(oldp+200,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[2]),32);
    bufp->fullIData(oldp+201,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[3]),32);
    bufp->fullIData(oldp+202,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[4]),32);
    bufp->fullIData(oldp+203,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[5]),32);
    bufp->fullIData(oldp+204,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[6]),32);
    bufp->fullIData(oldp+205,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[7]),32);
    bufp->fullIData(oldp+206,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[8]),32);
    bufp->fullIData(oldp+207,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[9]),32);
    bufp->fullIData(oldp+208,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[10]),32);
    bufp->fullIData(oldp+209,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[11]),32);
    bufp->fullIData(oldp+210,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[12]),32);
    bufp->fullIData(oldp+211,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[13]),32);
    bufp->fullIData(oldp+212,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[14]),32);
    bufp->fullIData(oldp+213,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[15]),32);
    bufp->fullIData(oldp+214,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[16]),32);
    bufp->fullIData(oldp+215,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[17]),32);
    bufp->fullIData(oldp+216,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[18]),32);
    bufp->fullIData(oldp+217,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[19]),32);
    bufp->fullIData(oldp+218,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[20]),32);
    bufp->fullIData(oldp+219,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[21]),32);
    bufp->fullIData(oldp+220,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[22]),32);
    bufp->fullIData(oldp+221,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[23]),32);
    bufp->fullIData(oldp+222,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[24]),32);
    bufp->fullIData(oldp+223,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[25]),32);
    bufp->fullIData(oldp+224,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[26]),32);
    bufp->fullIData(oldp+225,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[27]),32);
    bufp->fullIData(oldp+226,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[28]),32);
    bufp->fullIData(oldp+227,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[29]),32);
    bufp->fullIData(oldp+228,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[30]),32);
    bufp->fullIData(oldp+229,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[31]),32);
    bufp->fullIData(oldp+230,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+231,(vlSelf->clk));
    bufp->fullBit(oldp+232,(vlSelf->reset));
    bufp->fullIData(oldp+233,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0U]),32);
    bufp->fullIData(oldp+234,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[1U]),32);
    bufp->fullIData(oldp+235,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[2U]),32);
    bufp->fullIData(oldp+236,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[3U]),32);
    bufp->fullIData(oldp+237,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[4U]),32);
    bufp->fullIData(oldp+238,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[5U]),32);
    bufp->fullIData(oldp+239,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[6U]),32);
    bufp->fullIData(oldp+240,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[7U]),32);
    bufp->fullIData(oldp+241,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[8U]),32);
    bufp->fullIData(oldp+242,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[9U]),32);
    bufp->fullIData(oldp+243,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xaU]),32);
    bufp->fullIData(oldp+244,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xbU]),32);
    bufp->fullIData(oldp+245,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xcU]),32);
    bufp->fullIData(oldp+246,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xdU]),32);
    bufp->fullIData(oldp+247,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xeU]),32);
    bufp->fullIData(oldp+248,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xfU]),32);
    bufp->fullIData(oldp+249,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x10U]),32);
    bufp->fullIData(oldp+250,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x11U]),32);
    bufp->fullIData(oldp+251,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x12U]),32);
    bufp->fullIData(oldp+252,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x13U]),32);
    bufp->fullIData(oldp+253,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x14U]),32);
    bufp->fullIData(oldp+254,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x15U]),32);
    bufp->fullIData(oldp+255,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x16U]),32);
    bufp->fullIData(oldp+256,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x17U]),32);
    bufp->fullIData(oldp+257,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x18U]),32);
    bufp->fullIData(oldp+258,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x19U]),32);
    bufp->fullIData(oldp+259,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1aU]),32);
    bufp->fullIData(oldp+260,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1bU]),32);
    bufp->fullIData(oldp+261,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1cU]),32);
    bufp->fullIData(oldp+262,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1dU]),32);
    bufp->fullIData(oldp+263,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1eU]),32);
    bufp->fullIData(oldp+264,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1fU]),32);
    bufp->fullIData(oldp+265,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[0U]),32);
    bufp->fullIData(oldp+266,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[1U]),32);
    bufp->fullIData(oldp+267,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[2U]),32);
    bufp->fullIData(oldp+268,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[3U]),32);
    bufp->fullIData(oldp+269,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[4U]),32);
    bufp->fullIData(oldp+270,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[5U]),32);
    bufp->fullIData(oldp+271,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[6U]),32);
    bufp->fullIData(oldp+272,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[7U]),32);
    bufp->fullBit(oldp+273,(vlSymsp->TOP__pipeline.__PVT__from_MEM_to_FE));
    bufp->fullBit(oldp+274,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_FE));
    bufp->fullBit(oldp+275,(vlSymsp->TOP__pipeline.__PVT__from_MEM_to_AGEX));
    bufp->fullBit(oldp+276,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_AGEX));
    bufp->fullBit(oldp+277,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_MEM));
    bufp->fullBit(oldp+278,(vlSymsp->TOP__pipeline.__PVT__my_BR_PREDICTOR__DOT__br_cond_predictor));
    bufp->fullIData(oldp+279,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__busy_bits),32);
    bufp->fullBit(oldp+280,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__rs_busy));
    bufp->fullIData(oldp+281,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_AGEX),32);
    bufp->fullQData(oldp+282,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_entry_FE),61);
    bufp->fullCData(oldp+284,(vlSymsp->TOP__pipeline.__PVT__my_updater__DOT__BTB_index),4);
}
