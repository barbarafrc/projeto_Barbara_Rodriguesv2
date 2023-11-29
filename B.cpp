#include "B.h"
#include <iostream>

B::B() : B1(0), B2(0.0) {}

int B::getB1() const {
    return B1;
}

void B::setB1(int value) {
    B1 = value;
}

float B::getB2() const {
    return B2;
}

void B::setB2(float value) {
    B2 = value;
}

void B::MB1() {
    std::cout << "Método MB1() chamado." << std::endl;
}

void B::MB2() {
    std::cout << "Método MB2() chamado." << std::endl;
}
 void B::MB3() {
     std::cout << "Método MC3() chamado." << std::endl;
 }