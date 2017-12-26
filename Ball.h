//
// Created by miles.shi on 2017/12/26.
//

#ifndef TESTDLL_BALL_H
#define TESTDLL_BALL_H

#include <string>
#include <ostream>


class Ball {
    int age;
    int height;
    std::string addr;
    std::string name;
public:
    int getHeight() const;

    Ball(int age, int height, const std::string &addr, const std::string &name);

    void setHeight(int height);

    int getAge() const;

    void setAge(int age);

    const std::string &getName() const;

    void setName(const std::string &name);

    const std::string &getAddr() const;

    void setAddr(const std::string &addr);

};

std::ostream &operator<<(std::ostream &os, const Ball &ball);




#endif //TESTDLL_BALL_H
