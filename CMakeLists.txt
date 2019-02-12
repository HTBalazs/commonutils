cmake_minimum_required(VERSION 3.5)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "-pthread -O3 -fPIC")
project(CommonUtils)

#Bring the headers into the project
include_directories(include)

#Add sources and includes:
file(GLOB SOURCES "src/*.cpp")
file(GLOB INCLUDES "include/*.h")

# Define library and include directories
set(STATIC_LIB_DIR ~/local/lib/commonutils)
set(INCLUDE_DIR ~/local/include/commonutils)

# set archive output to <project_directory>/lib
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY lib/)

# generate libCommonUtils.a file
add_library(commonutils STATIC ${SOURCES})

# install lib and include directories
install(TARGETS commonutils DESTINATION ${STATIC_LIB_DIR})
install(FILES ${INCLUDES} DESTINATION ${INCLUDE_DIR})
