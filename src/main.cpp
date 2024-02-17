#include <Arduino.h>
#include <Servo.h>

Servo allServos = Servo();

#define LED D7
#define PWM_RED D10
#define PWM_YELLOW D8
#define PWM_GREEN D3
void setup() {
    pinMode(LED, OUTPUT);
    digitalWrite(LED, LOW);

    allServos.attach(PWM_RED, 1000, 2000);
    allServos.attach(PWM_YELLOW, 1000, 2000);
    allServos.attach(PWM_GREEN, 1000, 2000);
}

void ledON() {
    digitalWrite(LED, LOW);
}

void ledOFF() {
    digitalWrite(LED, HIGH);
}

void loop() {
    ledON();
    delay(100);

    ledOFF();
    delay(100);

    allServos.write(PWM_RED, 0);
    allServos.write(PWM_YELLOW, 90);
    allServos.write(PWM_GREEN, 180);
}

