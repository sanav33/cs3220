// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vpipeline_pipeline.h"

extern const VlWide<20>/*639:0*/ Vpipeline__ConstPool__CONST_h0228d251_0;

VL_ATTR_COLD void Vpipeline_pipeline___eval_initial__TOP__pipeline(Vpipeline_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___eval_initial__TOP__pipeline\n"); );
    // Body
    VL_READMEM_N(true, 32, 16384, 0, VL_CVT_PACK_STR_NW(20, Vpipeline__ConstPool__CONST_h0228d251_0)
                 ,  &(vlSelf->__PVT__my_FE_stage__DOT__imem)
                 , 0, ~0ULL);
    vlSelf->__PVT__my_BR_PREDICTOR__DOT__i = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelf->__PVT__my_BR_PREDICTOR__DOT__i)) {
        vlSelf->__PVT__my_BR_PREDICTOR__DOT__PHT[(0xffU 
                                                  & vlSelf->__PVT__my_BR_PREDICTOR__DOT__i)] = 2U;
        vlSelf->__PVT__my_BR_PREDICTOR__DOT__i = ((IData)(1U) 
                                                  + vlSelf->__PVT__my_BR_PREDICTOR__DOT__i);
    }
    vlSelf->my_DE_stage__DOT____Vxrand_h9b4aa07f__0 
        = (7U & VL_RAND_RESET_I(3));
    vlSelf->my_DE_stage__DOT____Vxrand_h9b4ad0b7__0 
        = (0xfU & VL_RAND_RESET_I(4));
    VL_READMEM_N(true, 32, 16384, 0, VL_CVT_PACK_STR_NW(20, Vpipeline__ConstPool__CONST_h0228d251_0)
                 ,  &(vlSelf->__PVT__my_MEM_stage__DOT__dmem)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vpipeline_pipeline___stl_sequent__TOP__pipeline__0(Vpipeline_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___stl_sequent__TOP__pipeline__0\n"); );
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
    // Body
    vlSelf->__PVT__my_FE_stage__DOT__pcplus_FE = ((IData)(4U) 
                                                  + vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch);
    vlSelf->__PVT__my_FE_stage__DOT__PHT_entry_FE = 
        vlSelf->__PVT__my_BR_PREDICTOR__DOT__PHT[vlSelf->__PVT__my_BR_PREDICTOR__DOT__BHR];
    vlSelf->__PVT__my_BR_PREDICTOR__DOT__BTB_entry 
        = vlSelf->__PVT__my_BR_PREDICTOR__DOT__BTB[
        (0xfU & (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                 >> 2U))];
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
    vlSelf->__PVT__my_FE_stage__DOT__predicted_take 
        = ((((0x3ffffffU & (IData)((vlSelf->__PVT__my_BR_PREDICTOR__DOT__BTB_entry 
                                    >> 0x21U))) == 
             (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
              >> 6U)) & (IData)((vlSelf->__PVT__my_BR_PREDICTOR__DOT__BTB_entry 
                                 >> 0x20U))) & (2U 
                                                <= (IData)(vlSelf->__PVT__my_FE_stage__DOT__PHT_entry_FE)));
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

VL_ATTR_COLD void Vpipeline_pipeline___ctor_var_reset(Vpipeline_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cycle_count = VL_RAND_RESET_I(32);
    vlSelf->__PVT__from_DE_to_FE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__from_MEM_to_FE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__from_MEM_to_AGEX = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->__PVT__my_FE_stage__DOT__imem[__Vi0] = VL_RAND_RESET_I(32);
    }
    VL_RAND_RESET_W(148, vlSelf->__PVT__my_FE_stage__DOT__FE_latch);
    vlSelf->__PVT__my_FE_stage__DOT__br_cond_FE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_FE_stage__DOT__inst_count_FE = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_FE_stage__DOT__inst_count_AGEX = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_FE_stage__DOT__pcplus_FE = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_FE_stage__DOT__PHT_entry_FE = VL_RAND_RESET_I(2);
    vlSelf->__PVT__my_FE_stage__DOT__BTB_entry_FE = VL_RAND_RESET_Q(61);
    vlSelf->__PVT__my_FE_stage__DOT__predicted_take = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->__PVT__my_BR_PREDICTOR__DOT__PHT[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->__PVT__my_BR_PREDICTOR__DOT__BHR = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__my_BR_PREDICTOR__DOT__BTB[__Vi0] = VL_RAND_RESET_Q(59);
    }
    vlSelf->__PVT__my_BR_PREDICTOR__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_BR_PREDICTOR__DOT__BTB_entry = VL_RAND_RESET_Q(59);
    vlSelf->__PVT__my_BR_PREDICTOR__DOT__br_cond_predictor = VL_RAND_RESET_I(1);
    vlSelf->my_DE_stage__DOT____Vxrand_h9b4aa07f__0 = VL_RAND_RESET_I(3);
    vlSelf->my_DE_stage__DOT____Vxrand_h9b4ad0b7__0 = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(257, vlSelf->__PVT__my_DE_stage__DOT__DE_latch);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__my_DE_stage__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__my_DE_stage__DOT__busy_bits = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_DE_stage__DOT__op_I_DE = VL_RAND_RESET_I(6);
    vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = VL_RAND_RESET_I(4);
    vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE = VL_RAND_RESET_I(3);
    vlSelf->__PVT__my_DE_stage__DOT__is_branch = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_DE_stage__DOT__wr_reg_DE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_DE_stage__DOT__hazard = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_DE_stage__DOT__rs1_read_DE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_DE_stage__DOT__rs2_read_DE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_DE_stage__DOT__rs_busy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_DE_stage__DOT__num_branches = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(173, vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch);
    vlSelf->__PVT__my_AGEX_stage__DOT__br_cond_AGEX = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_AGEX_stage__DOT__pctarget_AGEX = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_AGEX_stage__DOT__sign_temp = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_AGEX_stage__DOT__memaddr_AGEX = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_AGEX_stage__DOT__taken_branches = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_AGEX_stage__DOT__not_taken_branches = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_AGEX_stage__DOT__correctly_predicted = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_updater__DOT__BTB_index = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->__PVT__my_MEM_stage__DOT__dmem[__Vi0] = VL_RAND_RESET_I(32);
    }
    VL_RAND_RESET_W(173, vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch);
    VL_RAND_RESET_W(148, vlSelf->__Vdly__my_FE_stage__DOT__FE_latch);
    vlSelf->__Vdlyvdim0__my_MEM_stage__DOT__dmem__v0 = 0;
    vlSelf->__Vdlyvval__my_MEM_stage__DOT__dmem__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__my_MEM_stage__DOT__dmem__v0 = 0;
}
