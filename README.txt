1)cord_pub

Description : Transmits the cordinates of the tracked person's head in [X,Y,Z] form, as well as calculating the distance from the Kinect sensor.

To run :

    rocore
    roslaunch openni_launch openni.launch
    rosrun openni_tracker openni_tracker
    rosrun cord_pub cord_pub

2) simpub3

Description : Calculates the distances of the tracke user's head and uses them to issue tilt and turn commands to the Kinect tilt motor and mast servo so it can track a moving user's head. This is done by also trying to minimize movement due to the problematic nature of Kinect tracker when the sensor is also moving

To run :

    roslaunch simpub3 tracker2.launch
