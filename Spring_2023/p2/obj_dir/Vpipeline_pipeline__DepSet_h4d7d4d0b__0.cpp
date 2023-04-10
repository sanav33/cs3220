// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vpipeline__Syms.h"
#include "Vpipeline_pipeline.h"

VL_INLINE_OPT void Vpipeline_pipeline___nba_sequent__TOP__pipeline__0(Vpipeline_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___nba_sequent__TOP__pipeline__0\n"); );
    // Init
    IData/*31:0*/ __Vdly__my_FE_stage__DOT__inst_count_FE;
    __Vdly__my_FE_stage__DOT__inst_count_FE = 0;
    IData/*31:0*/ __Vdly__my_FE_stage__DOT__PC_FE_latch;
    __Vdly__my_FE_stage__DOT__PC_FE_latch = 0;
    CData/*7:0*/ __Vdlyvdim0__my_BR_PREDICTOR__DOT__PHT__v0;
    __Vdlyvdim0__my_BR_PREDICTOR__DOT__PHT__v0 = 0;
    CData/*1:0*/ __Vdlyvval__my_BR_PREDICTOR__DOT__PHT__v0;
    __Vdlyvval__my_BR_PREDICTOR__DOT__PHT__v0 = 0;
    CData/*0:0*/ __Vdlyvset__my_BR_PREDICTOR__DOT__PHT__v0;
    __Vdlyvset__my_BR_PREDICTOR__DOT__PHT__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__my_BR_PREDICTOR__DOT__BTB__v0;
    __Vdlyvdim0__my_BR_PREDICTOR__DOT__BTB__v0 = 0;
    QData/*58:0*/ __Vdlyvval__my_BR_PREDICTOR__DOT__BTB__v0;
    __Vdlyvval__my_BR_PREDICTOR__DOT__BTB__v0 = 0;
    CData/*0:0*/ __Vdlyvset__my_BR_PREDICTOR__DOT__BTB__v0;
    __Vdlyvset__my_BR_PREDICTOR__DOT__BTB__v0 = 0;
    IData/*31:0*/ __Vdly__my_DE_stage__DOT__num_branches;
    __Vdly__my_DE_stage__DOT__num_branches = 0;
    IData/*31:0*/ __Vdly__my_AGEX_stage__DOT__correctly_predicted;
    __Vdly__my_AGEX_stage__DOT__correctly_predicted = 0;
    // Body
    __Vdly__my_DE_stage__DOT__num_branches = vlSelf->__PVT__my_DE_stage__DOT__num_branches;
    __Vdly__my_FE_stage__DOT__inst_count_FE = vlSelf->__PVT__my_FE_stage__DOT__inst_count_FE;
    __Vdly__my_AGEX_stage__DOT__correctly_predicted 
        = vlSelf->__PVT__my_AGEX_stage__DOT__correctly_predicted;
    __Vdlyvset__my_BR_PREDICTOR__DOT__BTB__v0 = 0U;
    __Vdlyvset__my_BR_PREDICTOR__DOT__PHT__v0 = 0U;
    vlSelf->__Vdlyvset__my_MEM_stage__DOT__dmem__v0 = 0U;
    __Vdly__my_FE_stage__DOT__PC_FE_latch = vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch;
    vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[0U] 
        = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[0U];
    vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[1U] 
        = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U];
    vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[2U] 
        = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[2U];
    vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[3U] 
        = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U];
    vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[4U] 
        = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U];
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__cycle_count = 0U;
        __Vdly__my_DE_stage__DOT__num_branches = 0U;
        __Vdly__my_FE_stage__DOT__inst_count_FE = 1U;
        __Vdly__my_FE_stage__DOT__inst_count_FE = 1U;
        __Vdly__my_AGEX_stage__DOT__correctly_predicted = 0U;
        __Vdly__my_FE_stage__DOT__PC_FE_latch = 0x200U;
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[0U] = 0U;
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[1U] = 0U;
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[2U] = 0U;
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[3U] = 0U;
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[4U] = 0U;
        vlSelf->__PVT__my_BR_PREDICTOR__DOT__BHR = 0U;
    } else {
        vlSelf->__PVT__cycle_count = ((IData)(1U) + vlSelf->__PVT__cycle_count);
        if (((~ (IData)(vlSelf->__PVT__from_DE_to_FE)) 
             & (IData)(vlSelf->__PVT__my_DE_stage__DOT__is_branch))) {
            __Vdly__my_DE_stage__DOT__num_branches 
                = ((IData)(1U) + vlSelf->__PVT__my_DE_stage__DOT__num_branches);
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__my_FE_stage__DOT__br_cond_FE)))) {
            if (vlSelf->__PVT__from_DE_to_FE) {
                __Vdly__my_FE_stage__DOT__inst_count_FE 
                    = ((IData)(1U) + vlSelf->__PVT__my_FE_stage__DOT__inst_count_FE);
            }
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__my_FE_stage__DOT__predicted_take)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__my_FE_stage__DOT__br_cond_FE)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__from_DE_to_FE)))) {
                    __Vdly__my_FE_stage__DOT__inst_count_FE 
                        = ((IData)(1U) + vlSelf->__PVT__my_FE_stage__DOT__inst_count_FE);
                }
            }
        }
        if ((1U & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                    >> 0x12U) & (((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__br_cond_AGEX) 
                                  & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                     >> 0x13U)) | (
                                                   (~ (IData)(vlSelf->__PVT__my_AGEX_stage__DOT__br_cond_AGEX)) 
                                                   & (~ 
                                                      (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                       >> 0x13U))))))) {
            __Vdly__my_AGEX_stage__DOT__correctly_predicted 
                = ((IData)(1U) + vlSelf->__PVT__my_AGEX_stage__DOT__correctly_predicted);
        }
        __Vdly__my_FE_stage__DOT__PC_FE_latch = ((IData)(vlSelf->__PVT__my_FE_stage__DOT__predicted_take)
                                                  ? (IData)(vlSelf->__PVT__my_BR_PREDICTOR__DOT__BTB_entry)
                                                  : 
                                                 ((IData)(vlSelf->__PVT__my_FE_stage__DOT__br_cond_FE)
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__br_cond_AGEX)
                                                    ? vlSelf->__PVT__my_AGEX_stage__DOT__pctarget_AGEX
                                                    : 
                                                   ((IData)(4U) 
                                                    + 
                                                    vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U]))
                                                   : 
                                                  ((IData)(vlSelf->__PVT__from_DE_to_FE)
                                                    ? vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch
                                                    : vlSelf->__PVT__my_FE_stage__DOT__pcplus_FE)));
        if (vlSelf->__PVT__my_FE_stage__DOT__br_cond_FE) {
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[0U] = 0U;
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[1U] = 0U;
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[2U] = 0U;
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[3U] = 0U;
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[4U] = 0U;
        } else if (vlSelf->__PVT__from_DE_to_FE) {
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[0U] 
                = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[0U];
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[1U] 
                = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U];
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[2U] 
                = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[2U];
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[3U] 
                = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U];
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[4U] 
                = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U];
        } else {
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[0U] 
                = ((vlSelf->__PVT__my_FE_stage__DOT__inst_count_FE 
                    << 0x13U) | (((IData)(vlSelf->__PVT__my_FE_stage__DOT__predicted_take) 
                                  << 0x12U) | (((IData)(vlSelf->__PVT__my_BR_PREDICTOR__DOT__BHR) 
                                                << 0xaU) 
                                               | (((IData)(vlSelf->__PVT__my_BR_PREDICTOR__DOT__BHR) 
                                                   << 2U) 
                                                  | (IData)(vlSelf->__PVT__my_FE_stage__DOT__PHT_entry_FE)))));
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[1U] 
                = ((vlSelf->__PVT__my_FE_stage__DOT__inst_count_FE 
                    >> 0xdU) | (((IData)(4U) + vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch) 
                                << 0x13U));
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[2U] 
                = ((((IData)(4U) + vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch) 
                    >> 0xdU) | ((IData)((((QData)((IData)(
                                                          vlSelf->__PVT__my_FE_stage__DOT__imem
                                                          [
                                                          (0x3fffU 
                                                           & (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                              >> 2U))])) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                                << 0x13U));
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[3U] 
                = (((IData)((((QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__imem
                                              [(0x3fffU 
                                                & (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                   >> 2U))])) 
                              << 0x20U) | (QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                    >> 0xdU) | ((IData)(((((QData)((IData)(
                                                           vlSelf->__PVT__my_FE_stage__DOT__imem
                                                           [
                                                           (0x3fffU 
                                                            & (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                               >> 2U))])) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                         >> 0x20U)) 
                                << 0x13U));
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[4U] 
                = ((((0U < vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch) 
                     & (0x79cU >= vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch)) 
                    << 0x13U) | ((IData)(((((QData)((IData)(
                                                            vlSelf->__PVT__my_FE_stage__DOT__imem
                                                            [
                                                            (0x3fffU 
                                                             & (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                                >> 2U))])) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                          >> 0x20U)) 
                                 >> 0xdU));
        }
        if ((0x40000U & vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U])) {
            vlSelf->__PVT__my_BR_PREDICTOR__DOT__BHR 
                = (0xffU & (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                              << 0x17U) | (0x7ffffeU 
                                           & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                              >> 9U))) 
                            | (IData)(vlSelf->__PVT__my_AGEX_stage__DOT__br_cond_AGEX)));
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__br_cond_AGEX) 
                      & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                         >> 0x12U))))) {
            if ((1U & ((~ (IData)(vlSelf->__PVT__my_AGEX_stage__DOT__br_cond_AGEX)) 
                       & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                          >> 0x12U)))) {
                vlSelf->__PVT__my_AGEX_stage__DOT__not_taken_branches 
                    = ((IData)(1U) + vlSelf->__PVT__my_AGEX_stage__DOT__not_taken_branches);
            }
        }
        if (((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__br_cond_AGEX) 
             & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                >> 0x12U))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__taken_branches 
                = ((IData)(1U) + vlSelf->__PVT__my_AGEX_stage__DOT__taken_branches);
        }
        if ((0x40000U & vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U])) {
            __Vdlyvval__my_BR_PREDICTOR__DOT__BTB__v0 
                = (0x100000000ULL | (((QData)((IData)(
                                                      (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                       >> 6U))) 
                                      << 0x21U) | (QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__pctarget_AGEX))));
            __Vdlyvset__my_BR_PREDICTOR__DOT__BTB__v0 = 1U;
            __Vdlyvdim0__my_BR_PREDICTOR__DOT__BTB__v0 
                = (0xfU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                           >> 2U));
            __Vdlyvval__my_BR_PREDICTOR__DOT__PHT__v0 
                = (3U & ((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__br_cond_AGEX)
                          ? ((3U == (3U & vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U]))
                              ? 3U : ((IData)(1U) + 
                                      vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U]))
                          : ((0U == (3U & vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U]))
                              ? 0U : (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                      - (IData)(1U)))));
            __Vdlyvset__my_BR_PREDICTOR__DOT__PHT__v0 = 1U;
            __Vdlyvdim0__my_BR_PREDICTOR__DOT__PHT__v0 
                = (0xffU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                            >> 2U));
        }
    }
    if ((0x18U == (0x3fU & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                            >> 6U)))) {
        vlSelf->__Vdlyvval__my_MEM_stage__DOT__dmem__v0 
            = ((vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                << 0x1aU) | (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                             >> 6U));
        vlSelf->__Vdlyvset__my_MEM_stage__DOT__dmem__v0 = 1U;
        vlSelf->__Vdlyvdim0__my_MEM_stage__DOT__dmem__v0 
            = (0x3fffU & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                          >> 2U));
    }
    vlSelf->__PVT__my_DE_stage__DOT__num_branches = __Vdly__my_DE_stage__DOT__num_branches;
    vlSelf->__PVT__my_AGEX_stage__DOT__correctly_predicted 
        = __Vdly__my_AGEX_stage__DOT__correctly_predicted;
    if (__Vdlyvset__my_BR_PREDICTOR__DOT__BTB__v0) {
        vlSelf->__PVT__my_BR_PREDICTOR__DOT__BTB[__Vdlyvdim0__my_BR_PREDICTOR__DOT__BTB__v0] 
            = __Vdlyvval__my_BR_PREDICTOR__DOT__BTB__v0;
    }
    if (__Vdlyvset__my_BR_PREDICTOR__DOT__PHT__v0) {
        vlSelf->__PVT__my_BR_PREDICTOR__DOT__PHT[__Vdlyvdim0__my_BR_PREDICTOR__DOT__PHT__v0] 
            = __Vdlyvval__my_BR_PREDICTOR__DOT__PHT__v0;
    }
    vlSelf->__PVT__my_FE_stage__DOT__inst_count_FE 
        = __Vdly__my_FE_stage__DOT__inst_count_FE;
    vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch = __Vdly__my_FE_stage__DOT__PC_FE_latch;
    vlSelf->__PVT__my_FE_stage__DOT__pcplus_FE = ((IData)(4U) 
                                                  + vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch);
    vlSelf->__PVT__my_BR_PREDICTOR__DOT__BTB_entry 
        = vlSelf->__PVT__my_BR_PREDICTOR__DOT__BTB[
        (0xfU & (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                 >> 2U))];
    vlSelf->__PVT__my_FE_stage__DOT__PHT_entry_FE = 
        vlSelf->__PVT__my_BR_PREDICTOR__DOT__PHT[vlSelf->__PVT__my_BR_PREDICTOR__DOT__BHR];
    vlSelf->__PVT__my_FE_stage__DOT__predicted_take 
        = ((((0x3ffffffU & (IData)((vlSelf->__PVT__my_BR_PREDICTOR__DOT__BTB_entry 
                                    >> 0x21U))) == 
             (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
              >> 6U)) & (IData)((vlSelf->__PVT__my_BR_PREDICTOR__DOT__BTB_entry 
                                 >> 0x20U))) & (2U 
                                                <= (IData)(vlSelf->__PVT__my_FE_stage__DOT__PHT_entry_FE)));
}

extern const VlWide<9>/*287:0*/ Vpipeline__ConstPool__CONST_h3dd8fb2c_0;

VL_INLINE_OPT void Vpipeline_pipeline___nba_sequent__TOP__pipeline__1(Vpipeline_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___nba_sequent__TOP__pipeline__1\n"); );
    // Init
    CData/*0:0*/ my_DE_stage__DOT____VdfgTmp_h8eae516f__0;
    my_DE_stage__DOT____VdfgTmp_h8eae516f__0 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgTmp_hbafeff07__0;
    my_DE_stage__DOT____VdfgTmp_hbafeff07__0 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgTmp_he0c36ab5__0;
    my_DE_stage__DOT____VdfgTmp_he0c36ab5__0 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgTmp_h0255d7dd__0;
    my_DE_stage__DOT____VdfgTmp_h0255d7dd__0 = 0;
    CData/*0:0*/ my_AGEX_stage__DOT____VdfgExtracted_h58b11cbf__0;
    my_AGEX_stage__DOT____VdfgExtracted_h58b11cbf__0 = 0;
    CData/*0:0*/ my_AGEX_stage__DOT____VdfgExtracted_hbd32265a__0;
    my_AGEX_stage__DOT____VdfgExtracted_hbd32265a__0 = 0;
    IData/*31:0*/ my_AGEX_stage__DOT____VdfgExtracted_h296aadd6__0;
    my_AGEX_stage__DOT____VdfgExtracted_h296aadd6__0 = 0;
    IData/*31:0*/ my_AGEX_stage__DOT____VdfgExtracted_he721d3fe__0;
    my_AGEX_stage__DOT____VdfgExtracted_he721d3fe__0 = 0;
    IData/*31:0*/ my_AGEX_stage__DOT____VdfgExtracted_h44e2b18c__0;
    my_AGEX_stage__DOT____VdfgExtracted_h44e2b18c__0 = 0;
    CData/*0:0*/ my_AGEX_stage__DOT____VdfgTmp_h2eadccf1__0;
    my_AGEX_stage__DOT____VdfgTmp_h2eadccf1__0 = 0;
    CData/*0:0*/ my_AGEX_stage__DOT____VdfgTmp_hf8aa191b__0;
    my_AGEX_stage__DOT____VdfgTmp_hf8aa191b__0 = 0;
    CData/*0:0*/ my_AGEX_stage__DOT____VdfgTmp_hfe61b60e__0;
    my_AGEX_stage__DOT____VdfgTmp_hfe61b60e__0 = 0;
    VlWide<4>/*127:0*/ __Vtemp_h126d714b__0;
    VlWide<9>/*287:0*/ __Vtemp_h2cf3104d__0;
    // Body
    vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
        = ((IData)(vlSymsp->TOP.reset) ? 0U : vlSelf->__PVT__my_MEM_stage__DOT__dmem
           [(0x3fffU & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                        >> 2U))]);
    if (vlSelf->__Vdlyvset__my_MEM_stage__DOT__dmem__v0) {
        vlSelf->__PVT__my_MEM_stage__DOT__dmem[vlSelf->__Vdlyvdim0__my_MEM_stage__DOT__dmem__v0] 
            = vlSelf->__Vdlyvval__my_MEM_stage__DOT__dmem__v0;
    }
    __Vtemp_h126d714b__0[0U] = ((1U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                                 ? (((- (IData)((1U 
                                                 & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                    >> 0x12U)))) 
                                     << 0xbU) | (0x7ffU 
                                                 & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                    >> 7U)))
                                 : ((4U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                                     ? (((- (IData)(
                                                    (1U 
                                                     & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                        >> 0x12U)))) 
                                         << 0xbU) | 
                                        ((0x7e0U & 
                                          (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                           >> 7U)) 
                                         | (0x1fU & 
                                            (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                             >> 0x1aU))))
                                     : ((5U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                                         ? (((- (IData)(
                                                        (1U 
                                                         & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                            >> 0x12U)))) 
                                             << 0xcU) 
                                            | ((0x800U 
                                                & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 0xfU)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                      >> 7U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                        >> 0x1aU)))))
                                         : ((3U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                                             ? (0xfffff000U 
                                                & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                    << 0xdU) 
                                                   | (0x1000U 
                                                      & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                         >> 0x13U))))
                                             : ((2U 
                                                 == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                 ? 
                                                (((- (IData)(
                                                             (1U 
                                                              & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                 >> 0x12U)))) 
                                                  << 0x14U) 
                                                 | ((0xff000U 
                                                     & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                         << 0xdU) 
                                                        | (0x1000U 
                                                           & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                              >> 0x13U)))) 
                                                    | ((0x800U 
                                                        & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                           << 4U)) 
                                                       | (0x7feU 
                                                          & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                             >> 7U)))))
                                                 : 0U)))));
    __Vtemp_h2cf3104d__0[3U] = ((((IData)(vlSelf->__PVT__from_DE_to_FE) 
                                  | ((IData)(vlSelf->__PVT__my_FE_stage__DOT__br_cond_FE) 
                                     & (~ (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                           >> 0x12U)))) 
                                 | (IData)(vlSelf->__PVT__my_DE_stage__DOT__hazard))
                                 ? Vpipeline__ConstPool__CONST_h3dd8fb2c_0[3U]
                                 : (((IData)((((QData)((IData)(
                                                               ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                 << 0xdU) 
                                                                | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                   >> 0x13U)))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->__PVT__my_DE_stage__DOT__regs
                                                                [
                                                                (0x1fU 
                                                                 & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                    >> 2U))])))) 
                                     >> 6U) | ((IData)(
                                                       ((((QData)((IData)(
                                                                          ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                            << 0xdU) 
                                                                           | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                              >> 0x13U)))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->__PVT__my_DE_stage__DOT__regs
                                                                           [
                                                                           (0x1fU 
                                                                            & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                               >> 2U))]))) 
                                                        >> 0x20U)) 
                                               << 0x1aU)));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[1U] = 0U;
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[2U] = 0U;
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[3U] = 0U;
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[4U] = 0U;
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[5U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
            = Vpipeline__ConstPool__CONST_h3dd8fb2c_0[0U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
            = Vpipeline__ConstPool__CONST_h3dd8fb2c_0[1U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
            = Vpipeline__ConstPool__CONST_h3dd8fb2c_0[2U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
            = Vpipeline__ConstPool__CONST_h3dd8fb2c_0[3U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
            = Vpipeline__ConstPool__CONST_h3dd8fb2c_0[4U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
            = Vpipeline__ConstPool__CONST_h3dd8fb2c_0[5U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
            = Vpipeline__ConstPool__CONST_h3dd8fb2c_0[6U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
            = Vpipeline__ConstPool__CONST_h3dd8fb2c_0[7U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
            = Vpipeline__ConstPool__CONST_h3dd8fb2c_0[8U];
    } else {
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
            = vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U];
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
            = vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[2U];
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
            = vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[3U];
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
            = vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[4U];
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
            = (0x1fffU & vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[5U]);
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
            = (IData)((((QData)((IData)((0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                  >> 0x14U)))) 
                        << 0x20U) | (QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__memaddr_AGEX))));
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
            = ((vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                << 6U) | (IData)(((((QData)((IData)(
                                                    (0x3fU 
                                                     & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                        >> 0x14U)))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__memaddr_AGEX))) 
                                  >> 0x20U)));
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
            = (((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                             vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                             << 6U) 
                                            | ((QData)((IData)(
                                                               vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U])) 
                                               >> 0x1aU)))) 
                << 6U) | (vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                          >> 0x1aU));
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
            = ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                << 0xcU) | (((IData)((0x3fffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                          << 6U) | 
                                         ((QData)((IData)(
                                                          vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U])) 
                                          >> 0x1aU)))) 
                             >> 0x1aU) | ((IData)((
                                                   (0x3fffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                        << 6U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U])) 
                                                          >> 0x1aU))) 
                                                   >> 0x20U)) 
                                          << 6U)));
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
            = ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                >> 0x14U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                             << 0xcU));
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
            = ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                >> 0x14U) | (0x1000U & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                        << 0xcU)));
        if ((((IData)(vlSelf->__PVT__from_DE_to_FE) 
              | ((IData)(vlSelf->__PVT__my_FE_stage__DOT__br_cond_FE) 
                 & (~ (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[0U] 
                       >> 0x12U)))) | (IData)(vlSelf->__PVT__my_DE_stage__DOT__hazard))) {
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                = Vpipeline__ConstPool__CONST_h3dd8fb2c_0[0U];
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                = Vpipeline__ConstPool__CONST_h3dd8fb2c_0[1U];
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                = Vpipeline__ConstPool__CONST_h3dd8fb2c_0[2U];
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                = __Vtemp_h2cf3104d__0[3U];
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                = Vpipeline__ConstPool__CONST_h3dd8fb2c_0[4U];
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                = Vpipeline__ConstPool__CONST_h3dd8fb2c_0[5U];
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                = Vpipeline__ConstPool__CONST_h3dd8fb2c_0[6U];
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                = Vpipeline__ConstPool__CONST_h3dd8fb2c_0[7U];
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
                = Vpipeline__ConstPool__CONST_h3dd8fb2c_0[8U];
        } else {
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                = ((__Vtemp_h126d714b__0[0U] << 0x1aU) 
                   | ((0x3e00000U & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                     >> 5U)) | (((IData)(vlSelf->__PVT__my_DE_stage__DOT__wr_reg_DE) 
                                                 << 0x14U) 
                                                | ((0x80000U 
                                                    & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                       << 1U)) 
                                                   | (((IData)(vlSelf->__PVT__my_DE_stage__DOT__is_branch) 
                                                       << 0x12U) 
                                                      | (0x3ffffU 
                                                         & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[0U]))))));
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                = ((__Vtemp_h126d714b__0[0U] >> 6U) 
                   | (vlSelf->__PVT__my_DE_stage__DOT__regs
                      [(0x1fU & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                 >> 7U))] << 0x1aU));
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                = ((vlSelf->__PVT__my_DE_stage__DOT__regs
                    [(0x1fU & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                               >> 7U))] >> 6U) | ((IData)(
                                                          (((QData)((IData)(
                                                                            ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                              << 0xdU) 
                                                                             | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                                >> 0x13U)))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->__PVT__my_DE_stage__DOT__regs
                                                                             [
                                                                             (0x1fU 
                                                                              & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 2U))])))) 
                                                  << 0x1aU));
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                = __Vtemp_h2cf3104d__0[3U];
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                = (((IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE) 
                    << 0x1aU) | ((IData)(((((QData)((IData)(
                                                            ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                              << 0xdU) 
                                                             | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                >> 0x13U)))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->__PVT__my_DE_stage__DOT__regs
                                                             [
                                                             (0x1fU 
                                                              & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                 >> 2U))]))) 
                                          >> 0x20U)) 
                                 >> 6U));
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                = ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[2U] 
                    << 0xdU) | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                >> 0x13U));
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                = ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                    << 0xdU) | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                >> 0x13U));
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                = ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                    << 0xdU) | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                >> 0x13U));
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
                = (1U & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                         >> 0x13U));
        }
    }
    vlSelf->__PVT__my_FE_stage__DOT__FE_latch[0U] = 
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[0U];
    vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U] = 
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[1U];
    vlSelf->__PVT__my_FE_stage__DOT__FE_latch[2U] = 
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[2U];
    vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] = 
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[3U];
    vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] = 
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[4U];
    my_AGEX_stage__DOT____VdfgExtracted_hbd32265a__0 
        = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
             << 6U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                       >> 0x1aU)) >= ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                       << 6U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                 >> 0x1aU)));
    my_AGEX_stage__DOT____VdfgExtracted_he721d3fe__0 
        = ((((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
              << 6U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                        >> 0x1aU)) < ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                       << 6U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                 >> 0x1aU)))
            ? 1U : 0U);
    my_AGEX_stage__DOT____VdfgExtracted_h44e2b18c__0 
        = (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
           + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
               << 6U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                         >> 0x1aU)));
    my_AGEX_stage__DOT____VdfgExtracted_h296aadd6__0 
        = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
             << 6U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                       >> 0x1aU)) + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                      << 6U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                >> 0x1aU)));
    my_AGEX_stage__DOT____VdfgExtracted_h58b11cbf__0 
        = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
             << 6U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                       >> 0x1aU)) < ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                      << 6U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                >> 0x1aU)));
    my_AGEX_stage__DOT____VdfgTmp_h2eadccf1__0 = (1U 
                                                  & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                      & vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U]) 
                                                     >> 0x19U));
    my_AGEX_stage__DOT____VdfgTmp_hf8aa191b__0 = ((
                                                   (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                    << 6U) 
                                                   | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                      >> 0x1aU)) 
                                                  > 
                                                  ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                    << 6U) 
                                                   | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                      >> 0x1aU)));
    my_AGEX_stage__DOT____VdfgTmp_hfe61b60e__0 = (1U 
                                                  & ((~ 
                                                      (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                       >> 0x19U)) 
                                                     & (~ 
                                                        (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                         >> 0x19U))));
    my_DE_stage__DOT____VdfgTmp_h8eae516f__0 = (IData)(
                                                       ((0x1980000U 
                                                         == 
                                                         (0x3f80000U 
                                                          & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                        & (0U 
                                                           == 
                                                           (7U 
                                                            & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                << 1U) 
                                                               | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                  >> 0x1fU))))));
    my_DE_stage__DOT____VdfgTmp_hbafeff07__0 = (IData)(
                                                       ((0x1980000U 
                                                         == 
                                                         (0x3f80000U 
                                                          & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                        & (5U 
                                                           == 
                                                           (7U 
                                                            & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                << 1U) 
                                                               | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                  >> 0x1fU))))));
    my_DE_stage__DOT____VdfgTmp_he0c36ab5__0 = (IData)(
                                                       ((0U 
                                                         == 
                                                         (0x7f000U 
                                                          & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                        & (1U 
                                                           == 
                                                           (7U 
                                                            & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                << 1U) 
                                                               | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                  >> 0x1fU))))));
    my_DE_stage__DOT____VdfgTmp_h0255d7dd__0 = (IData)(
                                                       ((0x980000U 
                                                         == 
                                                         (0x3f80000U 
                                                          & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                        & (5U 
                                                           == 
                                                           (7U 
                                                            & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                << 1U) 
                                                               | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                  >> 0x1fU))))));
    if ((1U & (~ ((((((((1U == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                >> 0x1aU)) | (2U == 
                                              (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x1aU))) 
                       | (3U == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                 >> 0x1aU))) | (4U 
                                                == 
                                                (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 0x1aU))) 
                     | (5U == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                               >> 0x1aU))) | (6U == 
                                              (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x1aU))) 
                   | (7U == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                             >> 0x1aU))) | (8U == (
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1aU)))))) {
        if ((1U & (~ ((((((((9U == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                    >> 0x1aU)) | (0xaU 
                                                  == 
                                                  (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1aU))) 
                           | (0xbU == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                       >> 0x1aU))) 
                          | (0xcU == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                      >> 0x1aU))) | 
                         (0xdU == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                   >> 0x1aU))) | (0xeU 
                                                  == 
                                                  (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1aU))) 
                       | (0xfU == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                   >> 0x1aU))) | (0x10U 
                                                  == 
                                                  (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1aU)))))) {
            if (((((((((0x11U == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                  >> 0x1aU)) | (0x12U 
                                                == 
                                                (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 0x1aU))) 
                      | (0x13U == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                   >> 0x1aU))) | (0x14U 
                                                  == 
                                                  (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1aU))) 
                    | (0x15U == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                 >> 0x1aU))) | (0x16U 
                                                == 
                                                (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 0x1aU))) 
                  | (0x17U == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                               >> 0x1aU))) | (0x18U 
                                              == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 0x1aU)))) {
                if ((0x11U != (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                               >> 0x1aU))) {
                    if ((0x12U != (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                   >> 0x1aU))) {
                        if ((0x13U != (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                       >> 0x1aU))) {
                            if ((0x14U != (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 0x1aU))) {
                                if ((0x15U != (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x1aU))) {
                                    if ((0x16U != (
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1aU))) {
                                        vlSelf->__PVT__my_AGEX_stage__DOT__memaddr_AGEX 
                                            = my_AGEX_stage__DOT____VdfgExtracted_h296aadd6__0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->__PVT__my_AGEX_stage__DOT__pctarget_AGEX 
        = ((0x1bU == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                      >> 0x1aU)) ? (0xfffffffeU & my_AGEX_stage__DOT____VdfgExtracted_h296aadd6__0)
            : ((0x1aU == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                          >> 0x1aU)) ? ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                         << 6U) | (
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                   >> 0x1aU))
                : ((0x19U == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                              >> 0x1aU)) ? my_AGEX_stage__DOT____VdfgExtracted_h44e2b18c__0
                    : (((0x1cU == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                   >> 0x1aU)) | ((0x1dU 
                                                  == 
                                                  (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1aU)) 
                                                 | ((0x1fU 
                                                     == 
                                                     (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                      >> 0x1aU)) 
                                                    | ((0x1eU 
                                                        == 
                                                        (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                         >> 0x1aU)) 
                                                       | ((0x21U 
                                                           == 
                                                           (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                            >> 0x1aU)) 
                                                          | (0x20U 
                                                             == 
                                                             (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                              >> 0x1aU)))))))
                        ? my_AGEX_stage__DOT____VdfgExtracted_h44e2b18c__0
                        : vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U]))));
    vlSelf->__PVT__my_AGEX_stage__DOT__br_cond_AGEX 
        = (1U & ((0x1cU == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                            >> 0x1aU)) ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            << 6U) 
                                           | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                              >> 0x1aU)) 
                                          == ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                               << 6U) 
                                              | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                 >> 0x1aU)))
                  : ((0x1dU == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                >> 0x1aU)) ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                << 6U) 
                                               | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                  >> 0x1aU)) 
                                              != ((
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                   << 6U) 
                                                  | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                     >> 0x1aU)))
                      : ((0x1eU == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                    >> 0x1aU)) ? ((IData)(my_AGEX_stage__DOT____VdfgTmp_h2eadccf1__0)
                                                   ? (IData)(my_AGEX_stage__DOT____VdfgTmp_hf8aa191b__0)
                                                   : 
                                                  ((IData)(my_AGEX_stage__DOT____VdfgTmp_hfe61b60e__0)
                                                    ? (IData)(my_AGEX_stage__DOT____VdfgExtracted_h58b11cbf__0)
                                                    : 
                                                   (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                    >> 0x19U)))
                          : ((0x1fU == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                        >> 0x1aU)) ? 
                             ((IData)(my_AGEX_stage__DOT____VdfgTmp_h2eadccf1__0)
                               ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                    << 6U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                              >> 0x1aU)) 
                                  <= ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                       << 6U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                 >> 0x1aU)))
                               : ((IData)(my_AGEX_stage__DOT____VdfgTmp_hfe61b60e__0)
                                   ? (IData)(my_AGEX_stage__DOT____VdfgExtracted_hbd32265a__0)
                                   : (~ (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                         >> 0x19U))))
                              : ((0x20U == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            >> 0x1aU))
                                  ? (IData)(my_AGEX_stage__DOT____VdfgExtracted_h58b11cbf__0)
                                  : ((0x21U == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x1aU))
                                      ? (IData)(my_AGEX_stage__DOT____VdfgExtracted_hbd32265a__0)
                                      : (((0x19U == 
                                           (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            >> 0x1aU)) 
                                          | (0x1bU 
                                             == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 0x1aU))) 
                                         | (0x1aU == 
                                            (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             >> 0x1aU))))))))));
    if (((((((((1U == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                       >> 0x1aU)) | (2U == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            >> 0x1aU))) 
              | (3U == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                        >> 0x1aU))) | (4U == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x1aU))) 
            | (5U == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                      >> 0x1aU))) | (6U == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            >> 0x1aU))) 
          | (7U == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                    >> 0x1aU))) | (8U == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 0x1aU)))) {
        if ((1U == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                    >> 0x1aU))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                     << 6U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                               >> 0x1aU)) + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                              << 6U) 
                                             | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                >> 0x1aU)));
        } else if ((2U == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                           >> 0x1aU))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                     << 6U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                               >> 0x1aU)) - ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                              << 6U) 
                                             | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                >> 0x1aU)));
        } else if ((3U == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                           >> 0x1aU))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                     << 6U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                               >> 0x1aU)) & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                              << 6U) 
                                             | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                >> 0x1aU)));
        } else if ((4U == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                           >> 0x1aU))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                     << 6U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                               >> 0x1aU)) | ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                              << 6U) 
                                             | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                >> 0x1aU)));
        } else if ((5U == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                           >> 0x1aU))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                     << 6U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                               >> 0x1aU)) ^ ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                              << 6U) 
                                             | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                >> 0x1aU)));
        } else if ((6U == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                           >> 0x1aU))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = ((IData)(my_AGEX_stage__DOT____VdfgTmp_h2eadccf1__0)
                    ? ((IData)(my_AGEX_stage__DOT____VdfgTmp_hf8aa191b__0)
                        ? 1U : 0U) : ((IData)(my_AGEX_stage__DOT____VdfgTmp_hfe61b60e__0)
                                       ? ((IData)(my_AGEX_stage__DOT____VdfgExtracted_h58b11cbf__0)
                                           ? 1U : 0U)
                                       : ((0x2000000U 
                                           & vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U])
                                           ? 0U : 1U)));
        } else if ((7U == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                           >> 0x1aU))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = ((IData)(my_AGEX_stage__DOT____VdfgExtracted_h58b11cbf__0)
                    ? 1U : 0U);
        } else {
            vlSelf->__PVT__my_AGEX_stage__DOT__sign_temp 
                = ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                    << 6U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                              >> 0x1aU));
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = VL_SHIFTRS_III(32,32,5, vlSelf->__PVT__my_AGEX_stage__DOT__sign_temp, 
                                 (0x1fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                           >> 0x1aU)));
        }
    } else if (((((((((9U == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                              >> 0x1aU)) | (0xaU == 
                                            (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             >> 0x1aU))) 
                     | (0xbU == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                 >> 0x1aU))) | (0xcU 
                                                == 
                                                (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 0x1aU))) 
                   | (0xdU == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                               >> 0x1aU))) | (0xeU 
                                              == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 0x1aU))) 
                 | (0xfU == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                             >> 0x1aU))) | (0x10U == 
                                            (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             >> 0x1aU)))) {
        vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
            = ((9U == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                       >> 0x1aU)) ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                       << 6U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                 >> 0x1aU)) 
                                     >> (0x1fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                  >> 0x1aU)))
                : ((0xaU == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                             >> 0x1aU)) ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             << 6U) 
                                            | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                               >> 0x1aU)) 
                                           << (0x1fU 
                                               & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                  >> 0x1aU)))
                    : ((0xbU == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                 >> 0x1aU)) ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 << 6U) 
                                                | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                   >> 0x1aU)) 
                                               * (0x1fU 
                                                  & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                     >> 0x1aU)))
                        : ((0xcU == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                     >> 0x1aU)) ? my_AGEX_stage__DOT____VdfgExtracted_h296aadd6__0
                            : ((0xdU == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                         >> 0x1aU))
                                ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                     << 6U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                               >> 0x1aU)) 
                                   & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                       << 6U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                 >> 0x1aU)))
                                : ((0xeU == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             >> 0x1aU))
                                    ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                         << 6U) | (
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                   >> 0x1aU)) 
                                       | ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                           << 6U) | 
                                          (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                           >> 0x1aU)))
                                    : ((0xfU == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 0x1aU))
                                        ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             << 6U) 
                                            | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                               >> 0x1aU)) 
                                           ^ ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                               << 6U) 
                                              | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                 >> 0x1aU)))
                                        : ((0x2000000U 
                                            & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               & vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U]))
                                            ? ((((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  << 6U) 
                                                 | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                    >> 0x1aU)) 
                                                > (
                                                   (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                    << 6U) 
                                                   | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                      >> 0x1aU)))
                                                ? 1U
                                                : 0U)
                                            : ((1U 
                                                & ((~ 
                                                    (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                     >> 0x19U)) 
                                                   & (~ 
                                                      (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                       >> 0x19U))))
                                                ? my_AGEX_stage__DOT____VdfgExtracted_he721d3fe__0
                                                : (
                                                   (0x2000000U 
                                                    & vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U])
                                                    ? 0U
                                                    : 1U))))))))));
    } else if (((((((((0x11U == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                 >> 0x1aU)) | (0x12U 
                                               == (
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1aU))) 
                     | (0x13U == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                  >> 0x1aU))) | (0x14U 
                                                 == 
                                                 (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 0x1aU))) 
                   | (0x15U == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                >> 0x1aU))) | (0x16U 
                                               == (
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1aU))) 
                 | (0x17U == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                              >> 0x1aU))) | (0x18U 
                                             == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 0x1aU)))) {
        if ((0x11U == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                       >> 0x1aU))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = my_AGEX_stage__DOT____VdfgExtracted_he721d3fe__0;
        } else if ((0x12U == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                              >> 0x1aU))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__sign_temp 
                = ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                    << 6U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                              >> 0x1aU));
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = VL_SHIFTRS_III(32,32,5, vlSelf->__PVT__my_AGEX_stage__DOT__sign_temp, 
                                 (0x1fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                           >> 0x14U)));
        } else if ((0x13U == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                              >> 0x1aU))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                     << 6U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                               >> 0x1aU)) >> (0x1fU 
                                              & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                 >> 0x14U)));
        } else if ((0x14U == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                              >> 0x1aU))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                     << 6U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                               >> 0x1aU)) << (0x1fU 
                                              & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                 >> 0x14U)));
        } else if ((0x15U == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                              >> 0x1aU))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                    << 6U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                              >> 0x1aU));
        } else if ((0x16U == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                              >> 0x1aU))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = my_AGEX_stage__DOT____VdfgExtracted_h44e2b18c__0;
        } else if ((0x17U != (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                              >> 0x1aU))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                    << 6U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                              >> 0x1aU));
        }
    } else if (((0x19U == (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                           >> 0x1aU)) | (0x1bU == (
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x1aU)))) {
        vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
            = vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U];
    }
    vlSelf->__PVT__my_DE_stage__DOT__op_I_DE = (((IData)(my_DE_stage__DOT____VdfgTmp_h8eae516f__0) 
                                                 & (0U 
                                                    == 
                                                    (0x7f000U 
                                                     & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                 ? 1U
                                                 : 
                                                (((IData)(my_DE_stage__DOT____VdfgTmp_h8eae516f__0) 
                                                  & (0x20000U 
                                                     == 
                                                     (0x7f000U 
                                                      & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                  ? 2U
                                                  : 
                                                 ((IData)(
                                                          (((0x1980000U 
                                                             == 
                                                             (0x3f80000U 
                                                              & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                            & (0U 
                                                               == 
                                                               (0x7f000U 
                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U]))) 
                                                           & (7U 
                                                              == 
                                                              (7U 
                                                               & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                   << 1U) 
                                                                  | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                     >> 0x1fU))))))
                                                   ? 3U
                                                   : 
                                                  ((IData)(
                                                           (((0x1980000U 
                                                              == 
                                                              (0x3f80000U 
                                                               & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                             & (0U 
                                                                == 
                                                                (0x7f000U 
                                                                 & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U]))) 
                                                            & (6U 
                                                               == 
                                                               (7U 
                                                                & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                    << 1U) 
                                                                   | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                      >> 0x1fU))))))
                                                    ? 4U
                                                    : 
                                                   ((IData)(
                                                            (((0x1980000U 
                                                               == 
                                                               (0x3f80000U 
                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                              & (0U 
                                                                 == 
                                                                 (0x7f000U 
                                                                  & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U]))) 
                                                             & (4U 
                                                                == 
                                                                (7U 
                                                                 & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                     << 1U) 
                                                                    | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                       >> 0x1fU))))))
                                                     ? 5U
                                                     : 
                                                    ((IData)(
                                                             (((0x1980000U 
                                                                == 
                                                                (0x3f80000U 
                                                                 & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                               & (0U 
                                                                  == 
                                                                  (0x7f000U 
                                                                   & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U]))) 
                                                              & (2U 
                                                                 == 
                                                                 (7U 
                                                                  & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                      << 1U) 
                                                                     | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                        >> 0x1fU))))))
                                                      ? 6U
                                                      : 
                                                     ((IData)(
                                                              (((0x1980000U 
                                                                 == 
                                                                 (0x3f80000U 
                                                                  & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                                & (0U 
                                                                   == 
                                                                   (0x7f000U 
                                                                    & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U]))) 
                                                               & (3U 
                                                                  == 
                                                                  (7U 
                                                                   & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                       << 1U) 
                                                                      | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                         >> 0x1fU))))))
                                                       ? 7U
                                                       : 
                                                      (((IData)(my_DE_stage__DOT____VdfgTmp_hbafeff07__0) 
                                                        & (0x20000U 
                                                           == 
                                                           (0x7f000U 
                                                            & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                        ? 8U
                                                        : 
                                                       (((IData)(my_DE_stage__DOT____VdfgTmp_hbafeff07__0) 
                                                         & (0U 
                                                            == 
                                                            (0x7f000U 
                                                             & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                         ? 9U
                                                         : 
                                                        ((IData)(
                                                                 ((0x1980000U 
                                                                   == 
                                                                   (0x3f80000U 
                                                                    & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                                  & (IData)(my_DE_stage__DOT____VdfgTmp_he0c36ab5__0)))
                                                          ? 0xaU
                                                          : 
                                                         (((IData)(my_DE_stage__DOT____VdfgTmp_h8eae516f__0) 
                                                           & (0x1000U 
                                                              == 
                                                              (0x7f000U 
                                                               & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                           ? 0xbU
                                                           : 
                                                          ((IData)(
                                                                   ((0x980000U 
                                                                     == 
                                                                     (0x3f80000U 
                                                                      & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                                    & (0U 
                                                                       == 
                                                                       (7U 
                                                                        & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                            << 1U) 
                                                                           | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                              >> 0x1fU))))))
                                                            ? 0xcU
                                                            : 
                                                           ((IData)(
                                                                    ((0x980000U 
                                                                      == 
                                                                      (0x3f80000U 
                                                                       & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                                     & (7U 
                                                                        == 
                                                                        (7U 
                                                                         & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                             << 1U) 
                                                                            | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                               >> 0x1fU))))))
                                                             ? 0xdU
                                                             : 
                                                            ((IData)(
                                                                     ((0x980000U 
                                                                       == 
                                                                       (0x3f80000U 
                                                                        & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                                      & (6U 
                                                                         == 
                                                                         (7U 
                                                                          & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                              << 1U) 
                                                                             | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x1fU))))))
                                                              ? 0xeU
                                                              : 
                                                             ((IData)(
                                                                      ((0x980000U 
                                                                        == 
                                                                        (0x3f80000U 
                                                                         & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                                       & (4U 
                                                                          == 
                                                                          (7U 
                                                                           & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                               << 1U) 
                                                                              | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x1fU))))))
                                                               ? 0xfU
                                                               : 
                                                              ((IData)(
                                                                       ((0x980000U 
                                                                         == 
                                                                         (0x3f80000U 
                                                                          & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                                        & (2U 
                                                                           == 
                                                                           (7U 
                                                                            & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 1U) 
                                                                               | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x1fU))))))
                                                                ? 0x10U
                                                                : 
                                                               ((IData)(
                                                                        ((0x980000U 
                                                                          == 
                                                                          (0x3f80000U 
                                                                           & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                                         & (3U 
                                                                            == 
                                                                            (7U 
                                                                             & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 1U) 
                                                                                | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x1fU))))))
                                                                 ? 0x11U
                                                                 : 
                                                                (((IData)(my_DE_stage__DOT____VdfgTmp_h0255d7dd__0) 
                                                                  & (0x20000U 
                                                                     == 
                                                                     (0x7f000U 
                                                                      & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                  ? 0x12U
                                                                  : 
                                                                 (((IData)(my_DE_stage__DOT____VdfgTmp_h0255d7dd__0) 
                                                                   & (0U 
                                                                      == 
                                                                      (0x7f000U 
                                                                       & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                   ? 0x13U
                                                                   : 
                                                                  ((IData)(
                                                                           ((0x980000U 
                                                                             == 
                                                                             (0x3f80000U 
                                                                              & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                                            & (IData)(my_DE_stage__DOT____VdfgTmp_he0c36ab5__0)))
                                                                    ? 0x14U
                                                                    : 
                                                                   ((0x37U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                         >> 0x13U)))
                                                                     ? 0x15U
                                                                     : 
                                                                    ((0x17U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                          >> 0x13U)))
                                                                      ? 0x16U
                                                                      : 
                                                                     ((IData)(
                                                                              ((0x180000U 
                                                                                == 
                                                                                (0x3f80000U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                                               & (2U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 1U) 
                                                                                | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x1fU))))))
                                                                       ? 0x17U
                                                                       : 
                                                                      ((IData)(
                                                                               ((0x1180000U 
                                                                                == 
                                                                                (0x3f80000U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                                                & (2U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 1U) 
                                                                                | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x1fU))))))
                                                                        ? 0x18U
                                                                        : 
                                                                       ((0x6fU 
                                                                         == 
                                                                         (0x7fU 
                                                                          & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                             >> 0x13U)))
                                                                         ? 0x19U
                                                                         : 
                                                                        ((IData)(
                                                                                ((0x3380000U 
                                                                                == 
                                                                                (0x3f80000U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                                                & (0U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 1U) 
                                                                                | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x1fU))))))
                                                                          ? 0x1bU
                                                                          : 
                                                                         ((IData)(
                                                                                ((0x3180000U 
                                                                                == 
                                                                                (0x3f80000U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                                                & (0U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 1U) 
                                                                                | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x1fU))))))
                                                                           ? 0x1cU
                                                                           : 
                                                                          ((IData)(
                                                                                ((0x3180000U 
                                                                                == 
                                                                                (0x3f80000U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                                                & (1U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 1U) 
                                                                                | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x1fU))))))
                                                                            ? 0x1dU
                                                                            : 
                                                                           ((IData)(
                                                                                ((0x3180000U 
                                                                                == 
                                                                                (0x3f80000U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                                                & (4U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 1U) 
                                                                                | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x1fU))))))
                                                                             ? 0x1eU
                                                                             : 
                                                                            ((IData)(
                                                                                ((0x3180000U 
                                                                                == 
                                                                                (0x3f80000U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                                                & (5U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 1U) 
                                                                                | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x1fU))))))
                                                                              ? 0x1fU
                                                                              : 
                                                                             ((IData)(
                                                                                ((0x3180000U 
                                                                                == 
                                                                                (0x3f80000U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                                                & (6U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 1U) 
                                                                                | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x1fU))))))
                                                                               ? 0x20U
                                                                               : 
                                                                              ((IData)(
                                                                                ((0x3180000U 
                                                                                == 
                                                                                (0x3f80000U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                                                & (7U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 1U) 
                                                                                | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x1fU))))))
                                                                                ? 0x21U
                                                                                : 
                                                                               ((IData)(
                                                                                ((0x3980000U 
                                                                                == 
                                                                                (0x3f80000U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                                                & (2U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 1U) 
                                                                                | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x1fU))))))
                                                                                 ? 0x22U
                                                                                 : 
                                                                                ((IData)(
                                                                                ((0x3980000U 
                                                                                == 
                                                                                (0x3f80000U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                                                & (1U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 1U) 
                                                                                | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x1fU))))))
                                                                                 ? 0x23U
                                                                                 : 0x25U))))))))))))))))))))))))))))))))));
    vlSelf->__PVT__my_FE_stage__DOT__br_cond_FE = ((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__br_cond_AGEX) 
                                                   != 
                                                   (1U 
                                                    & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                       >> 0x13U)));
    vlSelf->__PVT__my_DE_stage__DOT__is_branch = ((0x1cU 
                                                   == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                  | ((0x1dU 
                                                      == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                     | ((0x1eU 
                                                         == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                        | ((0x1fU 
                                                            == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                           | ((0x20U 
                                                               == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                              | (0x21U 
                                                                 == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))))));
    vlSelf->__PVT__my_DE_stage__DOT__wr_reg_DE = ((1U 
                                                   == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                  | ((0xcU 
                                                      == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                     | ((0x16U 
                                                         == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                        | ((0x19U 
                                                            == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                           | ((0x1bU 
                                                               == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                              | ((0x15U 
                                                                  == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                 | ((2U 
                                                                     == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                    | ((4U 
                                                                        == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                       | ((0xeU 
                                                                           == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                          | ((3U 
                                                                              == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                             | ((0xdU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((5U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0xfU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0xaU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((6U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0xbU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((7U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((8U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((9U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0xaU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x10U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x11U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x12U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x13U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x14U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | (0x17U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))))))))))))))))))))))))));
    vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE 
        = vlSelf->my_DE_stage__DOT____Vxrand_h9b4aa07f__0;
    if ((1U & (~ (((((((((((1U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                           | (2U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                          | (3U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                         | (4U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                        | (5U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                       | (6U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                      | (7U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                     | (8U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                    | (9U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                   | (0xaU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                  | (0xbU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))))) {
        if ((((((((((((0x22U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                      | (0x23U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                     | (0xcU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                    | (0xdU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                   | (0xeU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                  | (0xfU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                 | (0x10U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                | (0x11U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
               | (0x17U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
              | (0x1aU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
             | (0x1bU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) {
            vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE = 1U;
        } else if ((((0x12U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                     | (0x13U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                    | (0x14U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) {
            vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE = 1U;
        } else if (((0x15U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                    | (0x16U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) {
            vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE = 3U;
        } else if ((0x18U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) {
            vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE = 4U;
        } else if ((0x19U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) {
            vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE = 2U;
        } else if (((((((0x1cU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                        | (0x1dU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                       | (0x1eU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                      | (0x1fU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                     | (0x20U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                    | (0x21U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) {
            vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE = 5U;
        }
    }
    vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = vlSelf->my_DE_stage__DOT____Vxrand_h9b4ad0b7__0;
    if ((((((((((((1U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                  | (2U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                 | (3U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                | (4U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
               | (5U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
              | (6U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
             | (7U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
            | (8U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
           | (9U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
          | (0xaU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
         | (0xbU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) {
        vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = 1U;
    } else if ((((((((((((0x22U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                         | (0x23U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                        | (0xcU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                       | (0xdU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                      | (0xeU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                     | (0xfU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                    | (0x10U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                   | (0x11U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                  | (0x17U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                 | (0x1aU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                | (0x1bU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) {
        vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = 2U;
    } else if ((((0x12U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                 | (0x13U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                | (0x14U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) {
        vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = 2U;
    } else if (((0x15U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                | (0x16U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) {
        vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = 2U;
    } else if ((0x18U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) {
        vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = 3U;
    } else if ((0x19U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) {
        vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = 4U;
    } else if (((((((0x1cU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                    | (0x1dU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                   | (0x1eU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                  | (0x1fU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                 | (0x20U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                | (0x21U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) {
        vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = 3U;
    }
    if ((2U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_I_DE))) {
        vlSelf->__PVT__my_DE_stage__DOT__rs1_read_DE = 1U;
        vlSelf->__PVT__my_DE_stage__DOT__rs2_read_DE = 0U;
    } else if ((1U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_I_DE))) {
        vlSelf->__PVT__my_DE_stage__DOT__rs1_read_DE = 1U;
        vlSelf->__PVT__my_DE_stage__DOT__rs2_read_DE = 1U;
    } else if ((3U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_I_DE))) {
        vlSelf->__PVT__my_DE_stage__DOT__rs1_read_DE = 1U;
        vlSelf->__PVT__my_DE_stage__DOT__rs2_read_DE = 1U;
    }
}

VL_INLINE_OPT void Vpipeline_pipeline___nba_sequent__TOP__pipeline__2(Vpipeline_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___nba_sequent__TOP__pipeline__2\n"); );
    // Body
    vlSelf->__PVT__my_DE_stage__DOT__hazard = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                 >> 0x14U) 
                                                & (((IData)(vlSelf->__PVT__my_DE_stage__DOT__rs1_read_DE) 
                                                    & ((0x1fU 
                                                        & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                           >> 2U)) 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                           >> 0x15U)))) 
                                                   | ((IData)(vlSelf->__PVT__my_DE_stage__DOT__rs2_read_DE) 
                                                      & ((0x1fU 
                                                          & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                             >> 7U)) 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                             >> 0x15U)))))) 
                                               | ((vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                   & (((IData)(vlSelf->__PVT__my_DE_stage__DOT__rs1_read_DE) 
                                                       & ((0x1fU 
                                                           & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                              >> 2U)) 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                              >> 1U)))) 
                                                      | ((IData)(vlSelf->__PVT__my_DE_stage__DOT__rs2_read_DE) 
                                                         & ((0x1fU 
                                                             & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                >> 7U)) 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                >> 1U)))))) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                                              >> 0x25U)) 
                                                     & (((IData)(vlSelf->__PVT__my_DE_stage__DOT__rs1_read_DE) 
                                                         & ((0x1fU 
                                                             & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                >> 2U)) 
                                                            == 
                                                            (0x1fU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                                                        >> 0x20U))))) 
                                                        | ((IData)(vlSelf->__PVT__my_DE_stage__DOT__rs2_read_DE) 
                                                           & ((0x1fU 
                                                               & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                  >> 7U)) 
                                                              == 
                                                              (0x1fU 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                                                          >> 0x20U)))))))));
    vlSelf->__PVT__from_DE_to_FE = ((IData)(vlSelf->__PVT__my_DE_stage__DOT__hazard) 
                                    | (0x7a0U < ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                  << 0xdU) 
                                                 | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                    >> 0x13U))));
}

VL_INLINE_OPT void Vpipeline_pipeline___nba_sequent__TOP__pipeline__3(Vpipeline_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___nba_sequent__TOP__pipeline__3\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__my_DE_stage__DOT__regs__v0;
    __Vdlyvset__my_DE_stage__DOT__regs__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__my_DE_stage__DOT__regs__v32;
    __Vdlyvdim0__my_DE_stage__DOT__regs__v32 = 0;
    IData/*31:0*/ __Vdlyvval__my_DE_stage__DOT__regs__v32;
    __Vdlyvval__my_DE_stage__DOT__regs__v32 = 0;
    CData/*0:0*/ __Vdlyvset__my_DE_stage__DOT__regs__v32;
    __Vdlyvset__my_DE_stage__DOT__regs__v32 = 0;
    // Body
    __Vdlyvset__my_DE_stage__DOT__regs__v0 = 0U;
    __Vdlyvset__my_DE_stage__DOT__regs__v32 = 0U;
    if (vlSymsp->TOP.reset) {
        __Vdlyvset__my_DE_stage__DOT__regs__v0 = 1U;
    } else if (((IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                         >> 0x25U)) & (0U != (0x1fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                                         >> 0x20U)))))) {
        __Vdlyvval__my_DE_stage__DOT__regs__v32 = (IData)(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE);
        __Vdlyvset__my_DE_stage__DOT__regs__v32 = 1U;
        __Vdlyvdim0__my_DE_stage__DOT__regs__v32 = 
            (0x1fU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                              >> 0x20U)));
    }
    if (__Vdlyvset__my_DE_stage__DOT__regs__v0) {
        vlSelf->__PVT__my_DE_stage__DOT__regs[0U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[1U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[2U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[3U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[4U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[5U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[6U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[7U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[8U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[9U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0xaU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0xbU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0xcU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0xdU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0xeU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0xfU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x10U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x11U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x12U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x13U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x14U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x15U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x16U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x17U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x18U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x19U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x1aU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x1bU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x1cU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x1dU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x1eU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x1fU] = 0U;
    }
    if (__Vdlyvset__my_DE_stage__DOT__regs__v32) {
        vlSelf->__PVT__my_DE_stage__DOT__regs[__Vdlyvdim0__my_DE_stage__DOT__regs__v32] 
            = __Vdlyvval__my_DE_stage__DOT__regs__v32;
    }
}
