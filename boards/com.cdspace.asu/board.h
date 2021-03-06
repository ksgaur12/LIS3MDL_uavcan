#pragma once

#include <modules/platform_stm32f302x8/platform_stm32f302x8.h>

#define BOARD_PAL_LINE_LED PAL_LINE(GPIOA,0)
#define BOARD_PAL_LINE_LED2 PAL_LINE(GPIOA,1)
#define BOARD_PAL_LINE_CAN_RX PAL_LINE(GPIOA,11)
#define BOARD_PAL_LINE_CAN_TX PAL_LINE(GPIOA,12)

#define BOARD_PAL_LINE_I2C2_SDA PAL_LINE(GPIOA,10)
#define BOARD_PAL_LINE_I2C2_SCL PAL_LINE(GPIOA,9)

#define BOARD_CONFIG_HW_NAME "com.cdspace.asu"
#define BOARD_CONFIG_HW_MAJOR_VER 1
#define BOARD_CONFIG_HW_MINOR_VER 0

#define BOARD_CONFIG_HW_INFO_STRUCTURE { \
    .hw_name = BOARD_CONFIG_HW_NAME, \
    .hw_major_version = BOARD_CONFIG_HW_MAJOR_VER, \
    .hw_minor_version = BOARD_CONFIG_HW_MINOR_VER, \
    .board_desc_fmt = SHARED_HW_INFO_BOARD_DESC_FMT_NONE, \
    .board_desc = 0, \
}

#define HAL_USE_I2C TRUE
#define HAL_USE_PAL TRUE
#define CHPRINTF_USE_FLOAT	TRUE
