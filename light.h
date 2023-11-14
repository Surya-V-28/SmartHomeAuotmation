#ifndef LIGHT_H
#define LIGHT_H

#include "i_light.h"

class Light : public ILight {
public:
    Light(int pin);
9
    void turnOn();

    void turnOff();

    bool getIsOn();

protected:
    int pin;
    
    bool isOn = false;
};
#endif