/***************************************************************
   Motor driver definitions
   
   Add a "#elif defined" block to this file to include support
   for a particular motor driver.  Then add the appropriate
   #define near the top of the main ROSArduinoBridge.ino file.
   
   *************************************************************/

#ifdef USE_BASE
   
#ifdef ESC_DRIVER
  Servo esc;  // create servo object to control the ESC
  void initMotorController() {
    esc.attach(ESC_PIN);  // attaches the servo on pin 5 to the servo object
    esc.writeMicroseconds(1500);  // set initial speed to 1500 microseconds
  }
  
  void setMotorSpeed(int spd) {
    esc.writeMicroseconds(1500 + spd);  // set speed to 1500 + spd microseconds
  }
  
  void setMotorSpeeds(int motorSpeed) {
    setMotorSpeed(motorSpeed);
  }
#else
  #error A motor driver must be selected!
#endif

#endif
