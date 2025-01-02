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






































#define SQRT_2OVER3 0.8164965809277260327324280249019f
#define SQRT3_OVER_2 0.8660254037844386467637231707529f
#define ONE_DIV_BY_SQRT_3 0.57735026918962576450914878f

































































//@cmp.def.end


//-----------------------------------------------------------------------------------------
// generated using template: common_variables.template-------------------------------------
// true global variables



// const variables

//@cmp.var.start
// variables
double _c__out = 1.0;
double _current_controller_dq_decouple_enable__out;
double _current_ref_limit_zero__out = 100.0;
double _current_ref_one__out = 100.0;
double _ia_ia1__out;
double _ib_ia1__out;
double _ic_ia1__out;
double _pll_lpf_lpf__out;
double _pll_lpf_lpf__b_coeff[2] = { -2.220446049250313e-16, 0.0015421250460101454};
double _pll_lpf_lpf__a_coeff[3] = {1.0, -1.9444723614, 0.9460144864460099};
double _pll_lpf_lpf__a_sum;
double _pll_lpf_lpf__b_sum;
double _pll_lpf_lpf__delay_line_in;
double _pll_pid_integrator1__out;
double _pll_pid_integrator2__out;
double _pll_unit_delay1__out;
double _pll_abc_to_dq_lpf_d__out;
double _pll_abc_to_dq_lpf_d__previous_filtered_value;
double _pll_abc_to_dq_lpf_q__out;
double _pll_abc_to_dq_lpf_q__previous_filtered_value;
double _p_ref__out;
double _q_ref__out;
double _vdc_va1__out;
double _va_va1__out;
double _vb_va1__out;
double _vc_va1__out;
double _dq_to_abc_o_ref__out = 0.0;
double _abc_to_dq_abc_to_dq1_abc_to_alpha_beta__alpha;
double _abc_to_dq_abc_to_dq1_abc_to_alpha_beta__beta;
double _abc_to_dq_abc_to_dq1_abc_to_alpha_beta__gamma;
double _pll_to_hz__out;
double _pll_sin__out;
double _current_ref_squared_vt_product2__out;
double _current_ref_squared_vt_product1__out;
double _pll_normalize__in1;
double _pll_normalize__in2;

double _pll_normalize__in2_pu;
double _pll_normalize__pk;
double _current_ref_product3__out;
double _current_ref_product5__out;
double _current_ref_product4__out;
double _current_ref_product6__out;
double _current_controller_dq_gain5__out;
double _pll_abc_to_dq_abc_to_alpha_beta__alpha;
double _pll_abc_to_dq_abc_to_alpha_beta__beta;
double _pll_abc_to_dq_abc_to_alpha_beta__gamma;
double _s_meas_power_meter1__Pdc;
double _s_meas_power_meter1__Qdc;
double _s_meas_power_meter1__P0dc;
double _s_meas_power_meter1__Pac;
double _s_meas_power_meter1__Qac;
double _s_meas_power_meter1__P0ac;
double _s_meas_power_meter1__apparent;
double _s_meas_power_meter1__k_factor;
double _s_meas_power_meter1__v_alpha;
double _s_meas_power_meter1__v_beta;
double _s_meas_power_meter1__i_alpha;
double _s_meas_power_meter1__i_beta;
double _s_meas_power_meter1__v_zero;
double _s_meas_power_meter1__i_zero;
double _s_meas_power_meter1__filter_1_output;
double _s_meas_power_meter1__filter_1_outputQ;
double _s_meas_power_meter1__filter_1_outputP0;
double _abc_to_dq_abc_to_dq1_alpha_beta_to_dq__d;
double _abc_to_dq_abc_to_dq1_alpha_beta_to_dq__q;
double _abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k1;
double _abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k2;
double _current_ref_squared_vt_sum3__out;
double _pll_pid_kd__out;
double _pll_pid_ki__out;
double _pll_pid_kp__out;
double _current_ref_sum3__out;
double _current_ref_sum4__out;
double _pll_abc_to_dq_alpha_beta_to_dq__d;
double _pll_abc_to_dq_alpha_beta_to_dq__q;
double _pll_abc_to_dq_alpha_beta_to_dq__k1;
double _pll_abc_to_dq_alpha_beta_to_dq__k2;
double _current_controller_dq_gain4__out;
double _current_controller_dq_gain7__out;
double _current_ref_comparator1__out;
double _pll_pid_sum8__out;
double _current_controller_dq_product1__out;
double _current_controller_dq_product6__out;
double _current_ref_signal_switch1__out;
double _pll_pid_gain1__out;
double _current_controller_dq_sum10__out;
double _current_controller_dq_sum13__out;
double _current_ref_mathematical_function1__out;
double _current_ref_product1__out;
double _current_ref_product2__out;
double _pll_pid_sum5__out;
double _current_controller_dq_product5__out;
double _current_controller_dq_product7__out;
double _current_ref_gain1__out;
double _current_ref_gain2__out;
double _pll_pid_limit1__out;
double _current_controller_dq_sum1__out;
double _current_controller_dq_sum2__out;
double _pll_pid_sum6__out;
double _pll_rate_limiter1__out;

double _pll_rate_limiter1__rising_rate_lim[1];
double _pll_rate_limiter1__falling_rate_lim[1];

double _pll_integrator__in;

double _pll_integrator__out;
double _current_controller_dq_pid_controller1__out;
double _current_controller_dq_pid_controller1__pi_reg_out_int;
double _current_controller_dq_pid_controller2__out;
double _current_controller_dq_pid_controller2__pi_reg_out_int;
double _pll_pid_kb__out;
double _current_controller_dq_sum9__out;
double _current_controller_dq_sum12__out;
double _pll_pid_sum7__out;
double _dq_to_abc_dq_to_abc2_dq_to_alpha_beta__alpha;
double _dq_to_abc_dq_to_abc2_dq_to_alpha_beta__beta;
double _dq_to_abc_dq_to_abc2_dq_to_alpha_beta__k1;
double _dq_to_abc_dq_to_abc2_dq_to_alpha_beta__k2;
double _dq_to_abc_dq_to_abc2_alpha_beta_to_abc__A;
double _dq_to_abc_dq_to_abc2_alpha_beta_to_abc__B;
double _dq_to_abc_dq_to_abc2_alpha_beta_to_abc__C;
double _bus_join1__out[3];
double _bus_split1__out;
double _bus_split1__out1;
double _bus_split1__out2;
X_UnInt32 _three_phase_inverter1_phase_a_pwm_modulator__channels[1] = {0};
double _three_phase_inverter1_phase_a_pwm_modulator__limited_in[1];
X_UnInt32 _three_phase_inverter1_phase_a_pwm_modulator__update_mask;

X_UnInt32 _three_phase_inverter1_phase_b_pwm_modulator__channels[1] = {1};
double _three_phase_inverter1_phase_b_pwm_modulator__limited_in[1];
X_UnInt32 _three_phase_inverter1_phase_b_pwm_modulator__update_mask;

X_UnInt32 _three_phase_inverter1_phase_c_pwm_modulator__channels[1] = {2};
double _three_phase_inverter1_phase_c_pwm_modulator__limited_in[1];
X_UnInt32 _three_phase_inverter1_phase_c_pwm_modulator__update_mask;

//@cmp.var.end

//@cmp.svar.start
// state variables
double _pll_lpf_lpf__states[2];
double _pll_pid_integrator1__state;
double _pll_pid_integrator2__state;
double _pll_unit_delay1__state;
double _pll_abc_to_dq_lpf_d__filtered_value;
double _pll_abc_to_dq_lpf_d__previous_in;
double _pll_abc_to_dq_lpf_q__filtered_value;
double _pll_abc_to_dq_lpf_q__previous_in;
double _s_meas_power_meter1__filter_1_output_k_minus_1;
double _s_meas_power_meter1__filter_1_input_k_minus_1;
double _s_meas_power_meter1__filter_1_output_k_minus_1Q;
double _s_meas_power_meter1__filter_1_input_k_minus_1Q;
double _s_meas_power_meter1__filter_1_output_k_minus_1P0;
double _s_meas_power_meter1__filter_1_input_k_minus_1P0;
double _current_ref_comparator1__state;
double _pll_rate_limiter1__state;
X_Int32 _pll_rate_limiter1__first_step;
double _pll_integrator__state;


double _current_controller_dq_pid_controller1__integrator_state;
X_Int32 _current_controller_dq_pid_controller1__av_active;
double _current_controller_dq_pid_controller1__filter_state;
double _current_controller_dq_pid_controller2__integrator_state;
X_Int32 _current_controller_dq_pid_controller2__av_active;
double _current_controller_dq_pid_controller2__filter_state;//@cmp.svar.end

//
// Tunable parameters
//
static struct Tunable_params {
} __attribute__((__packed__)) tunable_params;

void *tunable_params_dev0_cpu0_ptr = &tunable_params;

// Dll function pointers
#if defined(_WIN64)
#else
// Define handles for loading dlls
#endif








// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_user_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif
    //@cmp.init.block.start
    X_UnInt32 _pll_lpf_lpf__i;
    for (_pll_lpf_lpf__i = 0; _pll_lpf_lpf__i < 2; _pll_lpf_lpf__i++) {
        _pll_lpf_lpf__states[_pll_lpf_lpf__i] = 0;
    }
    _pll_pid_integrator1__state = 376.99111843;
    _pll_pid_integrator2__state = 0.0;
    _pll_unit_delay1__state = 0.0;
    _pll_abc_to_dq_lpf_d__filtered_value = 0.0 / (1 - 1.0 * 62.83185307 * 0.00025 );
    _pll_abc_to_dq_lpf_d__previous_in = 0x0;
    _pll_abc_to_dq_lpf_q__filtered_value = 0.0 / (1 - 1.0 * 62.83185307 * 0.00025 );
    _pll_abc_to_dq_lpf_q__previous_in = 0x0;
    HIL_OutAO(0x200a, 0.0f);
    HIL_OutAO(0x200b, 0.0f);
    _s_meas_power_meter1__filter_1_output_k_minus_1 = 0.0;
    _s_meas_power_meter1__filter_1_input_k_minus_1 = 0.0;
    _s_meas_power_meter1__filter_1_output_k_minus_1Q = 0.0;
    _s_meas_power_meter1__filter_1_input_k_minus_1Q = 0.0;
    _s_meas_power_meter1__filter_1_output_k_minus_1P0 = 0.0;
    _s_meas_power_meter1__filter_1_input_k_minus_1P0 = 0.0;
    HIL_OutAO(0x2007, 0.0f);
    HIL_OutAO(0x2008, 0.0f);
    HIL_OutAO(0x2009, 0.0f);
    HIL_OutAO(0x2011, 0.0f);
    HIL_OutAO(0x200e, 0.0f);
    HIL_OutAO(0x200f, 0.0f);
    _current_ref_comparator1__state = 0.0f;
    HIL_OutAO(0x2005, 0.0f);
    HIL_OutAO(0x2006, 0.0f);
    _pll_rate_limiter1__state = 0;
    _pll_rate_limiter1__first_step = 1;
    {
        _pll_integrator__state = 0 ;
    }
    _current_controller_dq_pid_controller1__integrator_state =  0.0;
    _current_controller_dq_pid_controller1__filter_state =  0.0;
    _current_controller_dq_pid_controller2__integrator_state =  0.0;
    _current_controller_dq_pid_controller2__filter_state =  0.0;
    HIL_OutAO(0x200c, 0.0f);
    HIL_OutAO(0x200d, 0.0f);
    _three_phase_inverter1_phase_a_pwm_modulator__update_mask = 1;
    HIL_OutInt32(0x2000080 + _three_phase_inverter1_phase_a_pwm_modulator__channels[0], 20000); // divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _three_phase_inverter1_phase_a_pwm_modulator__channels[0], 80);
    HIL_OutInt32(0x20001c0 + _three_phase_inverter1_phase_a_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _three_phase_inverter1_phase_a_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _three_phase_inverter1_phase_a_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000300 + _three_phase_inverter1_phase_a_pwm_modulator__channels[0], 1);
    HIL_OutInt32(0x2000340 + _three_phase_inverter1_phase_a_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000140, _three_phase_inverter1_phase_a_pwm_modulator__update_mask);
    _three_phase_inverter1_phase_b_pwm_modulator__update_mask = 2;
    HIL_OutInt32(0x2000080 + _three_phase_inverter1_phase_b_pwm_modulator__channels[0], 20000); // divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _three_phase_inverter1_phase_b_pwm_modulator__channels[0], 80);
    HIL_OutInt32(0x20001c0 + _three_phase_inverter1_phase_b_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _three_phase_inverter1_phase_b_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _three_phase_inverter1_phase_b_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000300 + _three_phase_inverter1_phase_b_pwm_modulator__channels[0], 1);
    HIL_OutInt32(0x2000340 + _three_phase_inverter1_phase_b_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000140, _three_phase_inverter1_phase_b_pwm_modulator__update_mask);
    _three_phase_inverter1_phase_c_pwm_modulator__update_mask = 4;
    HIL_OutInt32(0x2000080 + _three_phase_inverter1_phase_c_pwm_modulator__channels[0], 20000); // divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _three_phase_inverter1_phase_c_pwm_modulator__channels[0], 80);
    HIL_OutInt32(0x20001c0 + _three_phase_inverter1_phase_c_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _three_phase_inverter1_phase_c_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _three_phase_inverter1_phase_c_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000300 + _three_phase_inverter1_phase_c_pwm_modulator__channels[0], 1);
    HIL_OutInt32(0x2000340 + _three_phase_inverter1_phase_c_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000140, _three_phase_inverter1_phase_c_pwm_modulator__update_mask);
    HIL_OutAO(0x2010, 0.0f);
    //@cmp.init.block.end
}


// Dll function pointers and dll reload function
#if defined(_WIN64)
// Define method for reloading dll functions
void ReloadDllFunctions_user_sp_cpu0_dev0(void) {
    // Load each library and setup function pointers
}

void FreeDllFunctions_user_sp_cpu0_dev0(void) {
}

#else
// Define method for reloading dll functions
void ReloadDllFunctions_user_sp_cpu0_dev0(void) {
    // Load each library and setup function pointers
}

void FreeDllFunctions_user_sp_cpu0_dev0(void) {
}
#endif

void load_fmi_libraries_user_sp_cpu0_dev0(void) {
#if defined(_WIN64)
#else
#endif
}


void ReInit_sp_scope_user_sp_cpu0_dev0() {
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

void TimerCounterHandler_0_user_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_0");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Set tunable parameters
    //////////////////////////////////////////////////////////////////////////
    // Generated from the component: C
    // Generated from the component: Current_ref.Limit_zero
    // Generated from the component: Current_ref.one
    // Generated from the component: dq to abc.o_ref
//////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: Current controller dq.decouple enable
    _current_controller_dq_decouple_enable__out = XIo_InFloat(0x55000128);
    // Generated from the component: Ia.Ia1
    _ia_ia1__out = (HIL_InFloat(0xc80000 + 0x12));
    // Generated from the component: Ib.Ia1
    _ib_ia1__out = (HIL_InFloat(0xc80000 + 0x13));
    // Generated from the component: Ic.Ia1
    _ic_ia1__out = (HIL_InFloat(0xc80000 + 0x14));
    // Generated from the component: PLL.LPF.LPF
    X_UnInt32 _pll_lpf_lpf__i;
    _pll_lpf_lpf__a_sum = 0.0f;
    _pll_lpf_lpf__b_sum = 0.0f;
    _pll_lpf_lpf__delay_line_in = 0.0f;
    for (_pll_lpf_lpf__i = 0; _pll_lpf_lpf__i < 2; _pll_lpf_lpf__i++) {
        _pll_lpf_lpf__b_sum += _pll_lpf_lpf__b_coeff[_pll_lpf_lpf__i] * _pll_lpf_lpf__states[_pll_lpf_lpf__i + 0];
    }
    _pll_lpf_lpf__out = _pll_lpf_lpf__b_sum;
    // Generated from the component: PLL.PID.Integrator1
    _pll_pid_integrator1__out = _pll_pid_integrator1__state;
    // Generated from the component: PLL.PID.Integrator2
    _pll_pid_integrator2__out = _pll_pid_integrator2__state;
    // Generated from the component: PLL.Unit Delay1
    _pll_unit_delay1__out = _pll_unit_delay1__state;
    // Generated from the component: PLL.abc to dq.LPF_d
    _pll_abc_to_dq_lpf_d__previous_filtered_value = _pll_abc_to_dq_lpf_d__filtered_value;
    _pll_abc_to_dq_lpf_d__filtered_value = _pll_abc_to_dq_lpf_d__previous_in * (1 * 62.83185307 * 0.00025) + _pll_abc_to_dq_lpf_d__previous_filtered_value * (1 - 1 * 62.83185307 * 0.00025 );
    _pll_abc_to_dq_lpf_d__out = _pll_abc_to_dq_lpf_d__filtered_value;
    // Generated from the component: PLL.abc to dq.LPF_q
    _pll_abc_to_dq_lpf_q__previous_filtered_value = _pll_abc_to_dq_lpf_q__filtered_value;
    _pll_abc_to_dq_lpf_q__filtered_value = _pll_abc_to_dq_lpf_q__previous_in * (1 * 62.83185307 * 0.00025) + _pll_abc_to_dq_lpf_q__previous_filtered_value * (1 - 1 * 62.83185307 * 0.00025 );
    _pll_abc_to_dq_lpf_q__out = _pll_abc_to_dq_lpf_q__filtered_value;
    // Generated from the component: P_ref
    _p_ref__out = XIo_InFloat(0x5500012c);
    // Generated from the component: Q_ref
    _q_ref__out = XIo_InFloat(0x55000130);
    // Generated from the component: VDC.Va1
    _vdc_va1__out = (HIL_InFloat(0xc80000 + 0xa));
    // Generated from the component: Va.Va1
    _va_va1__out = (HIL_InFloat(0xc80000 + 0xb));
    // Generated from the component: Vb.Va1
    _vb_va1__out = (HIL_InFloat(0xc80000 + 0xe));
    // Generated from the component: Vc.Va1
    _vc_va1__out = (HIL_InFloat(0xc80000 + 0x11));
    // Generated from the component: Three Phase Inverter1.Phase A.IGBT Leg global gds ovs.termination1
    // Generated from the component: Three Phase Inverter1.Phase B.IGBT Leg global gds ovs.termination1
    // Generated from the component: Three Phase Inverter1.Phase C.IGBT Leg global gds ovs.termination1
    // Generated from the component: abc to dq.abc to dq1.abc to alpha beta
    _abc_to_dq_abc_to_dq1_abc_to_alpha_beta__alpha = (2.0 * _ia_ia1__out - _ib_ia1__out - _ic_ia1__out) * 0.3333333333333333;
    _abc_to_dq_abc_to_dq1_abc_to_alpha_beta__beta = (_ib_ia1__out - _ic_ia1__out) * 0.5773502691896258;
    _abc_to_dq_abc_to_dq1_abc_to_alpha_beta__gamma = (_ia_ia1__out + _ib_ia1__out + _ic_ia1__out) * 0.3333333333333333;
    // Generated from the component: PLL.to_Hz
    _pll_to_hz__out = 0.15915494309189535 * _pll_lpf_lpf__out;
    // Generated from the component: PLL.sin
    _pll_sin__out = sin(_pll_unit_delay1__out);
    // Generated from the component: Current_ref.squared_Vt.Product2
    _current_ref_squared_vt_product2__out = (_pll_abc_to_dq_lpf_d__out * _pll_abc_to_dq_lpf_d__out);
    // Generated from the component: Vd
    HIL_OutAO(0x200a, (float)_pll_abc_to_dq_lpf_d__out);
    // Generated from the component: Current_ref.squared_Vt.Product1
    _current_ref_squared_vt_product1__out = (_pll_abc_to_dq_lpf_q__out * _pll_abc_to_dq_lpf_q__out);
    // Generated from the component: PLL.normalize
    _pll_normalize__in1 = _pll_abc_to_dq_lpf_d__out;
    _pll_normalize__in2 = _pll_abc_to_dq_lpf_q__out;
    {
        _pll_normalize__pk = ( powf ( _pll_normalize__in1 , 2.0 ) + powf ( _pll_normalize__in2 , 2.0 ) ) ;
        _pll_normalize__pk = sqrt ( _pll_normalize__pk ) ;
        if ( _pll_normalize__pk < 0.1 )     {
            _pll_normalize__in2_pu = _pll_normalize__in2 / 0.1 ;
        }
        else     {
            _pll_normalize__in2_pu = _pll_normalize__in2 / _pll_normalize__pk ;
        }
    }
    // Generated from the component: Vq
    HIL_OutAO(0x200b, (float)_pll_abc_to_dq_lpf_q__out);
    // Generated from the component: Current_ref.Product3
    _current_ref_product3__out = (_pll_abc_to_dq_lpf_d__out * _p_ref__out);
    // Generated from the component: Current_ref.Product5
    _current_ref_product5__out = (_p_ref__out * _pll_abc_to_dq_lpf_q__out);
    // Generated from the component: Current_ref.Product4
    _current_ref_product4__out = (_pll_abc_to_dq_lpf_q__out * _q_ref__out);
    // Generated from the component: Current_ref.Product6
    _current_ref_product6__out = (_q_ref__out * _pll_abc_to_dq_lpf_d__out);
    // Generated from the component: Current controller dq.Gain5
    _current_controller_dq_gain5__out = 0.5 * _vdc_va1__out;
    // Generated from the component: PLL.abc to dq.abc to alpha beta
    _pll_abc_to_dq_abc_to_alpha_beta__alpha = (2.0 * _va_va1__out - _vb_va1__out - _vc_va1__out) * 0.3333333333333333;
    _pll_abc_to_dq_abc_to_alpha_beta__beta = (_vb_va1__out - _vc_va1__out) * 0.5773502691896258;
    _pll_abc_to_dq_abc_to_alpha_beta__gamma = (_va_va1__out + _vb_va1__out + _vc_va1__out) * 0.3333333333333333;
    // Generated from the component: S_meas.Power Meter1
    _s_meas_power_meter1__v_alpha = SQRT_2OVER3 * ( _va_va1__out - 0.5f * _vb_va1__out - 0.5f * _vc_va1__out);
    _s_meas_power_meter1__v_beta = SQRT_2OVER3 * (SQRT3_OVER_2 * _vb_va1__out - SQRT3_OVER_2 * _vc_va1__out);
    _s_meas_power_meter1__i_alpha = SQRT_2OVER3 * ( _ia_ia1__out - 0.5f * _ib_ia1__out - 0.5f * _ic_ia1__out);
    _s_meas_power_meter1__i_beta = SQRT_2OVER3 * (SQRT3_OVER_2 * _ib_ia1__out - SQRT3_OVER_2 * _ic_ia1__out);
    _s_meas_power_meter1__v_zero = ONE_DIV_BY_SQRT_3 * (_va_va1__out + _vb_va1__out + _vc_va1__out);
    _s_meas_power_meter1__i_zero = ONE_DIV_BY_SQRT_3 * (_ia_ia1__out + _ib_ia1__out + _ic_ia1__out);
    _s_meas_power_meter1__Pac = _s_meas_power_meter1__v_alpha * _s_meas_power_meter1__i_alpha + _s_meas_power_meter1__v_beta * _s_meas_power_meter1__i_beta;
    _s_meas_power_meter1__Qac = _s_meas_power_meter1__v_beta * _s_meas_power_meter1__i_alpha - _s_meas_power_meter1__v_alpha * _s_meas_power_meter1__i_beta;
    _s_meas_power_meter1__P0ac = _s_meas_power_meter1__v_zero * _s_meas_power_meter1__i_zero;
    _s_meas_power_meter1__filter_1_output = 0.02301955931370732 * (_s_meas_power_meter1__Pac + _s_meas_power_meter1__filter_1_input_k_minus_1) - (-0.9539608813725854) * _s_meas_power_meter1__filter_1_output_k_minus_1;
    _s_meas_power_meter1__filter_1_outputQ = 0.02301955931370732 * (_s_meas_power_meter1__Qac + _s_meas_power_meter1__filter_1_input_k_minus_1Q) - (-0.9539608813725854) * _s_meas_power_meter1__filter_1_output_k_minus_1Q;
    _s_meas_power_meter1__filter_1_outputP0 = 0.02301955931370732 * (_s_meas_power_meter1__P0ac + _s_meas_power_meter1__filter_1_input_k_minus_1P0) - (-0.9539608813725854) * _s_meas_power_meter1__filter_1_output_k_minus_1P0;
    _s_meas_power_meter1__filter_1_input_k_minus_1 = _s_meas_power_meter1__Pac;
    _s_meas_power_meter1__filter_1_output_k_minus_1 = _s_meas_power_meter1__filter_1_output;
    _s_meas_power_meter1__filter_1_input_k_minus_1Q = _s_meas_power_meter1__Qac;;
    _s_meas_power_meter1__filter_1_output_k_minus_1Q = _s_meas_power_meter1__filter_1_outputQ;
    _s_meas_power_meter1__filter_1_input_k_minus_1P0 = _s_meas_power_meter1__P0ac;
    _s_meas_power_meter1__filter_1_output_k_minus_1P0 = _s_meas_power_meter1__filter_1_outputP0;
    _s_meas_power_meter1__Pdc = _s_meas_power_meter1__filter_1_output;
    _s_meas_power_meter1__Qdc = _s_meas_power_meter1__filter_1_outputQ;
    _s_meas_power_meter1__P0dc = _s_meas_power_meter1__filter_1_outputP0;
    _s_meas_power_meter1__apparent = sqrt(pow(_s_meas_power_meter1__Pdc, 2) + pow(_s_meas_power_meter1__Qdc, 2));
    if (_s_meas_power_meter1__apparent > 0)
        _s_meas_power_meter1__k_factor = _s_meas_power_meter1__Pdc / _s_meas_power_meter1__apparent;
    else
        _s_meas_power_meter1__k_factor = 0;
    // Generated from the component: abc to dq.abc to dq1.alpha beta to dq
    _abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k1 = cos(_pll_unit_delay1__out);
    _abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k2 = sin(_pll_unit_delay1__out);
    _abc_to_dq_abc_to_dq1_alpha_beta_to_dq__d = _abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k2 * _abc_to_dq_abc_to_dq1_abc_to_alpha_beta__alpha - _abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k1 * _abc_to_dq_abc_to_dq1_abc_to_alpha_beta__beta;
    _abc_to_dq_abc_to_dq1_alpha_beta_to_dq__q = _abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k1 * _abc_to_dq_abc_to_dq1_abc_to_alpha_beta__alpha + _abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k2 * _abc_to_dq_abc_to_dq1_abc_to_alpha_beta__beta;
    // Generated from the component: t1
    // Generated from the component: Termination1
    // Generated from the component: Current_ref.squared_Vt.Sum3
    _current_ref_squared_vt_sum3__out = _current_ref_squared_vt_product1__out + _current_ref_squared_vt_product2__out;
    // Generated from the component: PLL.PID.Kd
    _pll_pid_kd__out = 1.0 * _pll_normalize__in2_pu;
    // Generated from the component: PLL.PID.Ki
    _pll_pid_ki__out = 3200.0 * _pll_normalize__in2_pu;
    // Generated from the component: PLL.PID.Kp
    _pll_pid_kp__out = 100.0 * _pll_normalize__in2_pu;
    // Generated from the component: PLL.term_pk
    // Generated from the component: Current_ref.Sum3
    _current_ref_sum3__out = _current_ref_product3__out - _current_ref_product4__out;
    // Generated from the component: Current_ref.Sum4
    _current_ref_sum4__out = _current_ref_product5__out + _current_ref_product6__out;
    // Generated from the component: PLL.abc to dq.alpha beta to dq
    _pll_abc_to_dq_alpha_beta_to_dq__k1 = cos(_pll_unit_delay1__out);
    _pll_abc_to_dq_alpha_beta_to_dq__k2 = sin(_pll_unit_delay1__out);
    _pll_abc_to_dq_alpha_beta_to_dq__d = _pll_abc_to_dq_alpha_beta_to_dq__k2 * _pll_abc_to_dq_abc_to_alpha_beta__alpha - _pll_abc_to_dq_alpha_beta_to_dq__k1 * _pll_abc_to_dq_abc_to_alpha_beta__beta;
    _pll_abc_to_dq_alpha_beta_to_dq__q = _pll_abc_to_dq_alpha_beta_to_dq__k1 * _pll_abc_to_dq_abc_to_alpha_beta__alpha + _pll_abc_to_dq_alpha_beta_to_dq__k2 * _pll_abc_to_dq_abc_to_alpha_beta__beta;
    // Generated from the component: Termination2
    // Generated from the component: P
    HIL_OutAO(0x2007, (float)_s_meas_power_meter1__Pdc);
    // Generated from the component: Q
    HIL_OutAO(0x2008, (float)_s_meas_power_meter1__Qdc);
    // Generated from the component: S
    HIL_OutAO(0x2009, (float)_s_meas_power_meter1__apparent);
    // Generated from the component: S_meas.Termination1
    // Generated from the component: S_meas.Termination2
    // Generated from the component: pf
    HIL_OutAO(0x2011, (float)_s_meas_power_meter1__k_factor);
    // Generated from the component: Current controller dq.Gain4
    _current_controller_dq_gain4__out = 0.018840000000000003 * _abc_to_dq_abc_to_dq1_alpha_beta_to_dq__q;
    // Generated from the component: Current controller dq.Gain7
    _current_controller_dq_gain7__out = 0.018840000000000003 * _abc_to_dq_abc_to_dq1_alpha_beta_to_dq__d;
    // Generated from the component: id
    HIL_OutAO(0x200e, (float)_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__d);
    // Generated from the component: iq
    HIL_OutAO(0x200f, (float)_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__q);
    // Generated from the component: Current_ref.Comparator1
    if (_current_ref_squared_vt_sum3__out < _current_ref_limit_zero__out) {
        _current_ref_comparator1__out = 0;
    } else if (_current_ref_squared_vt_sum3__out > _current_ref_limit_zero__out) {
        _current_ref_comparator1__out = 1;
    } else {
        _current_ref_comparator1__out = _current_ref_comparator1__state;
    }
    // Generated from the component: Current_ref.Et_sqr
    HIL_OutAO(0x2005, (float)_current_ref_squared_vt_sum3__out);
    // Generated from the component: PLL.PID.Sum8
    _pll_pid_sum8__out = _pll_pid_kd__out - _pll_pid_integrator2__out;
    // Generated from the component: Current controller dq.Product1
    _current_controller_dq_product1__out = (_pll_to_hz__out * _current_controller_dq_gain4__out);
    // Generated from the component: Current controller dq.Product6
    _current_controller_dq_product6__out = (_current_controller_dq_gain7__out * _pll_to_hz__out);
    // Generated from the component: Current_ref.Signal switch1
    _current_ref_signal_switch1__out = (_current_ref_comparator1__out < 0.5f) ? _current_ref_one__out : _current_ref_squared_vt_sum3__out;
    // Generated from the component: PLL.PID.Gain1
    _pll_pid_gain1__out = 714.2857 * _pll_pid_sum8__out;
    // Generated from the component: Current controller dq.Sum10
    _current_controller_dq_sum10__out = _pll_abc_to_dq_lpf_d__out - _current_controller_dq_product1__out;
    // Generated from the component: Current controller dq.Sum13
    _current_controller_dq_sum13__out = _current_controller_dq_product6__out + _pll_abc_to_dq_lpf_q__out;
    // Generated from the component: Current_ref.Et_sqr_res
    HIL_OutAO(0x2006, (float)_current_ref_signal_switch1__out);
    // Generated from the component: Current_ref.Mathematical function1
    _current_ref_mathematical_function1__out = sqrt(_current_ref_signal_switch1__out);
    // Generated from the component: Current_ref.Product1
    _current_ref_product1__out = (_current_ref_sum3__out) * 1.0 / (_current_ref_signal_switch1__out);
    // Generated from the component: Current_ref.Product2
    _current_ref_product2__out = (_current_ref_sum4__out) * 1.0 / (_current_ref_signal_switch1__out);
    // Generated from the component: PLL.PID.Sum5
    _pll_pid_sum5__out = _pll_pid_kp__out + _pll_pid_gain1__out + _pll_pid_integrator1__out;
    // Generated from the component: Current controller dq.Product5
    _current_controller_dq_product5__out = (_current_controller_dq_sum10__out * _current_controller_dq_decouple_enable__out) * 1.0 / (_current_controller_dq_gain5__out);
    // Generated from the component: Current controller dq.Product7
    _current_controller_dq_product7__out = (_current_controller_dq_sum13__out * _current_controller_dq_decouple_enable__out) * 1.0 / (_current_controller_dq_gain5__out);
    // Generated from the component: t
    // Generated from the component: Current_ref.Gain1
    _current_ref_gain1__out = 0.6666666666666666 * _current_ref_product1__out;
    // Generated from the component: Current_ref.Gain2
    _current_ref_gain2__out = -0.6666666666666666 * _current_ref_product2__out;
    // Generated from the component: PLL.PID.Limit1
    _pll_pid_limit1__out = MIN(MAX(_pll_pid_sum5__out, -10000.0), 10000.0);
    // Generated from the component: Current controller dq.Sum1
    _current_controller_dq_sum1__out =  - _abc_to_dq_abc_to_dq1_alpha_beta_to_dq__d + _current_ref_gain1__out;
    // Generated from the component: Current controller dq.Sum2
    _current_controller_dq_sum2__out =  - _abc_to_dq_abc_to_dq1_alpha_beta_to_dq__q + _current_ref_gain2__out;
    // Generated from the component: PLL.PID.Sum6
    _pll_pid_sum6__out =  - _pll_pid_sum5__out + _pll_pid_limit1__out;
    // Generated from the component: PLL.Rate Limiter1
    _pll_rate_limiter1__rising_rate_lim[0] = 75.39822368615503 * 0.00025;
    _pll_rate_limiter1__falling_rate_lim[0] = -75.39822368615503 * 0.00025;
    if (_pll_rate_limiter1__first_step) {
        _pll_rate_limiter1__out = _pll_pid_limit1__out;
        _pll_rate_limiter1__state = _pll_pid_limit1__out;
    } else {
        _pll_rate_limiter1__out = _pll_pid_limit1__out;
        if (_pll_pid_limit1__out - _pll_rate_limiter1__state > _pll_rate_limiter1__rising_rate_lim[0])
            _pll_rate_limiter1__out = _pll_rate_limiter1__state + (_pll_rate_limiter1__rising_rate_lim[0]);
        if (_pll_pid_limit1__out - _pll_rate_limiter1__state < _pll_rate_limiter1__falling_rate_lim[0])
            _pll_rate_limiter1__out = _pll_rate_limiter1__state + (_pll_rate_limiter1__falling_rate_lim[0]);
    }
    // Generated from the component: PLL.integrator
    _pll_integrator__in = _pll_pid_limit1__out;
    {
        _pll_integrator__state += 0.00025 * _pll_integrator__in ;
        if ( _pll_integrator__in >= 0.0 )     {
            if ( _pll_integrator__state >= 6.283185307179586 )         {
                _pll_integrator__state -= 6.283185307179586 ;
            }
        }
        else     {
            if ( _pll_integrator__state <= - 6.283185307179586 )         {
                _pll_integrator__state += 6.283185307179586 ;
            }
        }
        _pll_integrator__out = _pll_integrator__state ;
    }
    // Generated from the component: Current controller dq.PID controller1
    _current_controller_dq_pid_controller1__pi_reg_out_int = _current_controller_dq_pid_controller1__integrator_state + 0.018 * _current_controller_dq_sum1__out;
    if (_current_controller_dq_pid_controller1__pi_reg_out_int < -1.0)
        _current_controller_dq_pid_controller1__av_active = -1;
    else if (_current_controller_dq_pid_controller1__pi_reg_out_int > 1.0)
        _current_controller_dq_pid_controller1__av_active = 1;
    else
        _current_controller_dq_pid_controller1__av_active = 0;
    _current_controller_dq_pid_controller1__out = MIN(MAX(_current_controller_dq_pid_controller1__pi_reg_out_int, -1.0), 1.0);
    // Generated from the component: Current controller dq.PID controller2
    _current_controller_dq_pid_controller2__pi_reg_out_int = _current_controller_dq_pid_controller2__integrator_state + 0.018 * _current_controller_dq_sum2__out;
    if (_current_controller_dq_pid_controller2__pi_reg_out_int < -1.0)
        _current_controller_dq_pid_controller2__av_active = -1;
    else if (_current_controller_dq_pid_controller2__pi_reg_out_int > 1.0)
        _current_controller_dq_pid_controller2__av_active = 1;
    else
        _current_controller_dq_pid_controller2__av_active = 0;
    _current_controller_dq_pid_controller2__out = MIN(MAX(_current_controller_dq_pid_controller2__pi_reg_out_int, -1.0), 1.0);
    // Generated from the component: PLL.PID.Kb
    _pll_pid_kb__out = 1.0 * _pll_pid_sum6__out;
    // Generated from the component: Current controller dq.Sum9
    _current_controller_dq_sum9__out = _current_controller_dq_pid_controller1__out + _current_controller_dq_product5__out;
    // Generated from the component: Current controller dq.Sum12
    _current_controller_dq_sum12__out = _current_controller_dq_product7__out + _current_controller_dq_pid_controller2__out;
    // Generated from the component: PLL.PID.Sum7
    _pll_pid_sum7__out = _pll_pid_ki__out + _pll_pid_kb__out;
    // Generated from the component: dq to abc.d_controller_output
    HIL_OutAO(0x200c, (float)_current_controller_dq_sum9__out);
    // Generated from the component: dq to abc.dq to abc2.dq to alpha beta
    _dq_to_abc_dq_to_abc2_dq_to_alpha_beta__k1 = cos(_pll_unit_delay1__out);
    _dq_to_abc_dq_to_abc2_dq_to_alpha_beta__k2 = sin(_pll_unit_delay1__out);
    _dq_to_abc_dq_to_abc2_dq_to_alpha_beta__alpha = _dq_to_abc_dq_to_abc2_dq_to_alpha_beta__k2 * _current_controller_dq_sum9__out + _dq_to_abc_dq_to_abc2_dq_to_alpha_beta__k1 * _current_controller_dq_sum12__out;
    _dq_to_abc_dq_to_abc2_dq_to_alpha_beta__beta = _dq_to_abc_dq_to_abc2_dq_to_alpha_beta__k2 * _current_controller_dq_sum12__out - _dq_to_abc_dq_to_abc2_dq_to_alpha_beta__k1 * _current_controller_dq_sum9__out;
    // Generated from the component: dq to abc.q_controller_output
    HIL_OutAO(0x200d, (float)_current_controller_dq_sum12__out);
    // Generated from the component: dq to abc.dq to abc2.alpha beta to abc
    _dq_to_abc_dq_to_abc2_alpha_beta_to_abc__A = 1 * _dq_to_abc_o_ref__out;
    _dq_to_abc_dq_to_abc2_alpha_beta_to_abc__B = _dq_to_abc_dq_to_abc2_alpha_beta_to_abc__A - 0.5 * _dq_to_abc_dq_to_abc2_dq_to_alpha_beta__alpha;
    _dq_to_abc_dq_to_abc2_alpha_beta_to_abc__C = _dq_to_abc_dq_to_abc2_alpha_beta_to_abc__B - 0.8660254037844386 * _dq_to_abc_dq_to_abc2_dq_to_alpha_beta__beta;
    _dq_to_abc_dq_to_abc2_alpha_beta_to_abc__B += 0.8660254037844386 * _dq_to_abc_dq_to_abc2_dq_to_alpha_beta__beta;
    _dq_to_abc_dq_to_abc2_alpha_beta_to_abc__A += 1 * _dq_to_abc_dq_to_abc2_dq_to_alpha_beta__alpha;
    // Generated from the component: Bus Join1
    _bus_join1__out[0] = _dq_to_abc_dq_to_abc2_alpha_beta_to_abc__A;
    _bus_join1__out[1] = _dq_to_abc_dq_to_abc2_alpha_beta_to_abc__B;
    _bus_join1__out[2] = _dq_to_abc_dq_to_abc2_alpha_beta_to_abc__C;
    // Generated from the component: Bus Split1
    _bus_split1__out = _bus_join1__out[0];
    _bus_split1__out1 = _bus_join1__out[1];
    _bus_split1__out2 = _bus_join1__out[2];
    // Generated from the component: Three Phase Inverter1.Phase A.PWM_Modulator
    _three_phase_inverter1_phase_a_pwm_modulator__limited_in[0] = MIN(MAX(_bus_split1__out, -1.0), 1.0);
    HIL_OutInt32(0x2000040 + _three_phase_inverter1_phase_a_pwm_modulator__channels[0], ((X_UnInt32)((_three_phase_inverter1_phase_a_pwm_modulator__limited_in[0] - (-1.0)) * 10000.0)));
    if (_c__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _three_phase_inverter1_phase_a_pwm_modulator__channels[0], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _three_phase_inverter1_phase_a_pwm_modulator__channels[0], 0x1);
    }
    HIL_OutInt32(0x2000140, _three_phase_inverter1_phase_a_pwm_modulator__update_mask);
    // Generated from the component: Three Phase Inverter1.Phase B.PWM_Modulator
    _three_phase_inverter1_phase_b_pwm_modulator__limited_in[0] = MIN(MAX(_bus_split1__out1, -1.0), 1.0);
    HIL_OutInt32(0x2000040 + _three_phase_inverter1_phase_b_pwm_modulator__channels[0], ((X_UnInt32)((_three_phase_inverter1_phase_b_pwm_modulator__limited_in[0] - (-1.0)) * 10000.0)));
    if (_c__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _three_phase_inverter1_phase_b_pwm_modulator__channels[0], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _three_phase_inverter1_phase_b_pwm_modulator__channels[0], 0x1);
    }
    HIL_OutInt32(0x2000140, _three_phase_inverter1_phase_b_pwm_modulator__update_mask);
    // Generated from the component: Three Phase Inverter1.Phase C.PWM_Modulator
    _three_phase_inverter1_phase_c_pwm_modulator__limited_in[0] = MIN(MAX(_bus_split1__out2, -1.0), 1.0);
    HIL_OutInt32(0x2000040 + _three_phase_inverter1_phase_c_pwm_modulator__channels[0], ((X_UnInt32)((_three_phase_inverter1_phase_c_pwm_modulator__limited_in[0] - (-1.0)) * 10000.0)));
    if (_c__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _three_phase_inverter1_phase_c_pwm_modulator__channels[0], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _three_phase_inverter1_phase_c_pwm_modulator__channels[0], 0x1);
    }
    HIL_OutInt32(0x2000140, _three_phase_inverter1_phase_c_pwm_modulator__update_mask);
    // Generated from the component: m_a
    HIL_OutAO(0x2010, (float)_bus_split1__out);
//@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: PLL.LPF.LPF
    for (_pll_lpf_lpf__i = 1; _pll_lpf_lpf__i > 0; _pll_lpf_lpf__i--) {
        _pll_lpf_lpf__a_sum += _pll_lpf_lpf__a_coeff[_pll_lpf_lpf__i + 1] * _pll_lpf_lpf__states[_pll_lpf_lpf__i];
    }
    _pll_lpf_lpf__a_sum += _pll_lpf_lpf__states[0] * _pll_lpf_lpf__a_coeff[1];
    _pll_lpf_lpf__delay_line_in = _pll_rate_limiter1__out - _pll_lpf_lpf__a_sum;
    for (_pll_lpf_lpf__i = 1; _pll_lpf_lpf__i > 0; _pll_lpf_lpf__i--) {
        _pll_lpf_lpf__states[_pll_lpf_lpf__i] = _pll_lpf_lpf__states[_pll_lpf_lpf__i - 1];
    }
    _pll_lpf_lpf__states[0] = _pll_lpf_lpf__delay_line_in;
    // Generated from the component: PLL.PID.Integrator1
    _pll_pid_integrator1__state += _pll_pid_sum7__out * 0.00025;
    // Generated from the component: PLL.PID.Integrator2
    _pll_pid_integrator2__state += _pll_pid_gain1__out * 0.00025;
    // Generated from the component: PLL.Unit Delay1
    _pll_unit_delay1__state = _pll_integrator__out;
    // Generated from the component: PLL.abc to dq.LPF_d
    _pll_abc_to_dq_lpf_d__previous_in = _pll_abc_to_dq_alpha_beta_to_dq__d;
    // Generated from the component: PLL.abc to dq.LPF_q
    _pll_abc_to_dq_lpf_q__previous_in = _pll_abc_to_dq_alpha_beta_to_dq__q;
    // Generated from the component: PLL.normalize
    // Generated from the component: Current_ref.Comparator1
    if (_current_ref_squared_vt_sum3__out < _current_ref_limit_zero__out) {
        _current_ref_comparator1__state = 0;
    } else if (_current_ref_squared_vt_sum3__out > _current_ref_limit_zero__out) {
        _current_ref_comparator1__state = 1;
    }
    // Generated from the component: PLL.Rate Limiter1
    _pll_rate_limiter1__rising_rate_lim[0] = 75.39822368615503 * 0.00025;
    _pll_rate_limiter1__falling_rate_lim[0] = -75.39822368615503 * 0.00025;
    if (_pll_pid_limit1__out - _pll_rate_limiter1__state > _pll_rate_limiter1__rising_rate_lim[0])
        _pll_rate_limiter1__state += _pll_rate_limiter1__rising_rate_lim[0];
    else  if (_pll_pid_limit1__out - _pll_rate_limiter1__state < _pll_rate_limiter1__falling_rate_lim[0])
        _pll_rate_limiter1__state += (_pll_rate_limiter1__falling_rate_lim[0]);
    else
        _pll_rate_limiter1__state = _pll_pid_limit1__out;
    _pll_rate_limiter1__first_step = 0;
    // Generated from the component: PLL.integrator
    // Generated from the component: Current controller dq.PID controller1
    if (!_current_controller_dq_pid_controller1__av_active || ((_current_controller_dq_pid_controller1__av_active < 0 && _current_controller_dq_sum1__out > 0 ) || (_current_controller_dq_pid_controller1__av_active > 0 && _current_controller_dq_sum1__out < 0 ))) {
        _current_controller_dq_pid_controller1__integrator_state += 1.0 * _current_controller_dq_sum1__out * 0.00025;
    }
    // Generated from the component: Current controller dq.PID controller2
    if (!_current_controller_dq_pid_controller2__av_active || ((_current_controller_dq_pid_controller2__av_active < 0 && _current_controller_dq_sum2__out > 0 ) || (_current_controller_dq_pid_controller2__av_active > 0 && _current_controller_dq_sum2__out < 0 ))) {
        _current_controller_dq_pid_controller2__integrator_state += 1.0 * _current_controller_dq_sum2__out * 0.00025;
    }
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------