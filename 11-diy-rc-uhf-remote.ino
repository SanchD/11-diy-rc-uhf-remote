/******************************************************************
 * @file 11-diy-rc-uhf-remote.ino
 *
 * @brief This contains the main firmware for DIY remote control
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
#include "Board.h"
#include "Defines.h"

#include "src/sensor.h"
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
void setup()
{
	pinMode(LED_BUILTIN, OUTPUT);

#if APP_MODE_DEBUG
    Serial.begin(921600);

    Serial.println("Remote Control Firmware Started!");
#endif
}

void loop()
{
	digitalWrite(LED_BUILTIN, HIGH);
#if APP_MODE_DEBUG
    Serial.println("Remote Control Loop Running, LED On!");
#endif
    delay(1000);

    digitalWrite(LED_BUILTIN , LOW);
#if APP_MODE_DEBUG
    Serial.println("Remote Control Loop Running, LED Off!");
#endif
    delay(1000);
}
/******************************************************************
*********                       EOF                       *********
*******************************************************************
********* Dev. by Sanchitha Dias (sanchithadias@gmail.com)*********
******************************************************************/