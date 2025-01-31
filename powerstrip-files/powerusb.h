#ifndef POWERUSB_H
#define POWERUSB_H
#include<stdio.h>
#include<stdlib.h>
#include <dlfcn.h>
#include<string.h>
#include <unistd.h>
#include <libusb-1.0/libusb.h>

class PowerUSB
{
	void *sharedLibraryHandle;
	public :
	PowerUSB(int argc, char* argv[]);
	int handleRequest(int argc, char* argv[]);
	int writeData(int len);
	int uSBRead();
	void printErrorMessage();
	void loadSharedLibrary();
	void initPowerUSB();
	void checkStatusPowerUSB();
	void readPortStatus(int status, int port);
	void readDefaultPortStatus(int status, int port);
};
#endif
