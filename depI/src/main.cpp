#include <iostream>
#include "../lib/Config.h"
#include "../lib/IGPS.h"
#include "../lib/mockGPS.h"

void DriveRobot(IGPS& gps){
    float lat = gps.getLatitude();
    float lon = gps.getLongitude();
}

int main()
{
    // MockGPS gps;
    // DriveRobot(gps);

    Config config;
    DriveRobot(config.getGps());
}