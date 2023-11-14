#ifndef I_LIGHT_H
#define I_LIGHT_H

class ILight {
public:
    virtual void turnOn();
    virtual void turnOff();
    virtual bool getIsOn();
};

#endif