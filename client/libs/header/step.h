//
// Created by parallels on 1/18/17.
//

#ifndef OS_ROBOT_PROJECT_FALL2016_STEP_H
#define OS_ROBOT_PROJECT_FALL2016_STEP_H

#include "config.h"
#include "motorControl.h"



typedef struct {
    void (*update_all) (MotorInfo*, SensorInfo*);
    void (*run_motor) (MotorInfo*, SensorInfo*);
    void (*init_step) (MotorInfo*, SensorInfo*);
    // params for different steps

    // robotrunstraightuntilwall: distance until hit wall threshold to stop
    float robot_run_straight_until_wall_distance_to_stop;

    // robotrunstraightstep: color read threshold
    int robot_run_straight_color_threshold; // color threshold to stop

    // robotturnleftstep:
    int robot_turn_left_degree;

    // robotturnrightstep:
    int robot_turn_right_degree;

    // robotturnaroundstep:

    // robotruntimed:
    float robot_run_timed_time_to_run; // time to run in second

} step;


#endif //OS_ROBOT_PROJECT_FALL2016_STEP_H
