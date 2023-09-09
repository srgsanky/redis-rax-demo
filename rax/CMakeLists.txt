cmake_minimum_required(VERSION 3.21)

project(rax LANGUAGES C)

add_library(rax rax.c zmalloc.c)
# Include the library for math.h
# https://stackoverflow.com/questions/44175151/what-is-the-meaning-of-lm-in-gcc
target_link_libraries(rax PRIVATE m)
