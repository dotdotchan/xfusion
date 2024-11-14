/**
 * @file main.c
 * @author dotc (dotchan@qq.com)
 * @brief
 * @version 0.1
 * @date 2024-11-04
 *
 * @copyright Copyright (c) 2024
 *
 */

/* ==================== [Includes] ========================================== */

#include <stdio.h>
#include "xfusion.h"
#include "websocket.h"

/* ==================== [Defines] =========================================== */

/* ==================== [Typedefs] ========================================== */

/* ==================== [Static Prototypes] ================================= */

/* ==================== [Static Variables] ================================== */

/* ==================== [Macros] ============================================ */

/* ==================== [Global Functions] ================================== */

int main(void)
{
    websocket_init();
    xfusion_init();
    while (1) {
        xfusion_run();
    }
}

/* ==================== [Static Functions] ================================== */
