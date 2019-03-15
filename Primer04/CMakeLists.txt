cmake_minimum_required(VERSION 3.10.2)
project(Test_Biblioteke)

set(PROJECT_LINK_LIBS libstudent.so)
link_directories(~/Desktop/CMake/Primer03/build)
include_directories(~/Desktop/CMake/Primer03/include)

add_executable(libtest main.cpp)
target_link_libraries(libtest ${PROJECT_LINK_LIBS})