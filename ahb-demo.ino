#include "src/hrtbt/hrtbt.h"
#include "src/modulino-button/modulino-button.h"

#include <Arduino.h>
#include <Modulino.h>

void setup() {
  // Initialize the Modulino library
  Modulino.begin();

  // Initialize the heart beat module
  hrtbt_cfg();

  // Initialize the Modulino Button board
  modulino_buttons_cfg();
}

void loop() {
  // Handle any actions that the heart beat module needs to do
  hrtbt_action();

  // Get the current statue of the buttons on the Modulino board
  unsigned char led_state = modulino_buttons_get_button_states();

  // Set the Modulino board's LEDs based on the state of the buttons
  modulino_buttons_set_leds(led_state);
}
