#include <mbq.h>
#include <PingIRReceiver.h>

void setup()
{
	initBoard();
	while(true)
	{
		AnalogWrite(PWM10, AnalogRead(sensor0));
	}
}

void loop()
{
}
