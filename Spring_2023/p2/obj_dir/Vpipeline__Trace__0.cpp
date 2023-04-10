// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpipeline__Syms.h"


void Vpipeline___024root__trace_chg_sub_0(Vpipeline___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vpipeline___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_chg_top_0\n"); );
    // Init
    Vpipeline___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpipeline___024root*>(voidSelf);
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vpipeline___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vpipeline___024root__trace_chg_sub_0(Vpipeline___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<3>/*95:0*/ __Vtemp_h8d788692__0;
    VlWide<3>/*95:0*/ __Vtemp_h37955558__0;
    VlWide<6>/*191:0*/ __Vtemp_hf9bf48fb__0;
    VlWide<5>/*159:0*/ __Vtemp_h084ac38d__0;
    VlWide<6>/*191:0*/ __Vtemp_h5f2e7620__0;
    VlWide<4>/*127:0*/ __Vtemp_h8c5112c3__0;
    VlWide<9>/*287:0*/ __Vtemp_hd390b217__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSymsp->TOP__pipeline.__PVT__my_BR_PREDICTOR__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+1,(vlSymsp->TOP__pipeline.__PVT__cycle_count),32);
        bufp->chgWData(oldp+2,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch),148);
        bufp->chgWData(oldp+7,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch),257);
        bufp->chgWData(oldp+16,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch),173);
        bufp->chgWData(oldp+22,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch),173);
        bufp->chgIData(oldp+28,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch),32);
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
        bufp->chgWData(oldp+29,(__Vtemp_h8d788692__0),84);
        bufp->chgQData(oldp+32,((((QData)((IData)((2U 
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
                                       ? ((3U == (3U 
                                                  & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]))
                                           ? 3U : ((IData)(1U) 
                                                   + 
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]))
                                       : ((0U == (3U 
                                                  & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]))
                                           ? 0U : (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
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
                                    | ((0x1fe00U & 
                                        ((0xfffffc00U 
                                          & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]) 
                                         | ((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX) 
                                            << 9U))) 
                                       | ((0x1feU & 
                                           (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                            >> 1U)) 
                                          | (1U & (
                                                   ((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX)
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
        bufp->chgWData(oldp+34,(__Vtemp_h37955558__0),82);
        bufp->chgBit(oldp+37,(vlSymsp->TOP__pipeline.__PVT__from_DE_to_FE));
        bufp->chgQData(oldp+38,((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_cond_FE)) 
                                  << 0x20U) | (QData)((IData)(
                                                              ((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX)
                                                                ? vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__pctarget_AGEX
                                                                : 
                                                               ((IData)(4U) 
                                                                + 
                                                                vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U])))))),33);
        bufp->chgCData(oldp+40,((((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_cond_FE) 
                                  << 6U) | ((0x20U 
                                             & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                >> 0xfU)) 
                                            | (0x1fU 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                  >> 0x15U))))),7);
        bufp->chgCData(oldp+41,(((0x20U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                           << 5U)) 
                                 | (0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                             >> 1U)))),6);
        bufp->chgQData(oldp+42,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE),38);
        __Vtemp_hf9bf48fb__0[0U] = (IData)((((QData)((IData)(
                                                             (0x3fU 
                                                              & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                                 >> 0x14U)))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX))));
        __Vtemp_hf9bf48fb__0[1U] = ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                                     << 6U) | (IData)(
                                                      ((((QData)((IData)(
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
        bufp->chgWData(oldp+44,(__Vtemp_hf9bf48fb__0),173);
        bufp->chgBit(oldp+50,((1U & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U])));
        bufp->chgIData(oldp+51,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U]),32);
        bufp->chgIData(oldp+52,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U]),32);
        bufp->chgIData(oldp+53,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                  << 6U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            >> 0x1aU))),32);
        bufp->chgIData(oldp+54,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U]),32);
        bufp->chgCData(oldp+55,((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                 >> 0x1aU)),6);
        bufp->chgBit(oldp+56,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX));
        bufp->chgIData(oldp+57,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__pctarget_AGEX),32);
        bufp->chgCData(oldp+58,((0xffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                          >> 0xaU))),8);
        bufp->chgCData(oldp+59,((0xffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                          >> 2U))),8);
        bufp->chgCData(oldp+60,((3U & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U])),2);
        bufp->chgIData(oldp+61,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                  << 6U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                            >> 0x1aU))),32);
        bufp->chgIData(oldp+62,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                  << 6U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                            >> 0x1aU))),32);
        bufp->chgIData(oldp+63,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                  << 6U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                            >> 0x1aU))),32);
        bufp->chgCData(oldp+64,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                          >> 0x15U))),5);
        bufp->chgBit(oldp+65,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                     >> 0x14U))));
        bufp->chgIData(oldp+66,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__sign_temp),32);
        bufp->chgIData(oldp+67,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX),32);
        bufp->chgIData(oldp+68,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX),32);
        bufp->chgBit(oldp+69,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                     >> 0x12U))));
        bufp->chgBit(oldp+70,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                     >> 0x13U))));
        bufp->chgBit(oldp+71,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_cond_FE));
        bufp->chgIData(oldp+72,(((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX)
                                  ? vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__pctarget_AGEX
                                  : ((IData)(4U) + 
                                     vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U]))),32);
        bufp->chgIData(oldp+73,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__taken_branches),32);
        bufp->chgIData(oldp+74,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__not_taken_branches),32);
        bufp->chgIData(oldp+75,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__correctly_predicted),32);
        bufp->chgCData(oldp+76,(vlSymsp->TOP__pipeline.__PVT__my_BR_PREDICTOR__DOT__BHR),8);
        bufp->chgQData(oldp+77,(vlSymsp->TOP__pipeline.__PVT__my_BR_PREDICTOR__DOT__BTB[0]),59);
        bufp->chgQData(oldp+79,(vlSymsp->TOP__pipeline.__PVT__my_BR_PREDICTOR__DOT__BTB[1]),59);
        bufp->chgQData(oldp+81,(vlSymsp->TOP__pipeline.__PVT__my_BR_PREDICTOR__DOT__BTB[2]),59);
        bufp->chgQData(oldp+83,(vlSymsp->TOP__pipeline.__PVT__my_BR_PREDICTOR__DOT__BTB[3]),59);
        bufp->chgQData(oldp+85,(vlSymsp->TOP__pipeline.__PVT__my_BR_PREDICTOR__DOT__BTB[4]),59);
        bufp->chgQData(oldp+87,(vlSymsp->TOP__pipeline.__PVT__my_BR_PREDICTOR__DOT__BTB[5]),59);
        bufp->chgQData(oldp+89,(vlSymsp->TOP__pipeline.__PVT__my_BR_PREDICTOR__DOT__BTB[6]),59);
        bufp->chgQData(oldp+91,(vlSymsp->TOP__pipeline.__PVT__my_BR_PREDICTOR__DOT__BTB[7]),59);
        bufp->chgQData(oldp+93,(vlSymsp->TOP__pipeline.__PVT__my_BR_PREDICTOR__DOT__BTB[8]),59);
        bufp->chgQData(oldp+95,(vlSymsp->TOP__pipeline.__PVT__my_BR_PREDICTOR__DOT__BTB[9]),59);
        bufp->chgQData(oldp+97,(vlSymsp->TOP__pipeline.__PVT__my_BR_PREDICTOR__DOT__BTB[10]),59);
        bufp->chgQData(oldp+99,(vlSymsp->TOP__pipeline.__PVT__my_BR_PREDICTOR__DOT__BTB[11]),59);
        bufp->chgQData(oldp+101,(vlSymsp->TOP__pipeline.__PVT__my_BR_PREDICTOR__DOT__BTB[12]),59);
        bufp->chgQData(oldp+103,(vlSymsp->TOP__pipeline.__PVT__my_BR_PREDICTOR__DOT__BTB[13]),59);
        bufp->chgQData(oldp+105,(vlSymsp->TOP__pipeline.__PVT__my_BR_PREDICTOR__DOT__BTB[14]),59);
        bufp->chgQData(oldp+107,(vlSymsp->TOP__pipeline.__PVT__my_BR_PREDICTOR__DOT__BTB[15]),59);
        bufp->chgQData(oldp+109,(vlSymsp->TOP__pipeline.__PVT__my_BR_PREDICTOR__DOT__BTB_entry),59);
        bufp->chgBit(oldp+111,((((0x3ffffffU & (IData)(
                                                       (vlSymsp->TOP__pipeline.__PVT__my_BR_PREDICTOR__DOT__BTB_entry 
                                                        >> 0x21U))) 
                                 == (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                     >> 6U)) & (IData)(
                                                       (vlSymsp->TOP__pipeline.__PVT__my_BR_PREDICTOR__DOT__BTB_entry 
                                                        >> 0x20U)))));
        bufp->chgIData(oldp+112,((IData)(vlSymsp->TOP__pipeline.__PVT__my_BR_PREDICTOR__DOT__BTB_entry)),32);
        bufp->chgBit(oldp+113,((2U <= (IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT_entry_FE))));
        bufp->chgCData(oldp+114,((0xffU & (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                             << 0x17U) 
                                            | (0x7ffffeU 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                  >> 9U))) 
                                           | (IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX)))),8);
        bufp->chgCData(oldp+115,((3U & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX)
                                         ? ((3U == 
                                             (3U & 
                                              vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]))
                                             ? 3U : 
                                            ((IData)(1U) 
                                             + vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]))
                                         : ((0U == 
                                             (3U & 
                                              vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]))
                                             ? 0U : 
                                            (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                             - (IData)(1U)))))),2);
        bufp->chgCData(oldp+116,((0xfU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                          >> 2U))),4);
        bufp->chgQData(oldp+117,((0x100000000ULL | 
                                  (((QData)((IData)(
                                                    (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                     >> 6U))) 
                                    << 0x21U) | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__pctarget_AGEX))))),59);
        bufp->chgBit(oldp+119,((1U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                      >> 0x13U))));
        bufp->chgIData(oldp+120,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                   << 0xdU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                               >> 0x13U))),32);
        bufp->chgIData(oldp+121,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                   << 0xdU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                               >> 0x13U))),32);
        bufp->chgIData(oldp+122,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                   << 0xdU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                               >> 0x13U))),32);
        bufp->chgIData(oldp+123,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                   << 0xdU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                               >> 0x13U))),32);
        bufp->chgBit(oldp+124,((1U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                      >> 0x12U))));
        bufp->chgCData(oldp+125,((7U & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                         << 1U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 0x1fU)))),3);
        bufp->chgCData(oldp+126,((0x7fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                           >> 0xcU))),7);
        bufp->chgCData(oldp+127,((0x7fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                           >> 0x13U))),7);
        bufp->chgCData(oldp+128,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE),6);
        bufp->chgCData(oldp+129,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE),4);
        bufp->chgCData(oldp+130,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE),3);
        bufp->chgBit(oldp+131,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_branch));
        bufp->chgIData(oldp+132,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
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
                                           << 0xbU) 
                                          | ((0x7e0U 
                                              & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                 >> 7U)) 
                                             | (0x1fU 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
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
                                                   : 0U)))))),32);
        bufp->chgBit(oldp+133,((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                              >> 0x25U)))));
        bufp->chgCData(oldp+134,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                           >> 2U))),5);
        bufp->chgCData(oldp+135,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                           >> 7U))),5);
        bufp->chgCData(oldp+136,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                           >> 0x1aU))),5);
        bufp->chgBit(oldp+137,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__wr_reg_DE));
        bufp->chgBit(oldp+138,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__hazard));
        bufp->chgBit(oldp+139,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__rs1_read_DE));
        bufp->chgBit(oldp+140,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__rs2_read_DE));
        bufp->chgCData(oldp+141,((0x1fU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                                   >> 0x20U)))),5);
        bufp->chgIData(oldp+142,((IData)(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE)),32);
        bufp->chgBit(oldp+143,((1U & vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U])));
        bufp->chgCData(oldp+144,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                           >> 1U))),5);
        bufp->chgCData(oldp+145,((0xffU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                           >> 0xaU))),8);
        bufp->chgCData(oldp+146,((0xffU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                           >> 2U))),8);
        bufp->chgCData(oldp+147,((3U & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U])),2);
        bufp->chgIData(oldp+148,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__num_branches),32);
        bufp->chgBit(oldp+149,(((0U < vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch) 
                                & (0x79cU >= vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))));
        bufp->chgIData(oldp+150,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE),32);
        bufp->chgIData(oldp+151,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                 [(0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                              >> 2U))]),32);
        bufp->chgIData(oldp+152,(((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)),32);
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
        bufp->chgWData(oldp+153,(__Vtemp_h084ac38d__0),148);
        bufp->chgCData(oldp+158,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT_entry_FE),2);
        bufp->chgCData(oldp+159,((0xfU & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)),4);
        bufp->chgBit(oldp+160,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__predicted_take));
        bufp->chgBit(oldp+161,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                      >> 0xcU))));
        __Vtemp_h5f2e7620__0[0U] = vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
            [(0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                         >> 2U))];
        __Vtemp_h5f2e7620__0[1U] = vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U];
        __Vtemp_h5f2e7620__0[2U] = vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U];
        __Vtemp_h5f2e7620__0[3U] = vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U];
        __Vtemp_h5f2e7620__0[4U] = vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U];
        __Vtemp_h5f2e7620__0[5U] = (0x1fffU & vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U]);
        bufp->chgWData(oldp+162,(__Vtemp_h5f2e7620__0),173);
        bufp->chgCData(oldp+168,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                           >> 6U))),6);
        bufp->chgIData(oldp+169,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                   << 0x1aU) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                                >> 6U))),32);
        bufp->chgIData(oldp+170,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                   << 0x14U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                                >> 0xcU))),32);
        bufp->chgIData(oldp+171,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                   << 0x14U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                                >> 0xcU))),32);
        bufp->chgIData(oldp+172,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U]),32);
        bufp->chgIData(oldp+173,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                 [(0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                              >> 2U))]),32);
        bufp->chgIData(oldp+174,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                   << 0x1aU) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                >> 6U))),32);
        bufp->chgBit(oldp+175,((0x18U == (0x3fU & (
                                                   vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                                   >> 6U)))));
        bufp->chgBit(oldp+176,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                      >> 0xcU))));
        bufp->chgCData(oldp+177,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                           >> 6U))),6);
        bufp->chgIData(oldp+178,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                   << 0x14U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                                >> 0xcU))),32);
        bufp->chgIData(oldp+179,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                   << 0x14U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                                >> 0xcU))),32);
        bufp->chgIData(oldp+180,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                   << 0x1aU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                                >> 6U))),32);
        bufp->chgBit(oldp+181,((1U & vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U])));
        bufp->chgCData(oldp+182,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                           >> 1U))),5);
        bufp->chgIData(oldp+183,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__regval_WB),32);
        bufp->chgIData(oldp+184,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                   << 0x1aU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                                >> 6U))),32);
        bufp->chgIData(oldp+185,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U]),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        __Vtemp_h8c5112c3__0[0U] = ((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                     ? (((- (IData)(
                                                    (1U 
                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                        >> 0x12U)))) 
                                         << 0xbU) | 
                                        (0x7ffU & (
                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   >> 7U)))
                                     : ((4U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                         ? (((- (IData)(
                                                        (1U 
                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                            >> 0x12U)))) 
                                             << 0xbU) 
                                            | ((0x7e0U 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   >> 7U)) 
                                               | (0x1fU 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
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
                                             : ((3U 
                                                 == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                 ? 
                                                (0xfffff000U 
                                                 & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     << 0xdU) 
                                                    | (0x1000U 
                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                          >> 0x13U))))
                                                 : 
                                                ((2U 
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
        bufp->chgWData(oldp+186,(__Vtemp_hd390b217__0),257);
        bufp->chgIData(oldp+195,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                 [(0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                            >> 2U))]),32);
        bufp->chgIData(oldp+196,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                 [(0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                            >> 7U))]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+197,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[0]),32);
        bufp->chgIData(oldp+198,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[1]),32);
        bufp->chgIData(oldp+199,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[2]),32);
        bufp->chgIData(oldp+200,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[3]),32);
        bufp->chgIData(oldp+201,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[4]),32);
        bufp->chgIData(oldp+202,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[5]),32);
        bufp->chgIData(oldp+203,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[6]),32);
        bufp->chgIData(oldp+204,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[7]),32);
        bufp->chgIData(oldp+205,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[8]),32);
        bufp->chgIData(oldp+206,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[9]),32);
        bufp->chgIData(oldp+207,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[10]),32);
        bufp->chgIData(oldp+208,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[11]),32);
        bufp->chgIData(oldp+209,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[12]),32);
        bufp->chgIData(oldp+210,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[13]),32);
        bufp->chgIData(oldp+211,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[14]),32);
        bufp->chgIData(oldp+212,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[15]),32);
        bufp->chgIData(oldp+213,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[16]),32);
        bufp->chgIData(oldp+214,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[17]),32);
        bufp->chgIData(oldp+215,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[18]),32);
        bufp->chgIData(oldp+216,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[19]),32);
        bufp->chgIData(oldp+217,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[20]),32);
        bufp->chgIData(oldp+218,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[21]),32);
        bufp->chgIData(oldp+219,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[22]),32);
        bufp->chgIData(oldp+220,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[23]),32);
        bufp->chgIData(oldp+221,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[24]),32);
        bufp->chgIData(oldp+222,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[25]),32);
        bufp->chgIData(oldp+223,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[26]),32);
        bufp->chgIData(oldp+224,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[27]),32);
        bufp->chgIData(oldp+225,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[28]),32);
        bufp->chgIData(oldp+226,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[29]),32);
        bufp->chgIData(oldp+227,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[30]),32);
        bufp->chgIData(oldp+228,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[31]),32);
        bufp->chgIData(oldp+229,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+230,(vlSelf->clk));
    bufp->chgBit(oldp+231,(vlSelf->reset));
    bufp->chgIData(oldp+232,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0U]),32);
    bufp->chgIData(oldp+233,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[1U]),32);
    bufp->chgIData(oldp+234,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[2U]),32);
    bufp->chgIData(oldp+235,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[3U]),32);
    bufp->chgIData(oldp+236,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[4U]),32);
    bufp->chgIData(oldp+237,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[5U]),32);
    bufp->chgIData(oldp+238,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[6U]),32);
    bufp->chgIData(oldp+239,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[7U]),32);
    bufp->chgIData(oldp+240,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[8U]),32);
    bufp->chgIData(oldp+241,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[9U]),32);
    bufp->chgIData(oldp+242,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xaU]),32);
    bufp->chgIData(oldp+243,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xbU]),32);
    bufp->chgIData(oldp+244,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xcU]),32);
    bufp->chgIData(oldp+245,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xdU]),32);
    bufp->chgIData(oldp+246,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xeU]),32);
    bufp->chgIData(oldp+247,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xfU]),32);
    bufp->chgIData(oldp+248,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x10U]),32);
    bufp->chgIData(oldp+249,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x11U]),32);
    bufp->chgIData(oldp+250,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x12U]),32);
    bufp->chgIData(oldp+251,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x13U]),32);
    bufp->chgIData(oldp+252,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x14U]),32);
    bufp->chgIData(oldp+253,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x15U]),32);
    bufp->chgIData(oldp+254,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x16U]),32);
    bufp->chgIData(oldp+255,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x17U]),32);
    bufp->chgIData(oldp+256,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x18U]),32);
    bufp->chgIData(oldp+257,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x19U]),32);
    bufp->chgIData(oldp+258,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1aU]),32);
    bufp->chgIData(oldp+259,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1bU]),32);
    bufp->chgIData(oldp+260,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1cU]),32);
    bufp->chgIData(oldp+261,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1dU]),32);
    bufp->chgIData(oldp+262,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1eU]),32);
    bufp->chgIData(oldp+263,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1fU]),32);
    bufp->chgIData(oldp+264,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[0U]),32);
    bufp->chgIData(oldp+265,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[1U]),32);
    bufp->chgIData(oldp+266,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[2U]),32);
    bufp->chgIData(oldp+267,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[3U]),32);
    bufp->chgIData(oldp+268,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[4U]),32);
    bufp->chgIData(oldp+269,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[5U]),32);
    bufp->chgIData(oldp+270,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[6U]),32);
    bufp->chgIData(oldp+271,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[7U]),32);
}

void Vpipeline___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_cleanup\n"); );
    // Init
    Vpipeline___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpipeline___024root*>(voidSelf);
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
