# CMake generated Testfile for 
# Source directory: /home/pi/manta_ws/src/diagnostics/diagnostic_updater
# Build directory: /home/pi/manta_ws/build_isolated/diagnostic_updater
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_diagnostic_updater_rostest_test_diagnostic_updater_test.xml "/home/pi/manta_ws/build_isolated/diagnostic_updater/catkin_generated/env_cached.sh" "/usr/bin/python" "/opt/ros/indigo/share/catkin/cmake/test/run_tests.py" "/home/pi/manta_ws/build_isolated/diagnostic_updater/test_results/diagnostic_updater/rostest-test_diagnostic_updater_test.xml" "--return-code" "/opt/ros/indigo/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/pi/manta_ws/src/diagnostics/diagnostic_updater --package=diagnostic_updater --results-filename test_diagnostic_updater_test.xml --results-base-dir \"/home/pi/manta_ws/build_isolated/diagnostic_updater/test_results\" /home/pi/manta_ws/src/diagnostics/diagnostic_updater/test/diagnostic_updater_test.xml ")
add_test(_ctest_diagnostic_updater_rostest_test_diagnostic_updater_fast_test.xml "/home/pi/manta_ws/build_isolated/diagnostic_updater/catkin_generated/env_cached.sh" "/usr/bin/python" "/opt/ros/indigo/share/catkin/cmake/test/run_tests.py" "/home/pi/manta_ws/build_isolated/diagnostic_updater/test_results/diagnostic_updater/rostest-test_diagnostic_updater_fast_test.xml" "--return-code" "/opt/ros/indigo/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/pi/manta_ws/src/diagnostics/diagnostic_updater --package=diagnostic_updater --results-filename test_diagnostic_updater_fast_test.xml --results-base-dir \"/home/pi/manta_ws/build_isolated/diagnostic_updater/test_results\" /home/pi/manta_ws/src/diagnostics/diagnostic_updater/test/diagnostic_updater_fast_test.xml ")
subdirs(gtest)