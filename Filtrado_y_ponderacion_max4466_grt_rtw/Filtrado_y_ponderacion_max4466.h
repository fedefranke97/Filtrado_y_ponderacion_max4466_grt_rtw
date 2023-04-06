/*
 * Filtrado_y_ponderacion_max4466.h
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

#ifndef RTW_HEADER_Filtrado_y_ponderacion_max4466_h_
#define RTW_HEADER_Filtrado_y_ponderacion_max4466_h_
#include <math.h>
#include <float.h>
#include <string.h>
#include <stddef.h>
#ifndef Filtrado_y_ponderacion_max4466_COMMON_INCLUDES_
#define Filtrado_y_ponderacion_max4466_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#include "HostLib_Audio.h"
#endif                     /* Filtrado_y_ponderacion_max4466_COMMON_INCLUDES_ */

#include "Filtrado_y_ponderacion_max4466_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWLogInfo
#define rtmGetRTWLogInfo(rtm)          ((rtm)->rtwLogInfo)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                (&(rtm)->Timing.taskTime0)
#endif

#define Filtrado_y_ponderacion_max4466_M (Filtrado_y_ponderacion_max44_M)

/* Block signals (default storage) */
typedef struct {
  real_T DiscreteTimeIntegrator[1024]; /* '<Root>/Discrete-Time Integrator' */
  real_T GananciaVref[1024];           /* '<Root>/Ganancia Vref' */
  real_T Max[1024];                    /* '<S2>/Max' */
  real_T Log[1024];                    /* '<Root>/Log' */
  real_T AudioDeviceReader[1024];      /* '<Root>/Audio Device Reader' */
  real_T GeneratedFilterBlock[1024];   /* '<S1>/Generated Filter Block' */
  real_T Saturation[1024];             /* '<Root>/Saturation' */
  real_T ResitenciaFast[1024];         /* '<Root>/Resitencia Fast' */
} B_Filtrado_y_ponderacion_max4_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T DiscreteTimeIntegrator_DSTATE[1024];/* '<Root>/Discrete-Time Integrator' */
  real_T GeneratedFilterBlock_FILT_STATE[6];/* '<S1>/Generated Filter Block' */
  uint8_T AudioDeviceReader_AudioDeviceLi[1096];/* '<Root>/Audio Device Reader' */
} DW_Filtrado_y_ponderacion_max_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Output[1024];                 /* '<Root>/Output' */
} ExtY_Filtrado_y_ponderacion_m_T;

/* Parameters (default storage) */
struct P_Filtrado_y_ponderacion_max4_T_ {
  real_T DiscreteTimeIntegrator_gainval;
                           /* Computed Parameter: DiscreteTimeIntegrator_gainval
                            * Referenced by: '<Root>/Discrete-Time Integrator'
                            */
  real_T DiscreteTimeIntegrator_IC;    /* Expression: 0
                                        * Referenced by: '<Root>/Discrete-Time Integrator'
                                        */
  real_T GananciaVref_Gain;            /* Expression: 12.13
                                        * Referenced by: '<Root>/Ganancia Vref'
                                        */
  real_T Constant_Value;               /* Expression: 1e-6
                                        * Referenced by: '<S2>/Constant'
                                        */
  real_T Gain2_Gain;                   /* Expression: 0.08244
                                        * Referenced by: '<Root>/Gain2'
                                        */
  real_T AudioDeviceReader_P1;         /* Expression: SampleRate
                                        * Referenced by: '<Root>/Audio Device Reader'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 999999
                                        * Referenced by: '<Root>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: 0
                                        * Referenced by: '<Root>/Saturation'
                                        */
  real_T ResitenciaFast_Gain;          /* Expression: 56.818
                                        * Referenced by: '<Root>/Resitencia Fast'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Filtrado_y_ponderacio_T {
  const char_T *errorStatus;
  RTWLogInfo *rtwLogInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (default storage) */
extern P_Filtrado_y_ponderacion_max4_T Filtrado_y_ponderacion_max446_P;

/* Block signals (default storage) */
extern B_Filtrado_y_ponderacion_max4_T Filtrado_y_ponderacion_max446_B;

/* Block states (default storage) */
extern DW_Filtrado_y_ponderacion_max_T Filtrado_y_ponderacion_max44_DW;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Filtrado_y_ponderacion_m_T Filtrado_y_ponderacion_max446_Y;

/* Model entry point functions */
extern void Filtrado_y_ponderacion_max4466_initialize(void);
extern void Filtrado_y_ponderacion_max4466_step(void);
extern void Filtrado_y_ponderacion_max4466_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Filtrado_y_ponderaci_T *const Filtrado_y_ponderacion_max44_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Filtrado_y_ponderacion_max4466'
 * '<S1>'   : 'Filtrado_y_ponderacion_max4466/Audio Weighting Filter'
 * '<S2>'   : 'Filtrado_y_ponderacion_max4466/Log 0'
 * '<S3>'   : 'Filtrado_y_ponderacion_max4466/powergui'
 */
#endif                        /* RTW_HEADER_Filtrado_y_ponderacion_max4466_h_ */
