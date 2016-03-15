# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.0

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
CMAKE_SOURCE_DIR = /home/pi/manta_ws/src/urg_c

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pi/manta_ws/build_isolated/urg_c

# Include any dependencies generated for this target.
include CMakeFiles/calculate_xy.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/calculate_xy.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/calculate_xy.dir/flags.make

CMakeFiles/calculate_xy.dir/current/samples/calculate_xy.c.o: CMakeFiles/calculate_xy.dir/flags.make
CMakeFiles/calculate_xy.dir/current/samples/calculate_xy.c.o: /home/pi/manta_ws/src/urg_c/current/samples/calculate_xy.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/pi/manta_ws/build_isolated/urg_c/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/calculate_xy.dir/current/samples/calculate_xy.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/calculate_xy.dir/current/samples/calculate_xy.c.o   -c /home/pi/manta_ws/src/urg_c/current/samples/calculate_xy.c

CMakeFiles/calculate_xy.dir/current/samples/calculate_xy.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/calculate_xy.dir/current/samples/calculate_xy.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/pi/manta_ws/src/urg_c/current/samples/calculate_xy.c > CMakeFiles/calculate_xy.dir/current/samples/calculate_xy.c.i

CMakeFiles/calculate_xy.dir/current/samples/calculate_xy.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/calculate_xy.dir/current/samples/calculate_xy.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/pi/manta_ws/src/urg_c/current/samples/calculate_xy.c -o CMakeFiles/calculate_xy.dir/current/samples/calculate_xy.c.s

CMakeFiles/calculate_xy.dir/current/samples/calculate_xy.c.o.requires:
.PHONY : CMakeFiles/calculate_xy.dir/current/samples/calculate_xy.c.o.requires

CMakeFiles/calculate_xy.dir/current/samples/calculate_xy.c.o.provides: CMakeFiles/calculate_xy.dir/current/samples/calculate_xy.c.o.requires
	$(MAKE) -f CMakeFiles/calculate_xy.dir/build.make CMakeFiles/calculate_xy.dir/current/samples/calculate_xy.c.o.provides.build
.PHONY : CMakeFiles/calculate_xy.dir/current/samples/calculate_xy.c.o.provides

CMakeFiles/calculate_xy.dir/current/samples/calculate_xy.c.o.provides.build: CMakeFiles/calculate_xy.dir/current/samples/calculate_xy.c.o

# Object files for target calculate_xy
calculate_xy_OBJECTS = \
"CMakeFiles/calculate_xy.dir/current/samples/calculate_xy.c.o"

# External object files for target calculate_xy
calculate_xy_EXTERNAL_OBJECTS =

/home/pi/manta_ws/devel_isolated/urg_c/lib/urg_c/calculate_xy: CMakeFiles/calculate_xy.dir/current/samples/calculate_xy.c.o
/home/pi/manta_ws/devel_isolated/urg_c/lib/urg_c/calculate_xy: CMakeFiles/calculate_xy.dir/build.make
/home/pi/manta_ws/devel_isolated/urg_c/lib/urg_c/calculate_xy: /home/pi/manta_ws/devel_isolated/urg_c/lib/libliburg_c.so
/home/pi/manta_ws/devel_isolated/urg_c/lib/urg_c/calculate_xy: /home/pi/manta_ws/devel_isolated/urg_c/lib/libopen_urg_sensor.so
/home/pi/manta_ws/devel_isolated/urg_c/lib/urg_c/calculate_xy: /home/pi/manta_ws/devel_isolated/urg_c/lib/libliburg_c.so
/home/pi/manta_ws/devel_isolated/urg_c/lib/urg_c/calculate_xy: CMakeFiles/calculate_xy.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C executable /home/pi/manta_ws/devel_isolated/urg_c/lib/urg_c/calculate_xy"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/calculate_xy.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/calculate_xy.dir/build: /home/pi/manta_ws/devel_isolated/urg_c/lib/urg_c/calculate_xy
.PHONY : CMakeFiles/calculate_xy.dir/build

CMakeFiles/calculate_xy.dir/requires: CMakeFiles/calculate_xy.dir/current/samples/calculate_xy.c.o.requires
.PHONY : CMakeFiles/calculate_xy.dir/requires

CMakeFiles/calculate_xy.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/calculate_xy.dir/cmake_clean.cmake
.PHONY : CMakeFiles/calculate_xy.dir/clean

CMakeFiles/calculate_xy.dir/depend:
	cd /home/pi/manta_ws/build_isolated/urg_c && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pi/manta_ws/src/urg_c /home/pi/manta_ws/src/urg_c /home/pi/manta_ws/build_isolated/urg_c /home/pi/manta_ws/build_isolated/urg_c /home/pi/manta_ws/build_isolated/urg_c/CMakeFiles/calculate_xy.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/calculate_xy.dir/depend

