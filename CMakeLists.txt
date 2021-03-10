cmake_minimum_required(VERSION 3.10.2)
project(poo2_unit6_week8)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/${OUTPUT_DEBUG})

add_executable(poo2_unit6_week8
        main.cpp
        test_1.cpp
        test_2.cpp
        test_3.cpp
        test_4.cpp
        test_5.cpp
        test_6.cpp
        p1.cpp p1.h
        p2.cpp p2.h
        p3.cpp p3.h
        p4.cpp p4.h
        p5.cpp p5.h
        p6.cpp p6.h
        graph.h
        binary_tree.h
        heap_sort.h
        binary_search.h)

configure_file(test_1.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_2.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_3.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_4.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_5.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_6.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
