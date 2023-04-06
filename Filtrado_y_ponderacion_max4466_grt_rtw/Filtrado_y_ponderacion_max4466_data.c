/*
 * Filtrado_y_ponderacion_max4466_data.c
 *
 * Code generation for model "Filtrado_y_ponderacion_max4466".
 *
 * Model version              : 1.15
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Mon Apr  3 17:36:51 2023
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objective: Debugging
 * Validation result: Not run
 */

#include "Filtrado_y_ponderacion_max4466.h"
#include "Filtrado_y_ponderacion_max4466_private.h"

/* Block parameters (default storage) */
P_Filtrado_y_ponderacion_max4_T Filtrado_y_ponderacion_max446_P = {
  /* Computed Parameter: DiscreteTimeIntegrator_gainval
   * Referenced by: '<Root>/Discrete-Time Integrator'
   */
  177.70927891156464,

  /* Expression: 0
   * Referenced by: '<Root>/Discrete-Time Integrator'
   */
  0.0,

  /* Expression: 12.13
   * Referenced by: '<Root>/Ganancia Vref'
   */
  12.13,

  /* Expression: 1e-6
   * Referenced by: '<S2>/Constant'
   */
  1.0E-6,

  /* Expression: 0.08244
   * Referenced by: '<Root>/Gain2'
   */
  0.08244,

  /* Expression: SampleRate
   * Referenced by: '<Root>/Audio Device Reader'
   */
  44100.0,

  /* Expression: 999999
   * Referenced by: '<Root>/Saturation'
   */
  999999.0,

  /* Expression: 0
   * Referenced by: '<Root>/Saturation'
   */
  0.0,

  /* Expression: 56.818
   * Referenced by: '<Root>/Resitencia Fast'
   */
  56.818
};
