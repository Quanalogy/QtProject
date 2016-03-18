cmake_minimum_required(VERSION 3.3)
project(QtProject)
set(CMAKE_AUTOMOC ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_AUTOMOC ON)
find_package(Qt5 REQUIRED COMPONENTS Core Widgets Gui)


set(SOURCE_FILES main.cpp MainWindow.cpp MainWindow.h ui_mainwindow.h)
add_executable(QtProject ${SOURCE_FILES})

target_link_libraries(QtProject Qt5::Core Qt5::Widgets Qt5::Gui)