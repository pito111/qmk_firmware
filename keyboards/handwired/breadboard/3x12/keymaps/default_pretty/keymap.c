#include QMK_KEYBOARD_H

#define QWERTY 0 // Base qwerty


/****************************************************************************************************
*
* Keymap: Default Layer in Qwerty
*
* ,-----------------------------------------------------------------------------------.
* |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  |  [{  |  ]}  |
* |------+------+------+------+------+------+------+------+------+------+------+------|
* |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |  ;:  |  '"  |  \|  |
* |------+------+------+------+------+------+------+------+------+------+------+------|
* |Shift |   Z  |   X  |   C  |   V  |   B  |   N  |   M  |  ,.  |  .>  |  /?  |Enter |
* `------+------+------+------+------+------+------+------+------+------+------+------'
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[QWERTY] = LAYOUT(
           KC_Q   ,KC_W   ,KC_E   ,KC_R   ,KC_T   ,KC_Y   ,KC_U   ,KC_I   ,KC_O   ,KC_P   ,KC_LBRC,KC_RBRC,
           KC_A   ,KC_S   ,KC_D   ,KC_F   ,KC_G   ,KC_H   ,KC_J   ,KC_K   ,KC_L   ,KC_SCLN,KC_QUOT,KC_BSLS,
           KC_LSFT,KC_Z   ,KC_X   ,KC_C   ,KC_V   ,KC_B   ,KC_N   ,KC_M   ,KC_COMM,KC_DOT ,KC_SLSH,KC_ENT ,
    )
};

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void led_set_user(uint8_t usb_led) {

}
