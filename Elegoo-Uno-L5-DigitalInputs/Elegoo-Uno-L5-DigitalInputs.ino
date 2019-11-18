const int PIN_SWITCH_A = 9;
const int PIN_SWITCH_B = 8;
const int PIN_LED = 5;

void setup() {
  pinMode(PIN_SWITCH_A, INPUT_PULLUP);
  pinMode(PIN_SWITCH_B, INPUT_PULLUP);
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(9600);
  Serial.println("Booted Man.");
}

void loop() {
  if (digitalRead(PIN_SWITCH_A) == LOW) {
    digitalWrite(PIN_LED, HIGH);
  }
  if (digitalRead(PIN_SWITCH_B) == LOW) {
    digitalWrite(PIN_LED, LOW);
  }
}
