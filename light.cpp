#include "light.h"
#include <Arduino.h>

Light::Light(int pin) {
    this->pin = pin;
    pinMode(pin, OUTPUT);
}

void Light::turnOn() {
    if (isOn) return;

    digitalWrite(pin, HIGH);
}

void Light::turnOff() {
    if (!isOn) return;
    
    digitalWrite(pin, LOW);
}

bool Light::getIsOn() {
    return isOn;
}