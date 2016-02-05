
//create instances of servo class for esc

Servo motor1;
Servo motor2;
Servo motor3;
Servo motor4;

//variables which will hold the pwm signal for the esc

byte motor_1_Write, motor_2_Write, motor_3Write, motor_4_Write;

void configure_motors(){

  motor1.attach(MOTOR_1_PIN);
  motor2.attach(MOTOR_2_PIN);
  motor3.attach(MOTOR_3_PIN);
  motor4.attach(MOTOR_4_PIN);

  //ensure motors don't spin at startup
  motor1.writeMicroseconds(THROTTLE_MIN_POWER);
  motor2.writeMicroseconds(THROTTLE_MIN_POWER);
  motor3.writeMicroseconds(THROTTLE_MIN_POWER);
  motor4.writeMicroseconds(THROTTLE_MIN_POWER);
}

