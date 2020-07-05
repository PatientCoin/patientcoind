cmake_minimum_required(VERSION 3.10)

project(MedCoin)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(BUILD_UVW_LIBS 1)

add_subdirectory(thirdparty/uvw)

add_executable(patientcoind src/main.cpp)
target_link_libraries(patientcoind uvw-static)
