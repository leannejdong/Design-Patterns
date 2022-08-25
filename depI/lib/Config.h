#pragma once
#include "IGPS.h"
#include "mockGPS.h"
#include "realGPS.h"

class Config
{
    private: 
    MockGPS gps;

    public:
    IGPS& getGps(){
        return gps;
    }


};
