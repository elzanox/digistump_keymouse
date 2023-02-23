#include "DigiKeyboard.h"
void setup() {
  //nothing
}
void loop() {
  DigiKeyboard.sendKeyStroke(0);
  if (digitalRead(1) == HIGH) {
    DigiKeyboard.println(" ");
    DigiKeyboard.delay(50);

  }
}
