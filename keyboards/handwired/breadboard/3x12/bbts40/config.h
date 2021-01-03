#ifndef BBTS40_CONFIG_H
#define BBTS40_CONFIG_H

#include "../config.h"

/* USB Device descriptor parameter */
// #undef VENDOR_ID
// #define VENDOR_ID 0xFEED
#undef PRODUCT_ID
#define PRODUCT_ID 0x6262
#undef DEVICE_VER
#define DEVICE_VER 0x0001  // 0 or 1?
#undef MANUFACTURER
#define MANUFACTURER "https://github.com/pito111"
#undef PRODUCT
#define PRODUCT "Breadboard development keyboard with microswitches"
#define FORCE_NKRO

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 14

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
 */
#define MATRIX_ROW_PINS               \
    {                                 \
        LINE_PIN21,  /* ROW_0 */  \
        LINE_PIN22,  /* ROW_1 */  \
        LINE_PIN23,  /* ROW_2 */  \
        LINE_PIN16,  /* ROW_3 */  \
        LINE_PIN19   /* ROW_4 */  \
    }

#define MATRIX_COL_PINS             \
    {                               \
        LINE_PIN12, /* COL_0 */  \
        LINE_PIN11, /* COL_1 */  \
        LINE_PIN10, /* COL_2 */  \
        LINE_PIN9,  /* COL_3 */  \
        LINE_PIN8,  /* COL_4 */  \
        LINE_PIN7,  /* COL_5 */  \
        LINE_PIN6,  /* COL_6 */  \
        LINE_PIN5,  /* COL_7 */  \
        LINE_PIN4,  /* COL_8 */  \
        LINE_PIN3,  /* COL_9 */  \
        LINE_PIN2,  /* COL_10 */ \
        LINE_PIN1,  /* COL_11 */ \
        LINE_PIN14, /* COL_12 */ \
        LINE_PIN17  /* COL_13 */ \
    }

#if 0 /* minimal test matrix for debugging */
#undef MATRIX_ROWS
#undef MATRIX_COLS
#undef MATRIX_ROW_PINS
#undef MATRIX_COL_PINS
#define MATRIX_ROWS 1
#define MATRIX_COLS 1
// ROW_F2
#define MATRIX_ROW_PINS {LINE_PIN21}
// COL_3
#define MATRIX_COL_PINS {LINE_PIN20}
#endif

//#define MATRIX_ROW_PINS { D0, D1, D2, D3, D4, D5, D6, D7, C0, C1, C2, C3, C4, C5, C6 }
//#define MATRIX_COL_PINS { B0, B1, B2, B3, B4, B5, B6 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW
//#define DIODE_DIRECTION ROW2COL

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 10

/* don't know if this should be defined at the board or top level. Assuming board
#define MOUSEKEY_DELAY          100
#define MOUSEKEY_INTERVAL       20
#define MOUSEKEY_MAX_SPEED      3
#define MOUSEKEY_TIME_TO_MAX    10
*/

#define IGNORE_MOD_TAP_INTERRUPT

// Reduce input latency by lowering the USB polling interval
// from its 10ms default to the 1ms minimum that USB 1.x (Full Speed) allows:
#define USB_POLLING_INTERVAL_MS 1

#endif
