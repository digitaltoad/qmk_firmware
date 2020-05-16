#include QMK_KEYBOARD_H

enum dz60rgb_layers {
  _NORMAL,
  _FNAV,
  _RGB,
  _NUMPAD
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
		[_NORMAL] = LAYOUT( /* Base */
			KC_GRV,            KC_1,     KC_2,     KC_3,  KC_4,  KC_5,  KC_6,  KC_7,  KC_8,    KC_9,    KC_0,            KC_MINS,  KC_EQL,  KC_BSPC,\
		    LT(1, KC_TAB),             KC_Q,     KC_W,     KC_E,  KC_R,  KC_T,  KC_Y,  KC_U,  KC_I,    KC_O,    KC_P,            KC_LBRC,  KC_RBRC, KC_BSLASH,\
			LCTL_T(KC_ESC),     KC_A,     KC_S,     KC_D,  KC_F,  KC_G,  KC_H,  KC_J,  KC_K,    KC_L,    KC_SCLN,         KC_QUOT,           KC_ENT, \
		    KC_LSFT,            KC_Z,     KC_X,     KC_C,  KC_V,  KC_B,  KC_N,  KC_M,  KC_COMM, KC_DOT,  KC_SLSH, KC_UP,             LT(2, KC_DEL),\
		    MO(3),            KC_LALT,  KC_LGUI,        KC_SPC,               KC_RALT, MO(1),  KC_LEFT,         KC_DOWN,           KC_RIGHT),
		[_FNAV] = LAYOUT( /* FN */
		    KC_TRNS,    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_DEL ,\
		    KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_PGUP,  KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS  ,\
		    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_PGDOWN, KC_TRNS,  KC_TRNS,  KC_LEFT,  KC_DOWN,  KC_UP,  KC_RIGHT,  KC_TRNS,  KC_TRNS,            KC_TRNS,\
		    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,KC_VOLU,            KC_MUTE,\
			KC_TRNS,  KC_TRNS,  KC_TRNS,                      KC_TRNS,                        KC_TRNS,  KC_TRNS,  KC_MPRV,  KC_VOLD,            KC_MNXT),
		[_RGB] = LAYOUT( /* LIGHT */
			KC_TRNS,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_DEL ,\
			KC_TRNS,  RGB_TOG,  KC_TRNS,  RGB_HUI,  RGB_HUD,  RGB_SAI,  RGB_SAD,  RGB_VAI,  RGB_VAD,  RGB_MOD,  KC_TRNS,  KC_TRNS,  KC_TRNS,  RESET  ,\
			KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  RGB_SPI,  RGB_SPD,  KC_TRNS,  KC_TRNS,            EEP_RST,\
			KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,\
			KC_TRNS,  KC_TRNS,  KC_TRNS,                      KC_TRNS,                      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS),
		[_NUMPAD] = LAYOUT( /* NUMPAD */
			KC_NLCK,  KC_PSLS,  KC_PAST,  KC_PMNS,  KC_PPLS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_PSLS,  KC_PAST,  KC_PMNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,\
			KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_P7,  KC_P8,    KC_P9,    KC_PPLS,    KC_TRNS,  KC_TRNS,  KC_TRNS,\
			KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_P4,  KC_P5,    KC_P6,    KC_PPLS,    KC_TRNS,            KC_PENT,\
			KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_P1,  KC_P2,    KC_P3,    KC_PENT,    KC_TRNS,            KC_TRNS,\
			KC_TRNS,  KC_TRNS,    KC_TRNS,                      KC_P0,                      KC_PDOT,    KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS),
		};

/*
	 [_LAYER] = LAYOUT(
		13,      12,      11,       10,      9,       8,       7,       6,       5,       4,       3,       2,       1,       0,      \
		27,      26,      25,       24,      23,      22,      21,      20,      19,      18,      17,      16,      15,      14,     \
		40,      39,      38,       37,      36,      35,      34,      33,      32,      31,      30,      29,      28,              \
		53,      52,      51,       50,      49,      48,      47,      46,      45,      44,      43,               42,      41,     \
		62,      61,      60,                         59,                        58,      57,               56,      55,      54      \
*/
void rgb_matrix_indicators_user(void) {
	  if (!g_suspend_state) {
	    switch (biton32(layer_state)) {
        case _FNAV:
          rgb_matrix_set_color(1, 0x00, 0xFF, 0xF7);
          rgb_matrix_set_color(2, 0x00, 0xFF, 0xF7);
          rgb_matrix_set_color(3, 0x00, 0xFF, 0xF7);
          rgb_matrix_set_color(4, 0x00, 0xFF, 0xF7);
          rgb_matrix_set_color(5, 0x00, 0xFF, 0xF7);
          rgb_matrix_set_color(6, 0x00, 0xFF, 0xF7);
          rgb_matrix_set_color(7, 0x00, 0xFF, 0xF7);
          rgb_matrix_set_color(8, 0x00, 0xFF, 0xF7);
          rgb_matrix_set_color(9, 0x00, 0xFF, 0xF7);
          rgb_matrix_set_color(10, 0x00, 0xFF, 0xF7);
          rgb_matrix_set_color(11, 0x00, 0xFF, 0xF7);
          rgb_matrix_set_color(12, 0x00, 0xFF, 0xF7);

          // PGUP/PGDN
          rgb_matrix_set_color(20, 0xFF, 0x00, 0xD9);
          rgb_matrix_set_color(37, 0xFF, 0x00, 0xD9);

          rgb_matrix_set_color(31, 0x6A, 0xFF, 0x00);
          rgb_matrix_set_color(32, 0x6A, 0xFF, 0x00);
          rgb_matrix_set_color(33, 0x6A, 0xFF, 0x00);
          rgb_matrix_set_color(34, 0x6A, 0xFF, 0x00);
          break;
        case _NUMPAD:
          // / * -
          rgb_matrix_set_color(3, 0xFF, 0xFF, 0x00);
          rgb_matrix_set_color(4, 0xFF, 0xFF, 0x00);
          rgb_matrix_set_color(5, 0xFF, 0xFF, 0x00);

          // +
          rgb_matrix_set_color(17, 0xFF, 0xFF, 0x00);

          // 7 8 9
          rgb_matrix_set_color(18, 0x6F, 0x00, 0xFF);
          rgb_matrix_set_color(19, 0x6F, 0x00, 0xFF);
          rgb_matrix_set_color(20, 0x6F, 0x00, 0xFF);

          // Ent
          rgb_matrix_set_color(28, 0xFF, 0xFF, 0x00);

          // +
          rgb_matrix_set_color(30, 0xFF, 0xFF, 0x00);

          // 4 5 6
          rgb_matrix_set_color(31, 0x6F, 0x00, 0xFF);
          rgb_matrix_set_color(32, 0x6F, 0x00, 0xFF);
          rgb_matrix_set_color(33, 0x6F, 0x00, 0xFF);

          // Ent
          rgb_matrix_set_color(43, 0xFF, 0xFF, 0x00);

          // 1 2 3
          rgb_matrix_set_color(44, 0x6F, 0x00, 0xFF);
          rgb_matrix_set_color(45, 0x6F, 0x00, 0xFF);
          rgb_matrix_set_color(46, 0x6F, 0x00, 0xFF);

          // .
          rgb_matrix_set_color(58, 0xFF, 0xFF, 0x00);

          // 0
          rgb_matrix_set_color(59, 0x6F, 0x00, 0xFF);
          break;
      }
    }
}

void matrix_init_user(void) {
  //user initialization
}

void matrix_scan_user(void) {
  //user matrix
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	  return true;
	}
