# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/denismana/Documents/PAOO/PAOO/Lucrarea_4/project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/denismana/Documents/PAOO/PAOO/Lucrarea_4/project/build

# Include any dependencies generated for this target.
include subpro1/CMakeFiles/myapp.dir/depend.make

# Include the progress variables for this target.
include subpro1/CMakeFiles/myapp.dir/progress.make

# Include the compile flags for this target's objects.
include subpro1/CMakeFiles/myapp.dir/flags.make

subpro1/CMakeFiles/myapp.dir/pb.cpp.o: subpro1/CMakeFiles/myapp.dir/flags.make
subpro1/CMakeFiles/myapp.dir/pb.cpp.o: ../subpro1/pb.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/denismana/Documents/PAOO/PAOO/Lucrarea_4/project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object subpro1/CMakeFiles/myapp.dir/pb.cpp.o"
	cd /home/denismana/Documents/PAOO/PAOO/Lucrarea_4/project/build/subpro1 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/myapp.dir/pb.cpp.o -c /home/denismana/Documents/PAOO/PAOO/Lucrarea_4/project/subpro1/pb.cpp

subpro1/CMakeFiles/myapp.dir/pb.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myapp.dir/pb.cpp.i"
	cd /home/denismana/Documents/PAOO/PAOO/Lucrarea_4/project/build/subpro1 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/denismana/Documents/PAOO/PAOO/Lucrarea_4/project/subpro1/pb.cpp > CMakeFiles/myapp.dir/pb.cpp.i

subpro1/CMakeFiles/myapp.dir/pb.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myapp.dir/pb.cpp.s"
	cd /home/denismana/Documents/PAOO/PAOO/Lucrarea_4/project/build/subpro1 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/denismana/Documents/PAOO/PAOO/Lucrarea_4/project/subpro1/pb.cpp -o CMakeFiles/myapp.dir/pb.cpp.s

# Object files for target myapp
myapp_OBJECTS = \
"CMakeFiles/myapp.dir/pb.cpp.o"

# External object files for target myapp
myapp_EXTERNAL_OBJECTS =

subpro1/myapp: subpro1/CMakeFiles/myapp.dir/pb.cpp.o
subpro1/myapp: subpro1/CMakeFiles/myapp.dir/build.make
subpro1/myapp: subpro1/CMakeFiles/myapp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/denismana/Documents/PAOO/PAOO/Lucrarea_4/project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable myapp"
	cd /home/denismana/Documents/PAOO/PAOO/Lucrarea_4/project/build/subpro1 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/myapp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
subpro1/CMakeFiles/myapp.dir/build: subpro1/myapp

.PHONY : subpro1/CMakeFiles/myapp.dir/build

subpro1/CMakeFiles/myapp.dir/clean:
	cd /home/denismana/Documents/PAOO/PAOO/Lucrarea_4/project/build/subpro1 && $(CMAKE_COMMAND) -P CMakeFiles/myapp.dir/cmake_clean.cmake
.PHONY : subpro1/CMakeFiles/myapp.dir/clean

subpro1/CMakeFiles/myapp.dir/depend:
	cd /home/denismana/Documents/PAOO/PAOO/Lucrarea_4/project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/denismana/Documents/PAOO/PAOO/Lucrarea_4/project /home/denismana/Documents/PAOO/PAOO/Lucrarea_4/project/subpro1 /home/denismana/Documents/PAOO/PAOO/Lucrarea_4/project/build /home/denismana/Documents/PAOO/PAOO/Lucrarea_4/project/build/subpro1 /home/denismana/Documents/PAOO/PAOO/Lucrarea_4/project/build/subpro1/CMakeFiles/myapp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : subpro1/CMakeFiles/myapp.dir/depend

