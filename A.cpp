#include "A.h"
#include <iostream>

A::A() : A1(0), A2(0.0) {}

int A::getA1() const {
    return A1;
}

void A::setA1(int value) {
    A1 = value;
}

float A::getA2() const {
    return A2;
}

void A::setA2(float value) {
    A2 = value;
}

void A::MA1() {
    std::cout << "Método MA1() chamado." << std::endl;
}

void A::MA2() {
    std::cout << "Método MA2() chamado." << std::endl;
}

void A::MA3() {
    std::cout << "Alteração na classe A a partir do clone." << std::endl;
}
