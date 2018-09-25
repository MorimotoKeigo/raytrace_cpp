cmake_minimum_required(VERSION 3.10)
project(Raytrace_CPP)

#set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

include_directories(./lib/stb-master)
link_directories(./lib/stb-master)

include_directories(./lib/sce_vectormath-master)
link_directories(./lib/sce_vectormath-master)

add_executable(Raytrace_CPP main.cpp rayt.h)