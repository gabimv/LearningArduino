#include "PushButton.h"

#define BUTTON_PIN 7

PushButton button(BUTTON_PIN, false, true);

void setup() {
  Serial.begin(115200);
  button.init();
}

void loop() {
  if(button.isPressed()) {
    Serial.println("Button is pressed");
  }
  else {
    Serial.println("Button is not pressed");
  }
  delay(100);
}