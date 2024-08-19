cmake_minimum_required(VERSION 3.10)

# Set the project name
project(Stirling)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)

# Find SDL2 package
find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS}, include)

# Add the executable
add_executable(Stirling src/main.cpp src/game.cpp)

target_link_libraries(Stirling ${SDL2_LIBRARIES})