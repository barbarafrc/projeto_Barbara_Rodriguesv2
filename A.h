#ifndef A_H
#define A_H

class A {
private:
    int A1;
    float A2;

public:
    A();
    int getA1() const;
    void setA1(int value);
    float getA2() const;
    void setA2(float value);
    void MA1();
    void MA2();
    void MA3();
    int getSoma(int a, int b);
};
#endif
