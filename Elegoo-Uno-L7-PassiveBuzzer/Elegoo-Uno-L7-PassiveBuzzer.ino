#include "pitches.h"

const int PIN_BUZZER = 4;
const int duration = 125;

const int melody[] = {
  NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_A5, NOTE_B5, NOTE_C6
};

void setup() {}

void loop() {
  for(int i = 0; i < 8; i++) {
    tone(PIN_BUZZER, melody[i], duration);
    delay(duration);
  }
  delay(500);
  for(int i = 0; i < 8; i++) {
    tone(PIN_BUZZER, melody[7-i], duration);
    delay(duration);
  }
  delay(2500);
}
