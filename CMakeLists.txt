cmake_minimum_required(VERSION 3.16)

project(lab5 VERSION 1.0)

set(CMAKE_CXX_STANDARD 14)

add_executable(${PROJECT_NAME} 
    main.cpp
    MyClass.cpp
    MyUpdatedClass.cpp
)