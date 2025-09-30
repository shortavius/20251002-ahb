#include "src/hrtbt/hrtbt.h"

#include <Arduino.h>

void setup() {
  // Initialize the heart beat module
  hrtbt_cfg();
}

void loop() {
  // Handle any actions that the heart beat module needs to do
  hrtbt_action();
}
