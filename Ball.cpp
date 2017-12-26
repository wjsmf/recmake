//
// Created by miles.shi on 2017/12/26.
//

#include "Ball.h"

int Ball::getAge() const {
    return age;
}

void Ball::setAge(int age) {
    Ball::age = age;
}

const std::string &Ball::getName() const {
    return name;
}

void Ball::setName(const std::string &name) {
    Ball::name = name;
}

const std::string &Ball::getAddr() const {
    return addr;
}

void Ball::setAddr(const std::string &addr) {
    Ball::addr = addr;
}

int Ball::getHeight() const {
    return height;
}

void Ball::setHeight(int height) {
    Ball::height = height;
}

Ball::Ball(int age, int height, const std::string &addr, const std::string &name) : age(age), height(height),
                                                                                         addr(addr), name(name) {}

 std::ostream &operator<<(std::ostream &os, const Ball &ball) {
    os << "age: " << ball.getAge() << " height: " << ball.getHeight() << " addr: "
       << ball.getAddr() << " name: " << ball.getName();
    return os;
}
