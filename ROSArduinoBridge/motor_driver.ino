/***************************************************************
   Motor driver definitions
   
   Add a "#elif defined" block to this file to include support
   for a particular motor driver.  Then add the appropriate
   #define near the top of the main ROSArduinoBridge.ino file.
   
   *************************************************************/

#ifdef USE_BASE
   
#ifdef L298_MOTOR_DRIVER
  void initMotorController() {
    digitalWrite(REAR_MOTOR_ENABLE, HIGH);
  }
  
  void setMotorSpeed(int spd) {
    unsigned char reverse = 0;
  
    if (spd < 0)
    {
      spd = -spd;
      reverse = 1;
    }
    if (spd > 255)
      spd = 255;
    
    if (reverse == 0) 
      { 
        analogWrite(REAR_MOTOR_FORWARD, spd); 
        analogWrite(REAR_MOTOR_BACKWARD, 0); 
      }
    else if (reverse == 1) 
    { 
      analogWrite(REAR_MOTOR_BACKWARD, spd); 
      analogWrite(REAR_MOTOR_FORWARD, 0); 
    }
  }
  
  void setMotorSpeeds(int motorSpeed) {
    setMotorSpeed(motorSpeed);
  }
#else
  #error A motor driver must be selected!
#endif

#endif
