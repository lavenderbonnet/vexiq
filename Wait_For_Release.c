#pragma config(Sensor, port6,  b1,             sensorVexIQ_Touch)
#pragma config(Motor,  motor1,          m1,            tmotorVexIQ, openLoop, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*------------------------------------------------------------------------------------------------
	This program instructs the robot to move forward at half speed until the bumper sensor is
	released.

                            ROBOT CONFIGURATION: VEX IQ Clawbot
    MOTORS & SENSORS:
    [I/O Port]          [Name]              [Type]                			[Location]
    Port 1        			leftMotor           VEX IQ Motor		      			Left side motor
    Port 6       				rightMotor          VEX IQ Motor		      			Right side motor (reversed)
    Port 2        			bumpSwitch          VEX IQ Bumper		      			Bumper Sensor
------------------------------------------------------------------------------------------------*/

task main()
{
	repeat(forever)
	{
		int bval =   getBumperValue(b1);
		displayTextLine(1, "val: %d", bval);

		if (bval == 0)
		{
      setMotorSpeed(m1, 0);
    }
    else
    {
      setMotorSpeed(m1, 50);
    }


    sleep(50);
	}
}
