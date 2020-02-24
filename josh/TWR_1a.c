#pragma config(Sensor, in1,    BouncyRight,    sensorLineFollower)
#pragma config(Sensor, in2,    BouncyMid,      sensorLineFollower)
#pragma config(Sensor, in3,    BouncyLeft,     sensorLineFollower)
#pragma config(Sensor, in4,    Pot,            sensorPotentiometer)
#pragma config(Sensor, in5,    Light1,         sensorReflection)
#pragma config(Sensor, dgtl2,  SonarIn,        sensorSONAR_mm)
#pragma config(Sensor, dgtl4,  Limit,          sensorTouch)
#pragma config(Sensor, dgtl5,  Button,         sensorTouch)
#pragma config(Sensor, dgtl6,  LEDR,           sensorLEDtoVCC)
#pragma config(Sensor, dgtl7,  LEDG,           sensorLEDtoVCC)
#pragma config(Sensor, dgtl8,  LEDB,           sensorLEDtoVCC)
#pragma config(Sensor, dgtl9,  EncodRa,        sensorQuadEncoder)
#pragma config(Sensor, dgtl11, EncodLa,        sensorQuadEncoder)
#pragma config(Motor,  port1,           Flashy,        tmotorVexFlashlight, openLoop, reversed)
#pragma config(Motor,  port2,           TankRight,     tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port3,           TankLeft,      tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           Servo,         tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*
  Project Title: TWR_1a
  Team Members: Josh L && Zak S
  Date: 2/24/20
  Summary: Blink Once


  Task Description:
            Wait for the button to be pushed and then turn the red LED on for 1 sec and then turn the LED off

  Pseudocode:
            Wait for button push then 
            Set the red LED to 1
            Wait 1 sec
            Set the LED to 0
*/

task main()
{                                     //Program begins, insert code within curly braces




}
