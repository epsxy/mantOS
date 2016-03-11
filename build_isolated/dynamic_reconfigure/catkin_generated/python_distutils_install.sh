#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/pi/manta_ws/src/dynamic_reconfigure"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/pi/manta_ws/install_isolated/lib/python2.7/dist-packages:/home/pi/manta_ws/build_isolated/dynamic_reconfigure/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/pi/manta_ws/build_isolated/dynamic_reconfigure" \
    "/usr/bin/python" \
    "/home/pi/manta_ws/src/dynamic_reconfigure/setup.py" \
    build --build-base "/home/pi/manta_ws/build_isolated/dynamic_reconfigure" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/pi/manta_ws/install_isolated" --install-scripts="/home/pi/manta_ws/install_isolated/bin"