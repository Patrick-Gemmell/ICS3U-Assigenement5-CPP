// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Patrick Gemmell
// Created on: Oct 2019
// This program calculates radius from volume

#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>



float CalculateArea(int volumeFunction) {
    // calculate area
    float partOne;
    float partTwo;
    float radius;
    float other;
    // process
partOne = (volumeFunction/(4*M_PI));
    partTwo = (3*partOne);
    other = (0.33);
    radius = pow(partTwo, other);

    // output
    return radius;
}

main() {
    // this function gets length and width
    float radius;
    std::string volumeFromUser;
    float volumeFromUserInt;

    // input
    std::cout << "Enter the volume (cm): ";
    std::cin >> volumeFromUser;
    std::cout << std::endl;
    try {
        volumeFromUserInt = std::stoi(volumeFromUser);

        // call functions
        radius = CalculateArea(volumeFromUserInt);
        std::cout << "The radius is " << radius << "cm" << std::endl;
    } catch(...) {
        std::cout << "invalid integer" << std::endl;
    }
}
