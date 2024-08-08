# Minimum CMake version required
cmake_minimum_required(VERSION 3.10)

# Project name and version
project(dev-dashboard VERSION 1.0)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Enable generation of compile_commands.json
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Include FetchContent module
include(FetchContent)

# Fetch ftxui library
FetchContent_Declare(
  ftxui
  GIT_REPOSITORY https://github.com/ArthurSonzogni/ftxui
  GIT_TAG v5.0.0)

FetchContent_GetProperties(ftxui)
if(NOT ftxui_POPULATED)
  FetchContent_Populate(ftxui)
  add_subdirectory(${ftxui_SOURCE_DIR} ${ftxui_BINARY_DIR} EXCLUDE_FROM_ALL)
endif()

# Gather all source files in src/ directory
file(GLOB_RECURSE SOURCES "src/*.cpp")

# Gather all header files in headers/ directory
include_directories(headers)

# Add the executable
add_executable(dev-dashboard ${SOURCES})

# Link the executable with ftxui libraries
target_link_libraries(dev-dashboard ftxui::screen ftxui::dom ftxui::component)
