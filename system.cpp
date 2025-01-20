#include <iostream>
#include "system.h"

// The update rule
void System::updateRule(){
    std::cout<<"Updating the system...\n";
}

// Defining the constructor
System::System(int particleNumber, double sideLength, double timeStep,double noiseStrength){
    this->particleNumber = particleNumber;
    this->noiseStrength = noiseStrength;
    std::cout<<"I am constructing the System!\n";
}
