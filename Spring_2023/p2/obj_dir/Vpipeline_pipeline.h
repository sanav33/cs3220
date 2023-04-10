// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpipeline.h for the primary calling header

#ifndef VERILATED_VPIPELINE_PIPELINE_H_
#define VERILATED_VPIPELINE_PIPELINE_H_  // guard

#include "verilated.h"

class Vpipeline__Syms;
class Vpipeline_WB_STAGE;


class Vpipeline_pipeline final : public VerilatedModule {
  public:
    // CELLS
    Vpipeline_WB_STAGE* my_WB_stage;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __PVT__from_DE_to_FE;
    CData/*0:0*/ __PVT__from_MEM_to_FE;
    CData/*0:0*/ __PVT__from_MEM_to_AGEX;
    CData/*0:0*/ __PVT__my_FE_stage__DOT__br_cond_FE;
    CData/*1:0*/ __PVT__my_FE_stage__DOT__PHT_entry_FE;
    CData/*0:0*/ __PVT__my_FE_stage__DOT__predicted_take;
    CData/*7:0*/ __PVT__my_BR_PREDICTOR__DOT__BHR;
    CData/*0:0*/ __PVT__my_BR_PREDICTOR__DOT__br_cond_predictor;
    CData/*2:0*/ my_DE_stage__DOT____Vxrand_h9b4aa07f__0;
    CData/*3:0*/ my_DE_stage__DOT____Vxrand_h9b4ad0b7__0;
    CData/*5:0*/ __PVT__my_DE_stage__DOT__op_I_DE;
    CData/*3:0*/ __PVT__my_DE_stage__DOT__type_I_DE;
    CData/*2:0*/ __PVT__my_DE_stage__DOT__type_immediate_DE;
    CData/*0:0*/ __PVT__my_DE_stage__DOT__is_branch;
    CData/*0:0*/ __PVT__my_DE_stage__DOT__wr_reg_DE;
    CData/*0:0*/ __PVT__my_DE_stage__DOT__hazard;
    CData/*0:0*/ __PVT__my_DE_stage__DOT__rs1_read_DE;
    CData/*0:0*/ __PVT__my_DE_stage__DOT__rs2_read_DE;
    CData/*0:0*/ __PVT__my_DE_stage__DOT__rs_busy;
    CData/*0:0*/ __PVT__my_AGEX_stage__DOT__br_cond_AGEX;
    CData/*3:0*/ __PVT__my_updater__DOT__BTB_index;
    CData/*0:0*/ __Vdlyvset__my_MEM_stage__DOT__dmem__v0;
    SData/*13:0*/ __Vdlyvdim0__my_MEM_stage__DOT__dmem__v0;
    IData/*31:0*/ __PVT__cycle_count;
    VlWide<5>/*147:0*/ __PVT__my_FE_stage__DOT__FE_latch;
    IData/*31:0*/ __PVT__my_FE_stage__DOT__PC_FE_latch;
    IData/*31:0*/ __PVT__my_FE_stage__DOT__inst_count_FE;
    IData/*31:0*/ __PVT__my_FE_stage__DOT__inst_count_AGEX;
    IData/*31:0*/ __PVT__my_FE_stage__DOT__pcplus_FE;
    IData/*31:0*/ __PVT__my_BR_PREDICTOR__DOT__i;
    VlWide<9>/*256:0*/ __PVT__my_DE_stage__DOT__DE_latch;
    IData/*31:0*/ __PVT__my_DE_stage__DOT__busy_bits;
    IData/*31:0*/ __PVT__my_DE_stage__DOT__num_branches;
    VlWide<6>/*172:0*/ __PVT__my_AGEX_stage__DOT__AGEX_latch;
    IData/*31:0*/ __PVT__my_AGEX_stage__DOT__pctarget_AGEX;
    IData/*31:0*/ __PVT__my_AGEX_stage__DOT__sign_temp;
    IData/*31:0*/ __PVT__my_AGEX_stage__DOT__aluout_AGEX;
    IData/*31:0*/ __PVT__my_AGEX_stage__DOT__memaddr_AGEX;
    IData/*31:0*/ __PVT__my_AGEX_stage__DOT__taken_branches;
    IData/*31:0*/ __PVT__my_AGEX_stage__DOT__not_taken_branches;
    IData/*31:0*/ __PVT__my_AGEX_stage__DOT__correctly_predicted;
    VlWide<6>/*172:0*/ __PVT__my_MEM_stage__DOT__MEM_latch;
    VlWide<5>/*147:0*/ __Vdly__my_FE_stage__DOT__FE_latch;
    IData/*31:0*/ __Vdlyvval__my_MEM_stage__DOT__dmem__v0;
    QData/*60:0*/ __PVT__my_FE_stage__DOT__BTB_entry_FE;
    QData/*58:0*/ __PVT__my_BR_PREDICTOR__DOT__BTB_entry;
    VlUnpacked<IData/*31:0*/, 16384> __PVT__my_FE_stage__DOT__imem;
    VlUnpacked<CData/*1:0*/, 256> __PVT__my_BR_PREDICTOR__DOT__PHT;
    VlUnpacked<QData/*58:0*/, 16> __PVT__my_BR_PREDICTOR__DOT__BTB;
    VlUnpacked<IData/*31:0*/, 32> __PVT__my_DE_stage__DOT__regs;
    VlUnpacked<IData/*31:0*/, 16384> __PVT__my_MEM_stage__DOT__dmem;

    // INTERNAL VARIABLES
    Vpipeline__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vpipeline_pipeline(Vpipeline__Syms* symsp, const char* v__name);
    ~Vpipeline_pipeline();
    VL_UNCOPYABLE(Vpipeline_pipeline);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
