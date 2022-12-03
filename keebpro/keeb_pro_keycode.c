#include QMK_KEYBOARD_H

enum custom_keycodes {
    //回车,右shift时为双引号
    KP_ENTER_QUOTE = USER00,
    //>.键,右shift时为?
    KP_DOT_QUES,
    //up键,右shift时为？
    KP_UP_QUES,
    //L键,右shift时为:
    KP_L_COLN,
    // BS键,右shift时为|
    KP_BSPC_PIPE
};


//shift + enter = "  来自：https://github.com/qmk/qmk_firmware/blob/e899cb8940da04fa2610604f0aab417db7fac119/keyboards/mitosis/keymaps/datagrok/keymap.c
//https://github.com/qmk/qmk_firmware/issues/6705
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    //static uint8_t saved_mods = 0;


      switch (keycode) {
    //特殊 shift
    case KP_ENTER_QUOTE:
        if (record->event.pressed){
            if (get_mods() & MOD_BIT(KC_RSHIFT)){
            register_code(KC_QUOTE);
            } else {
            register_code(KC_ENTER);
            }
        } else {
            unregister_code(KC_QUOTE);
            unregister_code(KC_ENTER);
        }
        return false;
    case KP_DOT_QUES:
        if (record->event.pressed){
            if (get_mods() & MOD_BIT(KC_RSHIFT)){
            register_code(KC_SLASH);
            } else {
            register_code(KC_DOT);
            }
        } else {
            unregister_code(KC_SLASH);
            unregister_code(KC_DOT);
        }
        return false;
    case KP_UP_QUES:
        if (record->event.pressed){
            if (get_mods() & MOD_BIT(KC_RSHIFT)){
            register_code(KC_SLSH);

            } else {
            register_code(KC_UP);
            }
        } else {

            unregister_code(KC_SLSH);

            unregister_code(KC_UP);
        }
        return false;
    case KP_L_COLN:
        if (record->event.pressed){
            if (get_mods() & MOD_BIT(KC_RSHIFT)){
            register_code(KC_SCLN);
            } else {
            register_code(KC_L);
            }
        } else {
            unregister_code(KC_SCLN);
            unregister_code(KC_L);
        }
        return false;
    case KP_BSPC_PIPE:
        if (record->event.pressed){
            if (get_mods() & MOD_BIT(KC_RSHIFT)){
            register_code(KC_BSLS);
            } else {
            register_code(KC_BSPC);
            }
        } else {
            unregister_code(KC_BSLS);
            unregister_code(KC_BSPC);
        }
        return false;
    default:
      return true;
  }


}
