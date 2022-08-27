#include "advisory.h"

int path1;
int path2;
int path3;
int path4;
int path5;
int path6;

/**
 * @brief determines which cold adviory should be given
 * @param windSpeed speed of the wind in MPH
 * @param ambientTempF ambient temperature in F
 * @return one of the three cold advisory levels (see above)
 * @pre none
 * @post none
 */
int coldAdvisory(int windSpeed, int ambientTempF){
   if(ambientTempF > 15) {
      path1 = 1;
      return NO_COLD_ADVISORY;
   } else if(ambientTempF >= 0) {
       if(windSpeed > 50) {
         path2 = 1;
         return COLD_WARNING;
       } else {
         path3 = 1;
         return COLD_ADVISORY;
       }
   } else if(ambientTempF >= -10) {
       if(windSpeed > 20) {
         path4 = 1;
         return COLD_WARNING;
       } else {
         path5 = 1;
         return COLD_ADVISORY;
       }
   } else {
     path6 = 1;
     return COLD_WARNING;
   }
}