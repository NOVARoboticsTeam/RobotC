void ArcadeDrive2(tMotor leftMotor, tMotor rightMotor, int reverseState, int joystick)
{
	switch(reverseState)
	{
		case 0: // No wheel is reversed

		if(joystick == 0)
		{
			motor[leftMotor] = vexRT[Ch3] - vexRT[Ch4];
			motor[rightMotor] = vexRT[Ch3] + vexRT[Ch4];
		}
		if(joystick == 1)
		{
			motor[leftMotor] = vexRT[Ch3Xmtr2] - vexRT[Ch4Xmtr2];
			motor[rightMotor] = vexRT[Ch3Xmtr2] + vexRT[Ch4Xmtr2];
		}
		break;
		case 1: // Right Wheel is Reversed

		bMotorReflected[rightMotor] = true;

		if(joystick == 0)
		{
			motor[leftMotor] = vexRT[Ch3] - vexRT[Ch4];
			motor[rightMotor] = vexRT[Ch3] + vexRT[Ch4];
		}
		if(joystick == 1)
		{
			motor[leftMotor] = vexRT[Ch3Xmtr2] - vexRT[Ch4Xmtr2];
			motor[rightMotor] = vexRT[Ch3Xmtr2] + vexRT[Ch4Xmtr2];
		}
		break;

		case 2: // Left Wheel is Reversed

		bMotorReflected[leftMotor] = true;

		if(joystick == 0)
		{
			motor[leftMotor] = vexRT[Ch3] - vexRT[Ch4];
			motor[rightMotor] = vexRT[Ch3] + vexRT[Ch4];
		}
		if(joystick == 1)
		{
			motor[leftMotor] = vexRT[Ch3Xmtr2] - vexRT[Ch4Xmtr2];
			motor[rightMotor] = vexRT[Ch3Xmtr2] + vexRT[Ch4Xmtr2];
		}
		break;
	}
}

void TankDrive4(tMotor leftMotorF, tMotor leftMotorR, tMotor rightMotorF, tMotor rightMotorR, int reverseState, int joystick)
{
	switch(reverseState)
	{
		case 0: // No wheel is reversed

		if(joystick == 0)
		{
			motor[leftMotorF] = vexRT[Ch3] - vexRT[Ch4];
			motor[leftMotorR] = vexRT[Ch3] - vexRT[Ch4];
			motor[rightMotorF] = vexRT[Ch3] + vexRT[Ch4];
			motor[rightMotorR] = vexRT[Ch3] + vexRT[Ch4];

		}
		if(joystick == 1)
		{
			motor[leftMotorF] = vexRT[Ch3Xmtr2] - vexRT[Ch4Xmtr2];
			motor[leftMotorR] = vexRT[Ch3Xmtr2] - vexRT[Ch4Xmtr2];
			motor[rightMotorF] = vexRT[Ch3Xmtr2] + vexRT[Ch4Xmtr2];
			motor[rightMotorR] = vexRT[Ch3Xmtr2] + vexRT[Ch4Xmtr2];

		}
		break;
		case 1: // Right Side is Reversed

		bMotorReflected[rightMotorF] = true;
		bMotorReflected[rightMotorR] = true;

		if(joystick == 0)
		{
			motor[leftMotorF] = vexRT[Ch3] - vexRT[Ch4];
			motor[leftMotorR] = vexRT[Ch3] - vexRT[Ch4];
			motor[rightMotorF] = vexRT[Ch3] + vexRT[Ch4];
			motor[rightMotorR] = vexRT[Ch3] + vexRT[Ch4];
		}
		if(joystick == 1)
		{
			motor[leftMotorF] = vexRT[Ch3Xmtr2] - vexRT[Ch4Xmtr2];
			motor[leftMotorR] = vexRT[Ch3Xmtr2] - vexRT[Ch4Xmtr2];
			motor[rightMotorF] = vexRT[Ch3Xmtr2] + vexRT[Ch4Xmtr2];
			motor[rightMotorR] = vexRT[Ch3Xmtr2] + vexRT[Ch4Xmtr2];
		}
		break;

		case 2: // Left Wheel is Reversed

		bMotorReflected[leftMotorF] = true;
		bMotorReflected[leftMotorR] = true;

		if(joystick == 0)
		{
			motor[leftMotorF] = vexRT[Ch3] - vexRT[Ch4];
			motor[leftMotorR] = vexRT[Ch3] - vexRT[Ch4];
			motor[rightMotorF] = vexRT[Ch3] + vexRT[Ch4];
			motor[rightMotorR] = vexRT[Ch3] + vexRT[Ch4];
		}
		if(joystick == 1)
		{
			motor[leftMotorF] = vexRT[Ch3Xmtr2] - vexRT[Ch4Xmtr2];
			motor[leftMotorR] = vexRT[Ch3Xmtr2] - vexRT[Ch4Xmtr2];
			motor[rightMotorF] = vexRT[Ch3Xmtr2] + vexRT[Ch4Xmtr2];
			motor[rightMotorR] = vexRT[Ch3Xmtr2] + vexRT[Ch4Xmtr2];
		}
		break;
	}
}
