#pragma config(Motor,  motor1,          m1,            tmotorVexIQ, PIDControl, encoder)
#pragma config(Motor,  motor2,          m2,            tmotorVexIQ, PIDControl, encoder)
#pragma config(Motor,  motor3,          m3,            tmotorVexIQ, PIDControl, encoder)
#pragma config(Motor,  motor4,          m4,            tmotorVexIQ, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
setMotorSpeed(m1, 50);		//Set the m1 (motor1) to half power (50)
setMotorSpeed(m2, 50);    //Set the m2 (motor2) to half power (50)
setMotorSpeed(m3, 50);    //Set the m3 (motor3) to half power (50)
setMotorSpeed(m4, 50);    //Set the m4 (motor4) to half power (50)
sleep(2);                 //Wait for 2 seconds before continuing on in the program.

}
