cmake_minimum_required(VERSION 3.30)
project(Employee_Management_System)

set(CMAKE_CXX_STANDARD 11)

add_executable(Employee_Management_System main.cpp
        Node.h
        List.h
        Implementation.cpp)
