#include <Wire.h>
#include <MPU6050.h>

MPU6050 mpu;

void setup() {
  Serial.begin(9600);
  Wire.begin();
  mpu.initialize();
}

void loop() {
  int16_t ax, ay, az;
  mpu.getAcceleration(&ax, &ay, &az);

  if (ay > 10000) Serial.println("FORWARD");
  else if (ay < -10000) Serial.println("BACKWARD");
  else if (ax > 10000) Serial.println("RIGHT");
  else if (ax < -10000) Serial.println("LEFT");
  else Serial.println("STOP");

  delay(300);
}