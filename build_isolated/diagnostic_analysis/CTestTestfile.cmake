# CMake generated Testfile for 
# Source directory: /home/pi/manta_ws/src/diagnostics/diagnostic_analysis
# Build directory: /home/pi/manta_ws/build_isolated/diagnostic_analysis
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_diagnostic_analysis_nosetests_test.bag_csv_test.py "/home/pi/manta_ws/build_isolated/diagnostic_analysis/catkin_generated/env_cached.sh" "/usr/bin/python" "/opt/ros/indigo/share/catkin/cmake/test/run_tests.py" "/home/pi/manta_ws/build_isolated/diagnostic_analysis/test_results/diagnostic_analysis/nosetests-test.bag_csv_test.py.xml" "--return-code" "/usr/bin/cmake -E make_directory /home/pi/manta_ws/build_isolated/diagnostic_analysis/test_results/diagnostic_analysis" "/usr/bin/nosetests-2.7 -P --process-timeout=60 /home/pi/manta_ws/src/diagnostics/diagnostic_analysis/test/bag_csv_test.py --with-xunit --xunit-file=/home/pi/manta_ws/build_isolated/diagnostic_analysis/test_results/diagnostic_analysis/nosetests-test.bag_csv_test.py.xml")
subdirs(gtest)