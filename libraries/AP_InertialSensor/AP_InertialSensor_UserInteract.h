
#ifndef __AP_INERTIAL_SENSOR_USER_INTERACT_H__
#define __AP_INERTIAL_SENSOR_USER_INTERACT_H__

#include <AP_Common/AP_Common.h>
#include <AP_Progmem/AP_Progmem.h>

/* Pure virtual interface class */
class AP_InertialSensor_UserInteract {
public:
    virtual bool blocking_read() = 0;
    virtual void printf(const char *, ...) FORMAT(2, 3) = 0;
};

#endif // __AP_INERTIAL_SENSOR_USER_INTERACT_H__

