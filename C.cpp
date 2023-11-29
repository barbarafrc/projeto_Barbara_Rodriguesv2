#include "C.h"
#include <iostream>

C::C() : C2(0) {}

std::string C::getC1() const {
    return C1;
}

void C::setC1(const std::string& value) {
    C1 = value;
}

int C::getC2() const {
    return C2;
}

void C::setC2(int value) {
    C2 = value;
}

void C::MC1() {
    std::cout << "Método MC1() chamado." << std::endl;
}

void C::MC2() {
    std::cout << "Método MC2() chamado." << std::endl;
}

void C::MC3() {
    std::cout << "Método MC2() chamado." << std::endl;
}
