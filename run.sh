#!/bin/bash

clear

clang++ \
-std=c++20 -I/usr/local/include -L/usr/local/lib -lfmt  \
src/first_program.cpp -o run/runnable

./run/runnable


