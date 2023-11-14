#include <Arduino.h>
#include <FirebaseESP8266.h>
#include "light.h"

void setup() {
    Light* light0 = new Light(13);
    Light* light1 = new Light(11);
    Light* light2 = new Light(8);
    Light* light3 = new Light(5);
}