#pragma once
#include"IGPS.h"

class MockGPS: public IGPS
{
    //Inheritated via IGPS
    virtual float getLatitude() override;
    virtual float getLongitude() override;
};