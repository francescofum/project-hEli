//THIS CODE CAN BE MORE EFFICIENT, READ SECOND COMMENT
//this is the code used to get the roll,pitch,yaw angle of the quad
//for now ill only concentrate on roll and pitch and leave yaw for the end
//this code uses a complementary filter to merge the gyro+accelerometer values to get a more accurate reading
//however a kalman filter might be better

MPU6050 imu;
//might not need all these variables, some don't really need to be global. Must be checked again later
int16_t ax, ay, az, gx, gy, gz;

double Ax,Ay,Az,Gx,Gy,Gz,dt,timer=0,gyro_pitch,gyro_roll,angle_roll,angle_pitch;
int X,Z,accel_pitch,accel_roll;

void configure_mpu6050(){

  Wire.begin();  
  //these are the offset values obtained by the offset calculator sketch
  //recalibrate when mpu is placed on the quad
  imu.setXAccelOffset(XAcceloff);
  imu.setYAccelOffset(YAcceloff);
  imu.setZAccelOffset(ZAcceloff);
  imu.setXGyroOffset(XGyrooff);
  imu.setYGyroOffset(YGyrooff);
  imu.setZGyroOffset(XGyrooff);
}


