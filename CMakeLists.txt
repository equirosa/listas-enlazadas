cmake_minimum_required(VERSION 3.0)

project(listas_enlazadas)

add_executable(listas_enlazadas main.cpp lista.h lista.cpp)

install(TARGETS listas_enlazadas RUNTIME DESTINATION bin)
