#include "quantum.h"
// #include "phoneboard.h"
// #include "config.h"

// Track hook switch state
// static bool hook_state = true;

// uncomment below once hook pin and bell relay are wired. 
/*
void keyboard_post_init_user(void) {
    // Configure hook switch input with pullup
    setPinInputHigh(HOOK_PIN);

    // Configure bell relay output
    setPinOutput(BELL_RELAY_PIN);
    writePinLow(BELL_RELAY_PIN);
}
*/

// uncomment below once hook pin is properly wired.  Leaving commented out for initial testing.
/*
void matrix_scan_user(void) {
    bool new_hook_state = readPin(HOOK_PIN);

    if (new_hook_state != hook_state) {
        hook_state = new_hook_state;

        if (!hook_state) {
            // Handset lifted (switch closed)
            layer_on(1);
        } else {
            // Handset replaced
            layer_off(1);
        }
    }
}
*/
