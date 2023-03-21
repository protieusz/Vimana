#pragma once

#include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 14

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* POINTING_DEVICE */
#define ADNS5050_SCLK_PIN         B1
#define ADNS5050_SDIO_PIN         B2
#define ADNS5050_CS_PIN           B3

#define POINTING_DEVICE_ROTATION_180

/* OLED */
#define OLED_FONT_H "keyboards/protieus/veronica/lib/glcdfont.c"