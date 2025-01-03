// generated using template: cop_main.template---------------------------------------------
/******************************************************************************************
**
**  Module Name: cop_main.c
**  NOTE: Automatically generated file. DO NOT MODIFY!
**  Description:
**            Main file
**
******************************************************************************************/
// generated using template: arm/custom_include.template-----------------------------------


#ifdef __cplusplus
#include <limits>

extern "C" {
#endif

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>
#include <complex.h>

// x86 libraries:
#include "../include/sp_functions_dev0.h"


#ifdef __cplusplus
}
#endif


// ----------------------------------------------------------------------------------------                // generated using template:generic_macros.template-----------------------------------------
/*********************** Macros (Inline Functions) Definitions ***************************/

// ----------------------------------------------------------------------------------------

#ifndef MAX
#define MAX(value, limit) (((value) > (limit)) ? (value) : (limit))
#endif
#ifndef MIN
#define MIN(value, limit) (((value) < (limit)) ? (value) : (limit))
#endif

// generated using template: VirtualHIL/custom_defines.template----------------------------

typedef unsigned char X_UnInt8;
typedef char X_Int8;
typedef signed short X_Int16;
typedef unsigned short X_UnInt16;
typedef int X_Int32;
typedef unsigned int X_UnInt32;
typedef unsigned int uint;
typedef double real;

// ----------------------------------------------------------------------------------------
// generated using template: custom_consts.template----------------------------------------

// arithmetic constants
#define C_SQRT_2                    1.4142135623730950488016887242097f
#define C_SQRT_3                    1.7320508075688772935274463415059f
#define C_PI                        3.1415926535897932384626433832795f
#define C_E                         2.7182818284590452353602874713527f
#define C_2PI                       6.283185307179586476925286766559f

//@cmp.def.start
//component defines























































//@cmp.def.end


//-----------------------------------------------------------------------------------------
// generated using template: common_variables.template-------------------------------------
// true global variables



// const variables

//@cmp.var.start
// variables
float _iga_rms_instantaneous__out;
float _iga_rms_rt1_output__out;
float _iga_rms_rt2_output__out;
float _igb_rms_instantaneous__out;
float _igb_rms_rt1_output__out;
float _igb_rms_rt2_output__out;
float _igc_rms_instantaneous__out;
float _igc_rms_rt1_output__out;
float _igc_rms_rt2_output__out;
float _vab_rms_instantaneous__out;
float _vab_rms_rt1_output__out;
float _vab_rms_rt2_output__out;
float _vbc_rms_instantaneous__out;
float _vbc_rms_rt1_output__out;
float _vbc_rms_rt2_output__out;
float _iga_rms_rms_calc_fast__var_eff_s;
float _iga_rms_rms_calc_fast__period;
float _iga_rms_rms_calc_fast__var_filt;
X_UnInt32 _iga_rms_rms_calc_fast__var_zc;
float _iga_rms_rms_calc_slow__var_rms;
float _igb_rms_rms_calc_fast__var_eff_s;
float _igb_rms_rms_calc_fast__period;
float _igb_rms_rms_calc_fast__var_filt;
X_UnInt32 _igb_rms_rms_calc_fast__var_zc;
float _igb_rms_rms_calc_slow__var_rms;
float _igc_rms_rms_calc_fast__var_eff_s;
float _igc_rms_rms_calc_fast__period;
float _igc_rms_rms_calc_fast__var_filt;
X_UnInt32 _igc_rms_rms_calc_fast__var_zc;
float _igc_rms_rms_calc_slow__var_rms;
float _vab_rms_rms_calc_fast__var_eff_s;
float _vab_rms_rms_calc_fast__period;
float _vab_rms_rms_calc_fast__var_filt;
X_UnInt32 _vab_rms_rms_calc_fast__var_zc;
float _vab_rms_rms_calc_slow__var_rms;
float _vbc_rms_rms_calc_fast__var_eff_s;
float _vbc_rms_rms_calc_fast__period;
float _vbc_rms_rms_calc_fast__var_filt;
X_UnInt32 _vbc_rms_rms_calc_fast__var_zc;
float _vbc_rms_rms_calc_slow__var_rms;
//@cmp.var.end

//@cmp.svar.start
// state variables
float _iga_rms_rt1_output__state;
float _iga_rms_rt2_output__state;
float _igb_rms_rt1_output__state;
float _igb_rms_rt2_output__state;
float _igc_rms_rt1_output__state;
float _igc_rms_rt2_output__state;
float _vab_rms_rt1_output__state;
float _vab_rms_rt2_output__state;
float _vbc_rms_rt1_output__state;
float _vbc_rms_rt2_output__state;
float _iga_rms_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _iga_rms_rms_calc_fast__pc_cnt_1_state;
float _iga_rms_rms_calc_fast__var_eff_s_state;
float _iga_rms_rms_calc_fast__var_filt_state;
float _iga_rms_rms_calc_fast__period_state;
float _igb_rms_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _igb_rms_rms_calc_fast__pc_cnt_1_state;
float _igb_rms_rms_calc_fast__var_eff_s_state;
float _igb_rms_rms_calc_fast__var_filt_state;
float _igb_rms_rms_calc_fast__period_state;
float _igc_rms_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _igc_rms_rms_calc_fast__pc_cnt_1_state;
float _igc_rms_rms_calc_fast__var_eff_s_state;
float _igc_rms_rms_calc_fast__var_filt_state;
float _igc_rms_rms_calc_fast__period_state;
float _vab_rms_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _vab_rms_rms_calc_fast__pc_cnt_1_state;
float _vab_rms_rms_calc_fast__var_eff_s_state;
float _vab_rms_rms_calc_fast__var_filt_state;
float _vab_rms_rms_calc_fast__period_state;
float _vbc_rms_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _vbc_rms_rms_calc_fast__pc_cnt_1_state;
float _vbc_rms_rms_calc_fast__var_eff_s_state;
float _vbc_rms_rms_calc_fast__var_filt_state;
float _vbc_rms_rms_calc_fast__period_state;
//@cmp.svar.end


// Dll function pointers
#if defined(_WIN64)
#else
// Define handles for loading dlls
#endif








// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_sys_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif
    //@cmp.init.block.start
    _iga_rms_rt1_output__state =  0.0;
    _iga_rms_rt2_output__state =  0.0;
    _igb_rms_rt1_output__state =  0.0;
    _igb_rms_rt2_output__state =  0.0;
    _igc_rms_rt1_output__state =  0.0;
    _igc_rms_rt2_output__state =  0.0;
    _vab_rms_rt1_output__state =  0.0;
    _vab_rms_rt2_output__state =  0.0;
    _vbc_rms_rt1_output__state =  0.0;
    _vbc_rms_rt2_output__state =  0.0;
    _iga_rms_rms_calc_fast__var_eff_s_state = 0;
    _iga_rms_rms_calc_fast__period_state = 0.0f;
    _iga_rms_rms_calc_fast__var_filt_state = 0.0f;
    _iga_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    _iga_rms_rms_calc_fast__pc_cnt_1_state = 0;
    _igb_rms_rms_calc_fast__var_eff_s_state = 0;
    _igb_rms_rms_calc_fast__period_state = 0.0f;
    _igb_rms_rms_calc_fast__var_filt_state = 0.0f;
    _igb_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    _igb_rms_rms_calc_fast__pc_cnt_1_state = 0;
    _igc_rms_rms_calc_fast__var_eff_s_state = 0;
    _igc_rms_rms_calc_fast__period_state = 0.0f;
    _igc_rms_rms_calc_fast__var_filt_state = 0.0f;
    _igc_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    _igc_rms_rms_calc_fast__pc_cnt_1_state = 0;
    _vab_rms_rms_calc_fast__var_eff_s_state = 0;
    _vab_rms_rms_calc_fast__period_state = 0.0f;
    _vab_rms_rms_calc_fast__var_filt_state = 0.0f;
    _vab_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    _vab_rms_rms_calc_fast__pc_cnt_1_state = 0;
    _vbc_rms_rms_calc_fast__var_eff_s_state = 0;
    _vbc_rms_rms_calc_fast__period_state = 0.0f;
    _vbc_rms_rms_calc_fast__var_filt_state = 0.0f;
    _vbc_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    _vbc_rms_rms_calc_fast__pc_cnt_1_state = 0;
    HIL_OutAO(0x2000, 0.0f);
    HIL_OutAO(0x2001, 0.0f);
    HIL_OutAO(0x2002, 0.0f);
    HIL_OutAO(0x2003, 0.0f);
    HIL_OutAO(0x2004, 0.0f);
    //@cmp.init.block.end
}


// Dll function pointers and dll reload function
#if defined(_WIN64)
// Define method for reloading dll functions
void ReloadDllFunctions_sys_sp_cpu0_dev0(void) {
    // Load each library and setup function pointers
}

void FreeDllFunctions_sys_sp_cpu0_dev0(void) {
}

#else
// Define method for reloading dll functions
void ReloadDllFunctions_sys_sp_cpu0_dev0(void) {
    // Load each library and setup function pointers
}

void FreeDllFunctions_sys_sp_cpu0_dev0(void) {
}
#endif

void load_fmi_libraries_sys_sp_cpu0_dev0(void) {
#if defined(_WIN64)
#else
#endif
}


void ReInit_sp_scope_sys_sp_cpu0_dev0() {
    // initialise SP Scope buffer pointer
}
// generated using template: common_timer_counter_handler.template-------------------------

/*****************************************************************************************/
/**
* This function is the handler which performs processing for the timer counter.
* It is called from an interrupt context such that the amount of processing
* performed should be minimized.  It is called when the timer counter expires
* if interrupts are enabled.
*
*
* @param    None
*
* @return   None
*
* @note     None
*
*****************************************************************************************/

void TimerCounterHandler_0_sys_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_0");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Set tunable parameters
    //////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: Iga_rms.instantaneous
    _iga_rms_instantaneous__out = (HIL_InFloat(0xc80000 + 0x16));
    // Generated from the component: Igb_rms.instantaneous
    _igb_rms_instantaneous__out = (HIL_InFloat(0xc80000 + 0x17));
    // Generated from the component: Igc_rms.instantaneous
    _igc_rms_instantaneous__out = (HIL_InFloat(0xc80000 + 0x18));
    // Generated from the component: Vab_rms.instantaneous
    _vab_rms_instantaneous__out = (HIL_InFloat(0xc80000 + 0xd));
    // Generated from the component: Vbc_rms.instantaneous
    _vbc_rms_instantaneous__out = (HIL_InFloat(0xc80000 + 0x10));
    // Generated from the component: Iga_rms.rms_calc_fast
    _iga_rms_rms_calc_fast__v_sq_sum_state = _iga_rms_rms_calc_fast__v_sq_sum_state + _iga_rms_instantaneous__out * _iga_rms_instantaneous__out;
    _iga_rms_rms_calc_fast__var_filt = (_iga_rms_rms_calc_fast__var_filt_state * 0.909 + _iga_rms_instantaneous__out * 0.0909);
    if((_iga_rms_rms_calc_fast__var_filt >= 0.0f) && (_iga_rms_rms_calc_fast__var_filt_state < 0.0f)) {
        _iga_rms_rms_calc_fast__var_zc = 1;
    }
    else {
        _iga_rms_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_iga_rms_rms_calc_fast__var_zc == 1) || (5000 == _iga_rms_rms_calc_fast__pc_cnt_1_state)) {
        _iga_rms_rms_calc_fast__var_eff_s_state = _iga_rms_rms_calc_fast__v_sq_sum_state;
        _iga_rms_rms_calc_fast__period_state = (float)_iga_rms_rms_calc_fast__pc_cnt_1_state;
        _iga_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    _iga_rms_rms_calc_fast__var_eff_s = _iga_rms_rms_calc_fast__var_eff_s_state;
    _iga_rms_rms_calc_fast__period = _iga_rms_rms_calc_fast__period_state;
    // Generated from the component: Igb_rms.rms_calc_fast
    _igb_rms_rms_calc_fast__v_sq_sum_state = _igb_rms_rms_calc_fast__v_sq_sum_state + _igb_rms_instantaneous__out * _igb_rms_instantaneous__out;
    _igb_rms_rms_calc_fast__var_filt = (_igb_rms_rms_calc_fast__var_filt_state * 0.909 + _igb_rms_instantaneous__out * 0.0909);
    if((_igb_rms_rms_calc_fast__var_filt >= 0.0f) && (_igb_rms_rms_calc_fast__var_filt_state < 0.0f)) {
        _igb_rms_rms_calc_fast__var_zc = 1;
    }
    else {
        _igb_rms_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_igb_rms_rms_calc_fast__var_zc == 1) || (5000 == _igb_rms_rms_calc_fast__pc_cnt_1_state)) {
        _igb_rms_rms_calc_fast__var_eff_s_state = _igb_rms_rms_calc_fast__v_sq_sum_state;
        _igb_rms_rms_calc_fast__period_state = (float)_igb_rms_rms_calc_fast__pc_cnt_1_state;
        _igb_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    _igb_rms_rms_calc_fast__var_eff_s = _igb_rms_rms_calc_fast__var_eff_s_state;
    _igb_rms_rms_calc_fast__period = _igb_rms_rms_calc_fast__period_state;
    // Generated from the component: Igc_rms.rms_calc_fast
    _igc_rms_rms_calc_fast__v_sq_sum_state = _igc_rms_rms_calc_fast__v_sq_sum_state + _igc_rms_instantaneous__out * _igc_rms_instantaneous__out;
    _igc_rms_rms_calc_fast__var_filt = (_igc_rms_rms_calc_fast__var_filt_state * 0.909 + _igc_rms_instantaneous__out * 0.0909);
    if((_igc_rms_rms_calc_fast__var_filt >= 0.0f) && (_igc_rms_rms_calc_fast__var_filt_state < 0.0f)) {
        _igc_rms_rms_calc_fast__var_zc = 1;
    }
    else {
        _igc_rms_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_igc_rms_rms_calc_fast__var_zc == 1) || (5000 == _igc_rms_rms_calc_fast__pc_cnt_1_state)) {
        _igc_rms_rms_calc_fast__var_eff_s_state = _igc_rms_rms_calc_fast__v_sq_sum_state;
        _igc_rms_rms_calc_fast__period_state = (float)_igc_rms_rms_calc_fast__pc_cnt_1_state;
        _igc_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    _igc_rms_rms_calc_fast__var_eff_s = _igc_rms_rms_calc_fast__var_eff_s_state;
    _igc_rms_rms_calc_fast__period = _igc_rms_rms_calc_fast__period_state;
    // Generated from the component: Vab_rms.rms_calc_fast
    _vab_rms_rms_calc_fast__v_sq_sum_state = _vab_rms_rms_calc_fast__v_sq_sum_state + _vab_rms_instantaneous__out * _vab_rms_instantaneous__out;
    _vab_rms_rms_calc_fast__var_filt = (_vab_rms_rms_calc_fast__var_filt_state * 0.909 + _vab_rms_instantaneous__out * 0.0909);
    if((_vab_rms_rms_calc_fast__var_filt >= 0.0f) && (_vab_rms_rms_calc_fast__var_filt_state < 0.0f)) {
        _vab_rms_rms_calc_fast__var_zc = 1;
    }
    else {
        _vab_rms_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_vab_rms_rms_calc_fast__var_zc == 1) || (5000 == _vab_rms_rms_calc_fast__pc_cnt_1_state)) {
        _vab_rms_rms_calc_fast__var_eff_s_state = _vab_rms_rms_calc_fast__v_sq_sum_state;
        _vab_rms_rms_calc_fast__period_state = (float)_vab_rms_rms_calc_fast__pc_cnt_1_state;
        _vab_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    _vab_rms_rms_calc_fast__var_eff_s = _vab_rms_rms_calc_fast__var_eff_s_state;
    _vab_rms_rms_calc_fast__period = _vab_rms_rms_calc_fast__period_state;
    // Generated from the component: Vbc_rms.rms_calc_fast
    _vbc_rms_rms_calc_fast__v_sq_sum_state = _vbc_rms_rms_calc_fast__v_sq_sum_state + _vbc_rms_instantaneous__out * _vbc_rms_instantaneous__out;
    _vbc_rms_rms_calc_fast__var_filt = (_vbc_rms_rms_calc_fast__var_filt_state * 0.909 + _vbc_rms_instantaneous__out * 0.0909);
    if((_vbc_rms_rms_calc_fast__var_filt >= 0.0f) && (_vbc_rms_rms_calc_fast__var_filt_state < 0.0f)) {
        _vbc_rms_rms_calc_fast__var_zc = 1;
    }
    else {
        _vbc_rms_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_vbc_rms_rms_calc_fast__var_zc == 1) || (5000 == _vbc_rms_rms_calc_fast__pc_cnt_1_state)) {
        _vbc_rms_rms_calc_fast__var_eff_s_state = _vbc_rms_rms_calc_fast__v_sq_sum_state;
        _vbc_rms_rms_calc_fast__period_state = (float)_vbc_rms_rms_calc_fast__pc_cnt_1_state;
        _vbc_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    _vbc_rms_rms_calc_fast__var_eff_s = _vbc_rms_rms_calc_fast__var_eff_s_state;
    _vbc_rms_rms_calc_fast__period = _vbc_rms_rms_calc_fast__period_state;
    // Generated from the component: Iga_rms.rt1.Input
    _iga_rms_rt1_output__state = _iga_rms_rms_calc_fast__var_eff_s;
    // Generated from the component: Iga_rms.rt2.Input
    _iga_rms_rt2_output__state = _iga_rms_rms_calc_fast__period;
    // Generated from the component: Iga_rms.t1
    // Generated from the component: Igb_rms.rt1.Input
    _igb_rms_rt1_output__state = _igb_rms_rms_calc_fast__var_eff_s;
    // Generated from the component: Igb_rms.rt2.Input
    _igb_rms_rt2_output__state = _igb_rms_rms_calc_fast__period;
    // Generated from the component: Igb_rms.t1
    // Generated from the component: Igc_rms.rt1.Input
    _igc_rms_rt1_output__state = _igc_rms_rms_calc_fast__var_eff_s;
    // Generated from the component: Igc_rms.rt2.Input
    _igc_rms_rt2_output__state = _igc_rms_rms_calc_fast__period;
    // Generated from the component: Igc_rms.t1
    // Generated from the component: Vab_rms.rt1.Input
    _vab_rms_rt1_output__state = _vab_rms_rms_calc_fast__var_eff_s;
    // Generated from the component: Vab_rms.rt2.Input
    _vab_rms_rt2_output__state = _vab_rms_rms_calc_fast__period;
    // Generated from the component: Vab_rms.t1
    // Generated from the component: Vbc_rms.rt1.Input
    _vbc_rms_rt1_output__state = _vbc_rms_rms_calc_fast__var_eff_s;
    // Generated from the component: Vbc_rms.rt2.Input
    _vbc_rms_rt2_output__state = _vbc_rms_rms_calc_fast__period;
    // Generated from the component: Vbc_rms.t1
//@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: Iga_rms.rms_calc_fast
    if ((_iga_rms_rms_calc_fast__var_zc == 1) || (5000 == _iga_rms_rms_calc_fast__pc_cnt_1_state)) {
        _iga_rms_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _iga_rms_rms_calc_fast__var_filt_state = _iga_rms_rms_calc_fast__var_filt;
    _iga_rms_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Igb_rms.rms_calc_fast
    if ((_igb_rms_rms_calc_fast__var_zc == 1) || (5000 == _igb_rms_rms_calc_fast__pc_cnt_1_state)) {
        _igb_rms_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _igb_rms_rms_calc_fast__var_filt_state = _igb_rms_rms_calc_fast__var_filt;
    _igb_rms_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Igc_rms.rms_calc_fast
    if ((_igc_rms_rms_calc_fast__var_zc == 1) || (5000 == _igc_rms_rms_calc_fast__pc_cnt_1_state)) {
        _igc_rms_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _igc_rms_rms_calc_fast__var_filt_state = _igc_rms_rms_calc_fast__var_filt;
    _igc_rms_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Vab_rms.rms_calc_fast
    if ((_vab_rms_rms_calc_fast__var_zc == 1) || (5000 == _vab_rms_rms_calc_fast__pc_cnt_1_state)) {
        _vab_rms_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _vab_rms_rms_calc_fast__var_filt_state = _vab_rms_rms_calc_fast__var_filt;
    _vab_rms_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Vbc_rms.rms_calc_fast
    if ((_vbc_rms_rms_calc_fast__var_zc == 1) || (5000 == _vbc_rms_rms_calc_fast__pc_cnt_1_state)) {
        _vbc_rms_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _vbc_rms_rms_calc_fast__var_filt_state = _vbc_rms_rms_calc_fast__var_filt;
    _vbc_rms_rms_calc_fast__pc_cnt_1_state ++;
    //@cmp.update.block.end
}
void TimerCounterHandler_1_sys_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_1");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Set tunable parameters
    //////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: Iga_rms.rt1.Output
    _iga_rms_rt1_output__out = _iga_rms_rt1_output__state;
    // Generated from the component: Iga_rms.rt2.Output
    _iga_rms_rt2_output__out = _iga_rms_rt2_output__state;
    // Generated from the component: Igb_rms.rt1.Output
    _igb_rms_rt1_output__out = _igb_rms_rt1_output__state;
    // Generated from the component: Igb_rms.rt2.Output
    _igb_rms_rt2_output__out = _igb_rms_rt2_output__state;
    // Generated from the component: Igc_rms.rt1.Output
    _igc_rms_rt1_output__out = _igc_rms_rt1_output__state;
    // Generated from the component: Igc_rms.rt2.Output
    _igc_rms_rt2_output__out = _igc_rms_rt2_output__state;
    // Generated from the component: Vab_rms.rt1.Output
    _vab_rms_rt1_output__out = _vab_rms_rt1_output__state;
    // Generated from the component: Vab_rms.rt2.Output
    _vab_rms_rt2_output__out = _vab_rms_rt2_output__state;
    // Generated from the component: Vbc_rms.rt1.Output
    _vbc_rms_rt1_output__out = _vbc_rms_rt1_output__state;
    // Generated from the component: Vbc_rms.rt2.Output
    _vbc_rms_rt2_output__out = _vbc_rms_rt2_output__state;
    // Generated from the component: Iga_rms.rms_calc_slow
    if(_iga_rms_rt2_output__out > 0.0f) {
        _iga_rms_rms_calc_slow__var_rms = sqrtf(_iga_rms_rt1_output__out / _iga_rms_rt2_output__out);
    }
    else {
        _iga_rms_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Igb_rms.rms_calc_slow
    if(_igb_rms_rt2_output__out > 0.0f) {
        _igb_rms_rms_calc_slow__var_rms = sqrtf(_igb_rms_rt1_output__out / _igb_rms_rt2_output__out);
    }
    else {
        _igb_rms_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Igc_rms.rms_calc_slow
    if(_igc_rms_rt2_output__out > 0.0f) {
        _igc_rms_rms_calc_slow__var_rms = sqrtf(_igc_rms_rt1_output__out / _igc_rms_rt2_output__out);
    }
    else {
        _igc_rms_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Vab_rms.rms_calc_slow
    if(_vab_rms_rt2_output__out > 0.0f) {
        _vab_rms_rms_calc_slow__var_rms = sqrtf(_vab_rms_rt1_output__out / _vab_rms_rt2_output__out);
    }
    else {
        _vab_rms_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Vbc_rms.rms_calc_slow
    if(_vbc_rms_rt2_output__out > 0.0f) {
        _vbc_rms_rms_calc_slow__var_rms = sqrtf(_vbc_rms_rt1_output__out / _vbc_rms_rt2_output__out);
    }
    else {
        _vbc_rms_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Iga_rms.rms
    HIL_OutAO(0x2000, _iga_rms_rms_calc_slow__var_rms);
    // Generated from the component: Igb_rms.rms
    HIL_OutAO(0x2001, _igb_rms_rms_calc_slow__var_rms);
    // Generated from the component: Igc_rms.rms
    HIL_OutAO(0x2002, _igc_rms_rms_calc_slow__var_rms);
    // Generated from the component: Vab_rms.rms
    HIL_OutAO(0x2003, _vab_rms_rms_calc_slow__var_rms);
    // Generated from the component: Vbc_rms.rms
    HIL_OutAO(0x2004, _vbc_rms_rms_calc_slow__var_rms);
//@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------