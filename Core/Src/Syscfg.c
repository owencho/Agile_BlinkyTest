#include "Syscfg.h"

int arrayNumber;

void syscfgExternalInterruptConfig(SyscfgRegs *syscfgLoc,int pin,int portName){
	arrayNumber = portName >> 2 ;
	syscfgLoc->EXTICR[arrayNumber] |= portName << (pin - (arrayNumber << 2));
}

void abc(){

}
