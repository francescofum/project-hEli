//variables

double PID_roll_input, PID_roll_output, PID_roll_setpoint;
double PID_pitch_input, PID_pitch_output, PID_pitch_setpoint;
//double PID_yaw_input, PID_yaw_output, PID_yaw_setpoint;

PID roll (&PID_roll_input, &PID_roll_output, &PID_roll_setpoint, kp_roll, ki_roll, kd_roll, REVERSE);
PID pitch (&PID_pitch_input, &PID_pitch_output, &PID_pitch_setpoint, kp_pitch, ki_pitch, kd_pitch, REVERSE);
//PID yaw(&PID_yaw_input, &PID_yaw_output, &PID_yawl_setpoint, kp_yaw, ki_yaw, kd_yaw, REVERSE);

void configure_PID(){

  roll.SetMode(AUTOMATIC); //basically turns the pid on
  pitch.SetMode(AUTOMATIC);//by default it is off for some reason
 // yaw.SetMode(AUTOMATIC);
 
//  roll.SetOutputLimits(min,max); //im not sure i need to change these yet
//  pitch.SetOutputLimits(min,max);
//  yaw.SetOutputLimits(min,max);

  //roll.SetSampleTime(20); //again i've included these to just in case they 
  //pitch.SetSampleTime(20);//are needed further on. i will comment them out
  //yaw.SetSampleTime(20);//for now 
}

