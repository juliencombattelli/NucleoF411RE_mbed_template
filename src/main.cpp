/**
  ******************************************************************************
  * @file    main.cpp
  * @author  Ac6
  * @version V1.0
  * @date    01-December-2013
  * @brief   Default main function.
  ******************************************************************************
*/

#include <mbed.h>

DigitalOut myled(LED1);
 
int main() 
{
    while(1) 
	{
        myled = 1;
        wait(0.2);
        myled = 0;
        wait(0.2);
    }
}