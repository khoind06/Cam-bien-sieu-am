#include "ultrasonic.h"
#include <Arduino.h>

int trigPin_;
int echoPin_;

void initUltrasonic(int trigPin, int echoPin) {
    trigPin_ = trigPin;
    echoPin_ = echoPin;
    pinMode(trigPin_, OUTPUT);
    pinMode(echoPin_, INPUT);
}

float readDistance() {
    digitalWrite(trigPin_, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin_, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin_, LOW);

    long duration = pulseIn(echoPin_, HIGH);
    float distance = duration * 0.034 / 2.0;
    return distance;
}
