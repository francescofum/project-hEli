

//motor config

#define MOTOR_1_PIN 3
#define MOTOR_2_PIN 5
#define MOTOR_3_PIN 6
#define MOTOR_4_PIN 9

#define THROTTLE_MIN_POWER 1000 //used with writeMicroseconds only, analogWrite requires 0-255
#define THROTTLE_MAX_POWER 2000

//mpu config (offsets) CHANGE THESE

#define XAcceloff 1
#define YAcceloff 1
#define ZAcceloff 1

#define XGyrooff 1
#define YGyrooff 1
#define ZGyrooff 1


//nRF24L01+  config

//PID config

#define kp_roll 0//change these accordinly
#define kd_roll 0
#define ki_roll 0

#define kp_pitch 0 
#define kd_pitch 0 
#define ki_pitch 0 

#define kp_yaw 0
#define kd_yaw 0
#define ki_yaw 0





