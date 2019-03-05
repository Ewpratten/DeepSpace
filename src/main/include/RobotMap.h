#ifndef _ROBOTMAP_HG_
#define _ROBOTMAP_HG_

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */

// Whenever possible, Macros and definitions are used in order to preserve memory

// Camera mappings
#define CAMERASERVER_DRIVER_CAMERA 1
#define CAMERASERVER_VISION_CAMERA 0

// DriveTrain motors
#define DRIVETRAIN_LEFT_FRONT_MOTOR  1
#define DRIVETRAIN_LEFT_REAR_MOTOR   2
#define DRIVETRAIN_RIGHT_FRONT_MOTOR 3
#define DRIVETRAIN_RIGHT_REAR_MOTOR  4

// DriveTrain motor invertions
#define DRIVETRAIN_LEFT_FRONT_MOTOR_INVERT  false
#define DRIVETRAIN_LEFT_REAR_MOTOR_INVERT   false
#define DRIVETRAIN_RIGHT_FRONT_MOTOR_INVERT true
#define DRIVETRAIN_RIGHT_REAR_MOTOR_INVERT  true

// DEADZONES
#define XBOX_DEADZONE_RIGHT_JOY 0.1
#define XBOX_DEADZONE_LEFT_JOY 0.1

//Climb Motors
#define CLIMB_ARM_MOTOR 5

#define CLIMB_ARM_MOTOR_2 6
#define CLIMB_LEG_MOTOR 8
 
#define CRAWL_LEFT_MOTOR 1
#define CRAWL_RIGHT_MOTOR 0

//Climb Ultrasonic
#define CLIMB_ULTRASONIC 1
#define DRIVETRAIN_RADIAL_SENSITIVITY_CUTOFF 0.8

// Slider
#define SLIDER_MOTOR 7

// Piston
#define PCM_CAN_ID 11

#define PISTON_ID 7

// Light
#define LIGHT_ID 0

// Hatch Gripper 
#define HatchGripper_FORWARD_ID 1
#define HatchGripper_REVERSE_ID 2

#define FLAP_ID_FORWARD 5
#define FLAP_ID_REVERSE 6

// DriveWithJoystick Settings
#define DRIVEWITHJOYSTICK_ROTATION_LIMITER 0.95

// Xbox controllers
#define XBOX_CONTROLLER_DRIVE_PORT    0
#define XBOX_CONTROLLER_OPERATOR_PORT 1
#define XBOX_CONTROLLER_DEBUG_PORT    2

// Handy macros to save Python programmers from going crazy
#define False false
#define True  true
#define elif  else if

// frc::GenericHID::JoystickHand is too long
#define Hand frc::GenericHID::JoystickHand

// Reasons why I shouldn't be allowed to program
#define WinGame(_class_) frc::StartRobot<_class_>()

#define Header(x) std::cout << x
#define EndHeader() std::cout << "DONE" << std::endl

#endif // _ROBOTMAP_HG_