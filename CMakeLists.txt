cmake_minimum_required(VERSION 3.9)
project(testDll)

AUX_SOURCE_DIRECTORY(. DIR_SRCS)


set(CMAKE_CXX_STANDARD 11)

set(ONELIBDIR C:/Users/miles.shi/CLionProjects/squre)
set(INC_DIR "${ONELIBDIR}")
set(LINK_DIR "${ONELIBDIR}/cmake-build-debug/")
include_directories(${INC_DIR} ${PROJECT_BINARY_DIR})
link_directories(${LINK_DIR})
link_libraries(squre)
configure_file("${PROJECT_SOURCE_DIR}/arj.h.in" "${PROJECT_BINARY_DIR}/arj.h")

add_executable(testDll main.cpp Ball.cpp Ball.h)

