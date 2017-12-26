
#include <iostream>
#include <cstdio>
#include "Ball.h"
#include "cmake-build-debug/arj.h"
int main() {
    Ball ball(2,4,"fawef","iiiooo");
    std::cout << ball << std::endl;

    std::cout << INC_DIR << std::endl;
    std::cout << DIR_SRCS << std::endl;
    std::cout << LINK_DIR << std::endl;
    return 0;
}