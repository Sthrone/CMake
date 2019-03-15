cmake_minimum_required(VERSION 3.10.2)
project(Dinamicka_Biblioteka)
set(CMAKE_BUILD_TYPE Release)

include_directories(include)
file(GLOB SOURCES "src/*.cpp")

add_library(student SHARED ${SOURCES})

install(TARGETS student DESTINATION /usr/lib)