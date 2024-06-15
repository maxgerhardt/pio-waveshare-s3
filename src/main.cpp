#include <Arduino.h>

#define LED_PIN 33

void setup() {
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {

  digitalWrite(LED_PIN, HIGH);
  Serial.println("LED HIGH");
  delay(100);
  digitalWrite(LED_PIN, LOW);
  Serial.println("LED LOW");
  delay(100);
}