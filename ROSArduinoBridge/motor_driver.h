/***************************************************************
   Motor driver function definitions - by James Nugen
   *************************************************************/

#ifdef L298_MOTOR_DRIVER
  #define REAR_MOTOR_BACKWARD 8
  #define REAR_MOTOR_FORWARD  9
  #define REAR_MOTOR_ENABLE 7
#endif

void initMotorController();
void setMotorSpeed(int spd);
void setMotorSpeeds(int motorSpeed);
