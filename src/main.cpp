#include <Arduino.h>
#include "ultrasonic_sensor.h"

#define TRIG_PIN 5
#define ECHO_PIN 18

void setup() {
    Serial.begin(9600);
    initUltrasonic(TRIG_PIN, ECHO_PIN);
}

void loop() {
    float distance = readDistance();
    Serial.print("Khoang cach: ");
    Serial.print(distance);
    Serial.println(" cm");
    delay(500);
}
