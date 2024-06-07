#include "PushButton.h"

 PushButton::PushButton(byte pin, bool isPullUp, 
                        bool internalPullUpActivated)
{
  this->pin = pin;
  this->isPullUp = isPullUp;
  this->internalPullUpActivated = internalPullUpActivated;
}

void PushButton::init()
{
  if (isPullUp && internalPullUpActivated) {
    pinMode(pin, INPUT_PULLUP);
  }
  else {
    pinMode(pin, INPUT);
  }
  readState();
}

void PushButton::readState()
{
  state = digitalRead(pin);
}

bool PushButton::isPressed()
{
  readState();
  if (isPullUp) {
    return (state == LOW);
  }
  else{
    return (state == HIGH);
  }
}
