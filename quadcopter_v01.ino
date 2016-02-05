/*This is a the software which will be used to controll a quadcopter
 * based on controller which uses an arduino nano as its microprocessor
 * the on flight controller consists of a PCB with the following modules:
 * 1. Arduino nano
 * 2. nRF24L01+ transeiver
 * 3. MPU6050
 * schematics and more information can be found on __________
 * Author: Francesco Fumagalli
 * Date 4/2/2016
 * Version 1
 */

//libraries 

#include <Math.h>
#include "PID_v1.h" //not yet dloaded
#include "Servo.h"                          //for esc
#include "Wire.h"                           //i2c coms for mpu
#include "I2Cdev.h"                         //mpu library
#include "MPU6050.h"                        //mpu library
#include "nRF24L01.h"                       //nrf library
#include "RF24.h"
#include "RF24_config.h"                    
#include "SPI.h"                            
#include "quad_configure.h"

void setup() {
  
  configure_motors(); //creats servo instances,attaches them to pwm pins,sends 0V
  configure_mpu6050(); 
  configure_nRF24();
  configure_PID();
}

void loop() {
  // put your main code here, to run repeatedly:

}
