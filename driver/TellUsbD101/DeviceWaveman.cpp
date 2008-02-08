// #include "StdAfx.h"
#include "DeviceWaveman.h"
#include <string>
#include <algorithm>
#include <bitset>
#include <iostream>
#include <fstream>

using namespace std;

/*
* Constructor
*/
DeviceWaveman::DeviceWaveman(int intNewHouse, int intNewCode, int intDeviceIndex)
	:DeviceNexa(intNewHouse, intNewCode, intDeviceIndex){
}

/*
* Turn off this device
*/
void DeviceWaveman::turnOff(void){
	
	try{
		string strCode = getStringCode(intCode);
		string strHouse = getStringCode(intHouse);

		strCode.append(strHouse);
		strCode.insert(0, "S");
		strCode.append("$k$k$k$k$k$k$k$k$k+");	//the "turn off"-code, keeps it like this, doesn't have to be regenerated each time
		
		char* strMessage = const_cast<char*>(strCode.c_str());
		
		Device::send(strMessage);
	}
	catch(...){
		throw;
	}
}

/*
* Has the device got the method?
*/
int DeviceWaveman::methods(char* strModel){
	return (TELLSTICK_TURNON | TELLSTICK_TURNOFF);
}
