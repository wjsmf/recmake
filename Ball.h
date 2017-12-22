//
// Created by miles.shi on 2017/12/21.
//

#ifndef TESTDLL_BALL_H
#define TESTDLL_BALL_H


#include <ostream>

class Ball {
    int a;
    char ch;
    std::string name;
public:
    Ball(int a, char ch, const std::string &name);

    friend std::ostream &operator<<(std::ostream &os, const Ball &ball);

};


#endif //TESTDLL_BALL_H
