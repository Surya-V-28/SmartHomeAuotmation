#ifndef FIREBASE_LIGHT
#define FIREBASE_LIGHT

#include "light.h"
#include "i_light.h"

class FirebaseLight : public ILight {
public:
    FirebaseLight(int pin) {
        light = new Light(pin);
    }

    void initialize();

    void turnOn() override;
    
    void turnOff() override;

    ~FirebaseLight();

private:
    Light* light;
};

#endif