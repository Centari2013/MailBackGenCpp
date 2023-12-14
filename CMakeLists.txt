cmake_minimum_required(VERSION 3.10)

# Set your project name
project(MailBackGen)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Find the Qt package. Specify the components you need, e.g., Core, Widgets
find_package(Qt6 COMPONENTS Core Widgets REQUIRED)

# Include the current directory for the UI files
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Use the AUTOMOC and AUTOUIC if you have Q_OBJECT macros or .ui files
set(CMAKE_AUTOMOC ON)

# Add source files
add_executable(MailBackGen
        main.cpp
        MainWindow.cpp
        MainWindow.h
        sqlite3/sqlite3.h
        sqlite3/sqlite3.c
        sqlite3/sqlite3ext.h)

# Link the Qt libraries to your application
target_link_libraries(MailBackGen Qt6::Core Qt6::Widgets)
