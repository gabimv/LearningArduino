#define LED_PIN 13

#include "led.h"

Led led(LED_PIN);

void setup() {
  led.init();
}

void loop() {
  led.on();
  delay(500);
  led.off();
  delay(500);
}