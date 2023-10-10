# CMakeList.txt : CMake project for Cv04, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (Cv04 "Cv04.cpp" "Cv04.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Cv04 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
