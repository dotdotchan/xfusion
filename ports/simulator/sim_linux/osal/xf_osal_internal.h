/**
 * @file xf_osal_internal.h
 * @author dotc (dotchan@qq.com)
 * @brief 
 * @version 0.1
 * @date 2024-11-19
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef __XF_OSAL_INTERNAL_H__
#define __XF_OSAL_INTERNAL_H__

/* ==================== [Includes] ========================================== */

#include "xf_osal.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ==================== [Defines] =========================================== */

/* ==================== [Typedefs] ========================================== */

/* ==================== [Global Prototypes] ================================= */

/* ==================== [Macros] ============================================ */

/* ==================== [Global Functions] ================================== */

xf_osal_thread_t port_osal_thread_get_by_pid(pthread_t pid);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif // __XF_OSAL_INTERNAL_H__
