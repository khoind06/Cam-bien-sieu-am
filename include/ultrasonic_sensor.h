#ifndef ULTRASONIC_SENSOR_H
#define ULTRASONIC_SENSOR_H

void initUltrasonic(int trigPin, int echoPin);
float readDistance();

#endif
