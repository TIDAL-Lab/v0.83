#include <mbq.h>
#include <PingIRReceiver.h>

void setup()
{
	initBoard();
	while(true)
	{
		motor0.setPower(AnalogRead(sensor0));
	}
}

void loop()
{
}