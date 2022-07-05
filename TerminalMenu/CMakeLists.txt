#set(CMAKE_BUILD_TYPE Debug)
cmake_minimum_required(VERSION 3.14.0)
project(TerminalMenu)
file(GLOB_RECURSE terminal_menu_SRC CONFIGURE_DEPENDS "src/*.h" "src/*.cpp")
#set(HEADER_ONLY_SOURCES ../lib/catch.hpp ../lib/json.hpp)

#target_include_directories(omega PUBLIC ${PROJECT_SOURCE_DIR}/lib/opus/include
add_executable(TerminalMenu ${terminal_menu_SRC})

include(FetchContent)
FetchContent_Declare(
   mdcore
   GIT_REPOSITORY https://github.com/MaxDistructo/mdcore.git
   GIT_TAG        f08b52a48e53c3c0c20a9395a8eac25c82e0df81  
)
FetchContent_MakeAvailable(mdcore)

#add_subdirectory(lib/mdcore-cpp)
#find_package( Threads )
#find_package(OpenSSL REQUIRED)
target_link_libraries(TerminalMenu mdcore)
target_include_directories(TerminalMenu
	PUBLIC
		${mdcore_SOURCE_DIR}/include
)
set_property(TARGET TerminalMenu PROPERTY CXX_STANDARD 17)
