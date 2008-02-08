#include "Device.h"

/*
* Constructor
*/
Device::Device(int intDongleIndex)
{
  this->intDongleIndex = intDongleIndex;
}

/*
* Destructor
*/
Device::~Device(void)
{
	intDongleIndex = -1;
}

/*
* Turn on, virtual
*/
void Device::turnOn(void){
	//do nothing
}

/*
* Turn off, virtual
*/
void Device::turnOff(void){
	//do nothing
}

/*
* Bell, virtual
*/
void Device::bell(void){
	//do nothing
}

/*
* Dim, virtual
*/
void Device::dim(unsigned char level){
	//do nothing
}

/*
* Methods, virtual
*/
int Device::methods(char* strModel){
	return 0;
}
