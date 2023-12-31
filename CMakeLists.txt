cmake_minimum_required(VERSION 3.5)
project(raft-cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_FLAGS "${CMKAE_CXX_FLAGS} -g -Wall")

set(RAFT_CPP_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)
set(GOOGLE_TEST_HEADER ${PROJECT_BINARY_DIR}/_deps/googletest-src/googletest)

include_directories(${RAFT_CPP_INCLUDE_DIR})

Include(FetchContent)

FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    # release-1.11.0
    GIT_TAG        e2239ee6043f73722e7aa812a459f54a28552929
)
FetchContent_MakeAvailable(googletest)

add_subdirectory(src)
add_subdirectory(tests)