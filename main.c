#pragma config(Sensor, dgtl1,  solenoid1,      sensorDigitalOut)
#pragma config(Sensor, dgtl2,  solenoid2,      sensorDigitalOut)
#pragma config(Motor,  port2,           drvLeft,       tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port8,           releaseMotor,  tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           drvRight,      tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "constants.c"1
#include "behaviors.c";
#include "joystick.c"

task main()
{

	while (true) {
		if (!killSwitchControl()) {
			//driveControl();
			tankCtrl();
			cannonControl();
			releaseControl();
		} else {
			halt();
		}
	}

}
