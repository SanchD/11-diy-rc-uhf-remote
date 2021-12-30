/******************************************************************
 * @file util.h
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
#ifndef UTIL_H
#define UTIL_H

/******************************************************************
*********                       Includes                  *********
******************************************************************/

/******************************************************************
*********                  Global Defines                  *********
******************************************************************/

/******************************************************************
*********                Global Enumerations               *********
******************************************************************/

/******************************************************************
*********          Global Function Definitions             *********
******************************************************************/
bool init_leds(void);
void blinky(int repeats, int time);

void init_debug_serial(void);
void debug_print(String buf);
void debug_print(char c);
void debug_print(int i);
void debug_print(float f);
void debug_print(float f, uint8_t decimals);
void debug_println(String buf);
void debug_println(char c);
void debug_println(int i);
void debug_println(float f);
void debug_println(float f, uint8_t decimals);
void close_debug_serial(void);

void os_delay_Us(uint16_t us);
void os_delay_Ms(uint16_t ms);
void os_delay_S(uint16_t s);

#endif 
