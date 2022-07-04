#set(CMAKE_BUILD_TYPE Debug)
cmake_minimum_required(VERSION 3.12.0)
project(TerminalMenu)
file(GLOB_RECURSE terminal_menu_SRC CONFIGURE_DEPENDS "*.h" "*.cpp")
set(HEADER_ONLY_SOURCES ../lib/catch.hpp ../lib/json.hpp)

#target_include_directories(omega PUBLIC ${PROJECT_SOURCE_DIR}/lib/opus/include
add_executable(TerminalMenu ${omega_SRC} ${HEADER_ONLY_SOURCES})

set(FETCHCONTENT_BASE_DIR lib)
include(FetchContent)
FetchContent_Declare(
   mdcore
   GIT_REPOSITORY https://github.com/MaxDistructo/mdcore.git
   GIT_TAG        994d57924ba3e2397c667c6675bce782e3605a4f  
)
FetchContent_MakeAvaliable(mdcore)

#add_subdirectory(lib/mdcore-cpp)
#find_package( Threads )
#find_package(OpenSSL REQUIRED)
target_link_libraries(omega mdcore)
set_property(TARGET omega PROPERTY CXX_STANDARD 17)
