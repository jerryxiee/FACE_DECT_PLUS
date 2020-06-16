#ifndef __VPSS_H__
#define __VPSS_H__

#include "media_com.h"
#include "sys_init.h"
#include "module.h"

#ifdef __cplusplus
extern "C" {
#endif

#define VPSS_CHN_FOR_ENC 0
#define VPSS_CHN_FOR_VO 1
#define VPSS_CHN_FOR_ALG 2

typedef struct
{
    unsigned int groupIdx;
    unsigned int groupWidth;
    unsigned int gtoupHeight;
}VPSS_GRP_HDL_S;

typedef struct 
{
    void *pHandle;
}VPSS_PARAM_S;


int Media_Vpss_InitGroup(MEDIA_SENSOR_E enSensorIdx, unsigned int w, unsigned int h);

int Media_Vpss_StartChn(MEDIA_SENSOR_E sensorIdx, VPSS_CHN VpssChn, MEDIA_RECT_S *pRect);

int Media_Vpss_BindVo(MEDIA_SENSOR_E sensorIdx, MEDIA_BIND_INFO_S *pDst);

int Media_Vpss_BindVi(MEDIA_SENSOR_E sensorIdx, MEDIA_BIND_INFO_S *pSrc);

#ifdef __cplusplus
}
#endif



#endif

