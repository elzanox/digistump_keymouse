#include "DigiKeyboard.h"
void setup() {
  //nothing
}
void loop() {
  if (digitalRead(1) == HIGH) {
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(50);

  }
}
