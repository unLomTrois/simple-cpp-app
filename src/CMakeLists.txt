include_directories(${PROJECT_SOURCE_DIR}/include/)

add_library(hello STATIC hello.cpp)

add_executable(simple-cpp-app main.cpp)
target_link_libraries(simple-cpp-app hello)