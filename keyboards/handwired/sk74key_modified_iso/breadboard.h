#ifndef BREADBOARD_H
#define BREADBOARD_H

#ifdef KEYBOARD_breadboard_3x12_bbts40
#    include "bbts40.h"
#endif

#include "quantum.h"

void all_led_off(void);
void all_led_on(void);
void num_lock_led_on(void);
void caps_lock_led_on(void);
void scroll_lock_led_on(void);
void keypad_led_on(void);

#endif
