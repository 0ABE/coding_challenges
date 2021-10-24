# CMakeList.txt : CMake project for FizzBuzz, include source and define
# project specific logic here.
#
# usage: cmake . -B out -G Ninja
#        cmake --build out
#

cmake_minimum_required (VERSION 3.8)

project ("FizzBuzz")

# Add source to this project's executable.
add_executable (FizzBuzz "main.cpp" "FizzBuzz.cpp" "FizzBuzz.h")

# TODO: Add tests and install targets if needed.
