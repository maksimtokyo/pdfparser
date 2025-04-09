cmake_minimum_required(VERSION 3.0)


project(pdf)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(ZLIB REQUIRED)
find_package(Qt6 REQUIRED COMPONENTS Gui)
add_executable(pdf
    test.cpp
    custombuffer.cpp
    custombuffer.hpp
    pdfparser.cpp
    pdfparser.h
    pdfparsererror.cpp
    pdfparsererror.h
    customfunction.cpp
    customfunction.h
    customtypespdf.cpp
    customtypespdf.h
)
target_link_libraries( pdf

    PRIVATE Qt6::Gui
    ZLIB::ZLIB
)
