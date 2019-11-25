#include "SR04.h"

const int PIN_TRIGGER = 12;
const int PIN_ECHO = 11;
const int MAX_DISTANCE = 100;

SR04 sr04 = SR04(PIN_ECHO, PIN_TRIGGER);
long dist;
long reportedDist;

void setup() {
   Serial.begin(9600);
   delay(2500);
}

void loop() {
   dist=sr04.Distance();
//   dist=sr04.DistanceAvg(5, 3);
   if (dist <= MAX_DISTANCE) {
    reportedDist = dist;
   }
   Serial.print("Distance: ");
   Serial.println(reportedDist);
   delay(50);
}
