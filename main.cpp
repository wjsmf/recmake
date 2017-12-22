
#include <iostream>
#include <cstdio>
#include "Ball.h"
#include "arj.h"
int main() {
    Ball ball(3,67,"bali is the best one!!");
    std::cout << ball << std::endl;

    std::cout << INC_DIR << std::endl;
    std::cout << DIR_SRCS << std::endl;
    std::cout << LINK_DIR << std::endl;
    return 0;
}