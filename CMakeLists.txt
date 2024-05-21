cmake_minimum_required(VERSION 3.28)
project(quickSortIterativo C)

set(CMAKE_C_STANDARD 11)

add_executable(quickSortIterativo main.c
        stack.c
        stack.h
        quicksort.c
        quicksort.h)
