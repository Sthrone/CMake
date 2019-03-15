cmake_minimum_required(VERSION 3.10.2)
project(Student_Primer)

include_directories(include)

#set(SOURCES src/main.cpp src/Student.cpp)
file(GLOB SOURCES "src/*.cpp")

add_executable(testStudent ${SOURCES})