cmake_minimum_required(VERSION 3.28)
project(litcode_solutions)

set(CMAKE_CXX_STANDARD 23)

add_executable(solution solution.h solution.cpp
        tests.cpp)
include_directories("../gtest")
target_link_libraries(solution gtest_main)