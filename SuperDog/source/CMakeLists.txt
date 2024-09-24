cmake_minimum_required(VERSION 3.16)

add_executable(SuperDog main.cpp ${MY_INCLUDE_DIR}/SuperDog.h SuperDog.cpp)
target_include_directories(SuperDog PUBLIC ${MY_INCLUDE_DIR})