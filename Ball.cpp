//
// Created by miles.shi on 2017/12/21.
//


#include "Ball.h"

std::ostream &operator<<(std::ostream &os, const Ball &ball) {
    os << ball.a << " and " << ball.ch << " and " << ball.name << std::endl;
    return os;
}

Ball::Ball(int a, char ch, const std::string &name) : a(a), ch(ch), name(name) {}
