#ifndef C_H
#define C_H

#include <string>

class C {
private:
    std::string C1;
    int C2;

public:
    C();
    std::string getC1() const;
    void setC1(const std::string& value);
    int getC2() const;
    void setC2(int value);
    void MC1();
    void MC2();
    void MC3();
};

#endif
