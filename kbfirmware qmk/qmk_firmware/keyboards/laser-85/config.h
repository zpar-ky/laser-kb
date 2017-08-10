#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x1739
#define PRODUCT_ID      0x1739
#define DEVICE_VER      0x0001
#define MANUFACTURER    Sparky
#define PRODUCT         Laser-85
#define DESCRIPTION     a 85 key ortholinear

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 17

/* key matrix pins */
//#define MATRIX_ROW_PINS { B1, B2, B3, B7, D0 }
#define MATRIX_ROW_PINS { D0, B7, B3, B2, B1 }
//#define MATRIX_COL_PINS { D1, D2, D3, C6, C7, D5, D4, D7, B4, B5, B6, F7, F6, F5, F4, F1, F0 }
#define MATRIX_COL_PINS { F0, F1, F4, F5, F6, F7, B6, B5, B4, D7, D4, D5, C7, C6, D3, D2, D1 }
#define UNUSED_PINS { B0, E6, D6 } 

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */

#ifdef BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 0
#endif

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

/* prevent stuck modifiers */
#define PREVENT_STUCK_MODIFIERS


#ifdef RGB_DI_PIN
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 0
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#endif

#endif
