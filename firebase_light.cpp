#include "firebase_light.h"

#include <FirebaseESP8266.h>

void FirebaseLight::initialize() {
    Firebase.setStreamCallback(Firebase);
}

void FirebaseLight::turnOn() {
    light->turnOn();
}

void FirebaseLight::turnOff() {
    light->turnOff();
}

FirebaseLight::~FirebaseLight() {
    delete(light);
}