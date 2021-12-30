/******************************************************************
 * @file util.cpp
 *
 * @brief This contains the utility drivers
 *
 * @ingroup PackageName
 * (Note: this needs exactly one @defgroup somewhere)
 *
 * @author Sanchitha Dias
 * @contact: sanchithadias@gmail.com
 * @organization: Origin Cooperation
 *****************************************************************/
/******************************************************************
*********                       Includes                  *********
******************************************************************/
#include <Arduino.h>

#include "..\Board.h"
#include "..\Defines.h"

#include "util.h"
/******************************************************************
*********                  Local Defines                  *********
******************************************************************/

/******************************************************************
*********                Local Enumerations               *********
******************************************************************/

/******************************************************************
*********                  Local Objects                  *********
******************************************************************/

/******************************************************************
*********                  Local Variables                *********
******************************************************************/

/******************************************************************
*********          Local Function Definitions             *********
******************************************************************/

/******************************************************************
*********              Application Firmware               *********
******************************************************************/
/**********                 LED Firmware                **********/
bool init_leds(void)
{
    debug_println("Init Led's");
    pinMode(GPIO_OUTPUT_STATUS_LED_0, OUTPUT);
    pinMode(GPIO_OUTPUT_STATUS_LED_1, OUTPUT);
    pinMode(GPIO_OUTPUT_STATUS_LED_2, OUTPUT);
    return true;
}

void blinky(int repeats, int time)
{
    for (int i = 0; i < repeats; i++)
    {
        digitalWrite(GPIO_OUTPUT_STATUS_LED_0, HIGH);
        os_delay_Ms(time);
        digitalWrite(GPIO_OUTPUT_STATUS_LED_0, LOW);
        os_delay_Ms(time);
    }
}
/******************************************************************/
/**********                   Debu Serial                **********/
void init_debug_serial(void)
{
#if APP_MODE_DEBUG
    Serial.begin(230400);
    // while(!Serial); //Uncomment for debugging purposes

    os_delay_Ms(2000);
#endif
}

void debug_print(String buf)
{
#if APP_MODE_DEBUG
    Serial.print(buf);
#endif
}

void debug_print(char c)
{
#if APP_MODE_DEBUG
    Serial.print(c);
#endif
}

void debug_print(int i)
{
#if APP_MODE_DEBUG
    Serial.print(i);
#endif
}

void debug_print(float f)
{
#if APP_MODE_DEBUG
    Serial.print(f);
#endif
}

void debug_print(float f, uint8_t decimals)
{
#if APP_MODE_DEBUG
    Serial.print(f, decimals);
#endif
}

void debug_println(String buf)
{
#if APP_MODE_DEBUG
    Serial.println(buf);
#endif
}

void debug_println(char c)
{
#if APP_MODE_DEBUG
    Serial.println(c);
#endif
}

void debug_println(int i)
{
#if APP_MODE_DEBUG
    Serial.println(i);
#endif
}

void debug_println(float f)
{
#if APP_MODE_DEBUG
    Serial.println(f);
#endif
}

void debug_println(float f, uint8_t decimals)
{
#if APP_MODE_DEBUG
    Serial.println(f, decimals);
#endif
}

void close_debug_serial(void)
{
#if APP_MODE_DEBUG
    Serial.end();
#endif
}
/******************************************************************/
/**********                   Delay Helpers              **********/
void os_delay_Us(uint16_t us)
{
    delayMicroseconds(us);
}

void os_delay_Ms(uint16_t ms)
{
    delay(ms);
}

void os_delay_S(uint16_t s)
{
    while (s > 0)
    {
        os_delay_Ms(1000);
        s--;
    }
}
/******************************************************************
*********                       EOF                       *********
*******************************************************************
********* Dev. by Sanchitha Dias (sanchithadias@gmail.com)*********
******************************************************************/
