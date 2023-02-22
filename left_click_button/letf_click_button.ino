#include <DigiMouse.h>
void setup() {
  DigiMouse.begin(); //start or reenumerate USB - BREAKING CHANGE from old versions that didn't require this
}
void loop() {
  DigiMouse.setButtons(0); //unclick all
  DigiMouse.update(); //at least every 50ms
  if (digitalRead(1) == HIGH) {
    DigiMouse.setButtons(1 << 0); //left click
    DigiMouse.delay(50);

  }
}
