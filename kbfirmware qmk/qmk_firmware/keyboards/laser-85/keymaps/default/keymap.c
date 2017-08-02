#include "kb.h"

#define _______ KC_TRNS
// if you want to make a new layer template for comments, copy one comment layer thing and run a regex: [^\s\|]
#define _DEFLT 0
#define _LOWER 1
#define _RAISE 2
#define _FUNCT 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	/* Layer 0, default layer
	* | Esc |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |Bkspc| Esc |  /  |  *  |  -  |
	* | Tab |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  | Del |  7  |  8  |  9  |  +  |
	* |     |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  | Ent |  4  |  5  |  6  |  =  |
	* |Shift|  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  |Shift| Up  |  1  |  2  |  3  | Ent |
	* |Ctrl | Win | Alt |     |Lower| Spc | Spc |Raise|     |Funk |     |Left |Down |Right|  0  | 00  |  .  |
	*/
	
	[_DEFLT] = {
		{ KC_ESC , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS, KC_BSPC, KC_ESC , KC_PSLS, KC_PAST, KC_PMNS}, 
		{ KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_RBRC, KC_DEL , KC_P7  , KC_P8  , KC_P9  , KC_PPLS}, 
		{ KC_NO  , KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT, KC_ENT , KC_P4  , KC_P5  , KC_P6  , KC_EQL }, 
		{ KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT, KC_UP  , KC_P1  , KC_P2  , KC_P3  , KC_ENT }, 
		{ KC_LCTL, KC_LGUI, KC_LALT, KC_NO  , MO(1)  , KC_SPC , KC_SPC , MO(2)  , KC_NO  , MO(3)  , KC_NO  , KC_LEFT, KC_DOWN, KC_RGHT, KC_P0  , M(0)   , KC_PDOT},
	},
	
	/* Layer 1, lower layer
	* |     | F1  | F2  | F3  | F4  |     |     |     |     |     |     |     |     |     |     |     |     |
	* |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |
	* |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |
	* |     |     |     | F13 |     |     |     |     |     |     |     |     |     |     |     |     |     |
	* |     |     |     | PgDn|     |     |     |     |VolD |  F6 | End |     |     |     |     |     |     |
	*/
	
	[_LOWER] = {
		{ _______,  KC_F1 , KC_F2  , KC_F3  , KC_F4  , _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______}, 
		{ _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______}, 
		{ _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______}, 
		{ _______, _______, _______, KC_F13 , _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______}, 
		{ _______, _______, _______, KC_PGDN, _______, _______, _______, _______, KC_VOLD, KC_F6  , KC_END , _______, _______, _______, _______, _______, _______},
	},
	
	/* Layer 2, raise layer
	* |     |     |     |     |     |     |     |  F7 |  F8 |  F9 | F10 | F11 |     |     |     |     |     |
	* |     |     |     |     |     |     |     |     |     |     |     | F12 |     |     |     |     |     |
	* |Reset|     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |
	* |     |     |     |     |     |     |     |     |Mute |MPrev|MNext|     |     |     |     |     |     |
	* |     |     |     | PgUp|     |     |     |     |VolU |  F5 |Home |     |     |     |     |     |     |
	*/
	
	[_RAISE] = {
		{ _______, _______, _______, _______, _______, _______, _______, KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , _______, _______, _______, _______, _______}, 
		{ _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_F12 , _______, _______, _______, _______, _______}, 
		{ RESET  , _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______}, 
		{ _______, _______, _______, _______, _______, _______, _______, _______, KC_MUTE, KC_MPRV, KC_MNXT, _______, _______, _______, _______, _______, _______}, 
		{ _______, _______, _______, KC_PGUP, _______, _______, _______, _______, KC_VOLU, KC_F5  , KC_HOME, _______, _______, _______, _______, _______, _______},
	},

	/* Layer 3, function layer
	* |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |
	* |     |     |     |     |     |     |     |     |     | F10 | F11 | F12 | F13 | F14 |     |     |     |
	* |     |     |     |     |     |     |     |     |     | F15 | F16 | F17 | F18 | F19 |     |     |     |
	* |     |     |     |     |     |     |     |     |     | F20 | F21 | F22 | F23 | F24 |     |     |     |
	* |     |     |     |     |     |     |     |     |     |  o  |     |     |     |     |     |     |     |
	*/
	
	[_FUNCT] = {
		{ _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______}, 
		{ _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_F10 , KC_F11 , KC_F12 , KC_F13 , KC_F14 , _______, _______, _______}, 
		{ _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_F15 , KC_F16 , KC_F17 , KC_F18 , KC_F19 , _______, _______, _______}, 
		{ _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_F20 , KC_F21 , KC_F22 , KC_F23 , KC_F24 , _______, _______, _______}, 
		{ _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______},
	},	
	
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
	keyevent_t event = record->event;

	switch (id) {
		case 0:
			if (record->event.pressed) {
				return MACRO( T(0), T(0), END );
			}
			break;
	}
	return MACRO_NONE;
}

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

void led_set_user(uint8_t usb_led) {

}