#include QMK_KEYBOARD_H

static uint16_t shft_cad_timer;
static bool shft_cad_interrupted = false;

enum layers {
    _BASE
};

enum {
	TD_KEY_1 = 0,
	TD_KEY_2,
	TD_KEY_3,
	TD_KEY_4,
	TD_KEY_5,
	TD_KEY_6,
	TD_KEY_7,
	TD_KEY_8,
	TD_KEY_9,
	TD_KEY_0,
	TD_KEY_STAR,
	TD_KEY_HASH,
	TD_KEY_LIGHTNING
};

enum custom_keycodes {
    SHFT_CAD = SAFE_RANGE,
};

void td_1_finished(tap_dance_state_t *state, void *user_data) {
    switch (state->count) {
        case 1:
            tap_code(KC_Q);
            break;
	case 2:
	    tap_code(KC_Z);
	    break;
        default:
            tap_code(KC_1);
            break;
    }
}

void td_2_finished(tap_dance_state_t *state, void *user_data) {
    switch (state->count) {
        case 1:
            tap_code(KC_A);
            break;
        case 2:
            tap_code(KC_B);
            break;
        case 3:
            tap_code(KC_C);
            break;
        default:
            tap_code(KC_2);
            break;
    }
}

void td_3_finished(tap_dance_state_t *state, void *user_data) {
    switch (state->count) {
        case 1:
            tap_code(KC_D);
            break;
        case 2:
            tap_code(KC_E);
            break;
        case 3:
            tap_code(KC_F);
            break;
        default:
            tap_code(KC_3);
            break;
    }
}

void td_4_finished(tap_dance_state_t *state, void *user_data) {
    switch (state->count) {
        case 1:
            tap_code(KC_G);
            break;
        case 2:
            tap_code(KC_H);
            break;
        case 3:
            tap_code(KC_I);
            break;
        default:
            tap_code(KC_4);
            break;
    }
}

void td_5_finished(tap_dance_state_t *state, void *user_data) {
    switch (state->count) {
        case 1:
            tap_code(KC_J);
            break;
        case 2:
            tap_code(KC_K);
            break;
        case 3:
            tap_code(KC_L);
            break;
        default:
            tap_code(KC_5);
            break;
    }
}

void td_6_finished(tap_dance_state_t *state, void *user_data) {
    switch (state->count) {
        case 1:
            tap_code(KC_M);
            break;
        case 2:
            tap_code(KC_N);
            break;
        case 3:
            tap_code(KC_O);
            break;
        default:
            tap_code(KC_6);
            break;
    }
}

void td_7_finished(tap_dance_state_t *state, void *user_data) {
    switch (state->count) {
        case 1:
            tap_code(KC_P);
            break;
        case 2:
            tap_code(KC_R);
            break;
        case 3:
            tap_code(KC_S);
            break;
        default:
            tap_code(KC_7);
            break;
    }
}

void td_8_finished(tap_dance_state_t *state, void *user_data) {
    switch (state->count) {
        case 1:
            tap_code(KC_T);
            break;
        case 2:
            tap_code(KC_U);
            break;
        case 3:
            tap_code(KC_V);
            break;
        default:
            tap_code(KC_8);
            break;
    }
}

void td_9_finished(tap_dance_state_t *state, void *user_data) {
    switch (state->count) {
        case 1:
            tap_code(KC_W);
            break;
        case 2:
            tap_code(KC_X);
            break;
        case 3:
            tap_code(KC_Y);
            break;
        default:
            tap_code(KC_9);
            break;
    }
}

void td_0_finished(tap_dance_state_t *state, void *user_data) {
    switch (state->count) {
        case 1:
            tap_code(KC_SPACE);
            break;
        case 2:
            tap_code(KC_ENTER);
            break;
        default:
	    tap_code(KC_TAB);
	    break;
    }
}

void td_star_finished(tap_dance_state_t *state, void *user_data) {
    switch (state->count) {
        case 1:
            tap_code(KC_DOT);
            break;
        case 2:
            tap_code(KC_COMMA);
            break;
	case 3:
	    tap_code(KC_QUOTE);
	    break;
	case 4:
	    tap_code(KC_SEMICOLON);
	    break;
	case 5:
	    tap_code(KC_SLASH);
	    break;
	default:
	    tap_code(KC_BACKSLASH);
	    break;
    }
}

void td_hash_finished(tap_dance_state_t *state, void *user_data) {
    switch (state->count) {
        case 1:
            tap_code(KC_BACKSPACE);
            break;
        case 2:
            tap_code(KC_DELETE);
            break;
	case 3:
	    tap_code(KC_LEFT_BRACKET);
	    break;
	case 4:
	    tap_code(KC_RIGHT_BRACKET);
	    break;
	default:
	    tap_code(KC_GRAVE);
	    break;
    }
}

tap_dance_action_t tap_dance_actions[] = {
    [TD_KEY_1] = ACTION_TAP_DANCE_FN(td_1_finished),
    [TD_KEY_2] = ACTION_TAP_DANCE_FN(td_2_finished),
    [TD_KEY_3] = ACTION_TAP_DANCE_FN(td_3_finished),
    [TD_KEY_4] = ACTION_TAP_DANCE_FN(td_4_finished),
    [TD_KEY_5] = ACTION_TAP_DANCE_FN(td_5_finished),
    [TD_KEY_6] = ACTION_TAP_DANCE_FN(td_6_finished),
    [TD_KEY_7] = ACTION_TAP_DANCE_FN(td_7_finished),
    [TD_KEY_8] = ACTION_TAP_DANCE_FN(td_8_finished),
    [TD_KEY_9] = ACTION_TAP_DANCE_FN(td_9_finished),
    [TD_KEY_0] = ACTION_TAP_DANCE_FN(td_0_finished),
    [TD_KEY_STAR] = ACTION_TAP_DANCE_FN(td_star_finished),
    [TD_KEY_HASH] = ACTION_TAP_DANCE_FN(td_hash_finished)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (keycode != SHFT_CAD && record->event.pressed) {
        shft_cad_interrupted = true;
    }

    switch (keycode) {
        case SHFT_CAD:
            if (record->event.pressed) {
                shft_cad_timer = timer_read();
                shft_cad_interrupted = false;
                register_code(KC_LSFT);
            } else {
                unregister_code(KC_LSFT);

                if (!shft_cad_interrupted && timer_elapsed(shft_cad_timer) < TAPPING_TERM) {
                    tap_code16(LCA(KC_DEL));
                }
            }
            return false;
    }

    return true;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_BASE] = LAYOUT(
    TD(TD_KEY_1), TD(TD_KEY_2), TD(TD_KEY_3),
    TD(TD_KEY_4), TD(TD_KEY_5), TD(TD_KEY_6),
    TD(TD_KEY_7), TD(TD_KEY_8), TD(TD_KEY_9),
    TD(TD_KEY_STAR), TD(TD_KEY_0), TD(TD_KEY_HASH),
    SHFT_CAD
)

};
