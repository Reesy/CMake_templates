cmake_minimum_required(VERSION 3.4.0)
project(something_project)

#brings in the headers
include_directories(include)

#manual way:
#set(SOURCES src/helloWorld.cpp src/Something.cpp)

#Better for wildcard additions
file(GLOB SOURCES "src/*.cpp")

add_executable(something_Executable ${SOURCES})