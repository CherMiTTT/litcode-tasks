cmake_minimum_required(VERSION 3.28)
project("2490 - Circular Sentence")

set(CMAKE_CXX_STANDARD 23)

add_executable(solution tests.cpp
        solution.h
        solutions.cpp)
include_directories("../gtest")
target_link_libraries(solution gtest_main)