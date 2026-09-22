cmake_minimum_required(VERSION 3.20)
project(LearnCPP)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Each exercise has its own main(), so build it as a separate program.
add_executable(LearnCPP c0/helloworld.cpp)
add_executable(Variables c1/Variables.cpp)
add_executable(InitialisationType c1/InitialisationType.cpp)
add_executable(ListInitialisation c1/ListInitialisation.cpp)
add_executable(MaybeUnused c1/MaybeUnused.cpp)
add_executable(cout c1/cout.cpp)
add_executable(cin c1/cin.cpp)
add_executable(buffering c1/buffering.cpp)
add_executable(LiteralsVariables c1/LiteralsVariables.cpp)
add_executable(Expression c1/Expression.cpp)
add_executable(FirstProgram c1/FirstProgram.cpp)

# c0/PrintStandard.cpp contains only comments, so it has no executable target.
