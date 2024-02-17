#include <Arduino.h>

#define LED D7
void setup() {
    pinMode(LED, OUTPUT);
    digitalWrite(LED, LOW);
}

void ledON() {
    digitalWrite(LED, LOW);
}

void ledOFF() {
    digitalWrite(LED, HIGH);
}

void loop() {
    ledON();
    delay(200);

    ledOFF();
    delay(200);
}

