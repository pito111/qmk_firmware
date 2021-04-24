#include QMK_KEYBOARD_H

#define TAPPING_TOGGLE 2
// Layers definitions
#define QWERTY 0    // Base qwerty
#define F_KEYS 4    // Function keys on first row
#define NUMBERS 11  // First row as numbers
#define S_KEYS 15   // side keys, arrows, backspace, tab, del etc.
#define MODES 31    // switch to/togle layers

// Custom key aliases
#define FN_LSFT MT(MOD_LSFT, KC_CAPS)
#define FN_LCTL MT(MOD_LCTL, KC_Z)
#define FN_LCMD MT(MOD_LGUI, KC_X)
#define FN_LALT MT(MOD_LALT, KC_C)
#define FN_RALT MT(MOD_RALT, KC_COMM)
#define FN_RCMD MT(MOD_RGUI, KC_DOT)
#define FN_RCTL MT(MOD_RCTL, KC_SLSH)
#define FN_RSFT MT(MOD_RSFT, KC_SPC)
#define FN_ENT LT(S_KEYS, KC_ENT)
#define FN_FN TG(MODES)

/****************************************************************************************************
*
* Keymap: Default Layer in Qwerty
*
*        ,---------------------------------------------------------------------------------------------------------------.
*        |   Q   |   W   |   E   |   R   |   T   |   Y   |   U   |   I   |   O   |   P   |  [{   |  ]}   | █████ | █████ |
*        |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
*        |   A   |   S   |   D   |   F   |   G   |   H   |   J   |   K   |   L   |  ;:   |  '"   |  \|   | █████ | █████ |
*        |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
*        | Shift |   Z   |   X   |   C   |   V   |   B   |   N   |   M   |  ,.   |  .>   |  /?   | Space | █████ | █████ |
*        |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
*        | █████ | █████ | █████ | █████ | █████ | █████ | █████ | █████ | █████ | █████ | █████ | █████ | Enter | █████ |
*        |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
*        | █████ | █████ | █████ | █████ | █████ | █████ | █████ | █████ | █████ | █████ | █████ | █████ | █████ |  Fn   |
*        `-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------'
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [QWERTY] = LAYOUT(
           KC_Q   ,KC_W   ,KC_E   ,KC_R   ,KC_T   ,KC_Y   ,KC_U   ,KC_I   ,KC_O   ,KC_P   ,KC_LBRC,KC_RBRC,
           KC_A   ,KC_S   ,KC_D   ,KC_F   ,KC_G   ,KC_H   ,KC_J   ,KC_K   ,KC_L   ,KC_SCLN,KC_QUOT,KC_BSLS,
           FN_LSFT,FN_LCTL,FN_LCMD,FN_LALT,KC_V   ,KC_B   ,KC_N   ,KC_M   ,FN_RALT,FN_RCMD,FN_RCTL,FN_RSFT,
                                                                                                           FN_ENT ,
                                                                                                                   FN_FN
        ),

    [F_KEYS] = LAYOUT(
           KC_F1  ,KC_F2  ,KC_F3  ,KC_F4  ,KC_F5  ,KC_F6  ,KC_F7  ,KC_F8  ,KC_F9  ,KC_F10 ,KC_F11 ,KC_F12 ,
           _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
           _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
                                                                                                           _______,
                                                                                                                   _______
        ),

    [NUMBERS] = LAYOUT(
           KC_1   ,KC_2   ,KC_3   ,KC_4   ,KC_5   ,KC_6   ,KC_7   ,KC_8   ,KC_9   ,KC_0   ,KC_MINS,KC_EQL ,
           _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
           _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
                                                                                                           _______,
                                                                                                                   _______
        ),

    [S_KEYS] = LAYOUT(
           KC_ESC ,KC_GRV ,KC_CAPS,KC_SLCK,KC_NLCK,_______,_______,_______,_______,_______,KC_DEL ,KC_BSPC,
           KC_TAB ,KC_PSCR,KC_PAUS,_______,_______,_______,_______,KC_PGUP,KC_HOME,KC_UP  ,KC_END ,KC_INS ,
           _______,_______,_______,_______,_______,_______,_______,KC_PGDN,KC_LEFT,KC_DOWN,KC_RGHT,_______,
                                                                                                           _______,
                                                                                                                   KC_ENT
        ),

    [MODES] = LAYOUT(
           TO(F_KEYS),TO(NUMBERS),_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
           _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
           _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
                                                                                                           TO(QWERTY),
                                                                                                                   _______
        )
};

/* Layer layout template
    [LAYER_ALIAS_NUMBER] = LAYOUT(
           _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
           _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
           _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
                                                                                                           _______,
                                                                                                                   _______
        )
*/

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void led_set_user(uint8_t usb_led) {

}
