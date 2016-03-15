# Install script for directory: /home/pi/manta_ws/src/orocos_kinematics_dynamics/python_orocos_kdl

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/pi/manta_ws/devel_isolated/python_orocos_kdl")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}/home/pi/manta_ws/devel_isolated/python_orocos_kdl/lib/python2.7/dist-packages/PyKDL.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/pi/manta_ws/devel_isolated/python_orocos_kdl/lib/python2.7/dist-packages/PyKDL.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/home/pi/manta_ws/devel_isolated/python_orocos_kdl/lib/python2.7/dist-packages/PyKDL.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/pi/manta_ws/devel_isolated/python_orocos_kdl/lib/python2.7/dist-packages/PyKDL.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/pi/manta_ws/devel_isolated/python_orocos_kdl/lib/python2.7/dist-packages" TYPE SHARED_LIBRARY FILES "/home/pi/manta_ws/build_isolated/python_orocos_kdl/devel/PyKDL.so")
  if(EXISTS "$ENV{DESTDIR}/home/pi/manta_ws/devel_isolated/python_orocos_kdl/lib/python2.7/dist-packages/PyKDL.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/pi/manta_ws/devel_isolated/python_orocos_kdl/lib/python2.7/dist-packages/PyKDL.so")
    file(RPATH_REMOVE
         FILE "$ENV{DESTDIR}/home/pi/manta_ws/devel_isolated/python_orocos_kdl/lib/python2.7/dist-packages/PyKDL.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/home/pi/manta_ws/devel_isolated/python_orocos_kdl/lib/python2.7/dist-packages/PyKDL.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/python_orocos_kdl" TYPE FILE FILES "/home/pi/manta_ws/src/orocos_kinematics_dynamics/python_orocos_kdl/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

file(WRITE "/home/pi/manta_ws/build_isolated/python_orocos_kdl/devel/${CMAKE_INSTALL_MANIFEST}" "")
foreach(file ${CMAKE_INSTALL_MANIFEST_FILES})
  file(APPEND "/home/pi/manta_ws/build_isolated/python_orocos_kdl/devel/${CMAKE_INSTALL_MANIFEST}" "${file}\n")
endforeach()