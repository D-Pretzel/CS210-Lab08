/** lab08.c
* ===========================================================
* Name: David Petzold
* Section: T6/7
* Project: Lab 08
* Purpose: Develop a unit test for the 'coldAdvisory' method
* ===========================================================*/

#include <stdio.h>
#include "advisory.h"
#include "unitTest.h"


void calculateColdAdvisory() {
    int ambientTemp = 0;
    int windSpeed = 0;
    int coldAdvise = NO_COLD_ADVISORY;

    // user input
    printf("enter the wind speed: ");
    scanf("%i", &windSpeed);

    printf("enter the ambient temp: ");
    scanf("%i", &ambientTemp);

    // get cold advisory level
    coldAdvise = coldAdvisory(windSpeed, ambientTemp);

    // output
    if(coldAdvise == NO_COLD_ADVISORY) {
        printf("There is no advisory ");
    } else if(coldAdvise == COLD_ADVISORY) {
        printf("There is a COLD ADVISORY ");
    } else {
        printf("There is a COLD WARNING ");
    }

    printf("for temp: %2i ", ambientTemp);
    printf("and wind: %2i\n", windSpeed);
}


int main(void) {

    runAllTests();

    calculateColdAdvisory();

    return 0;
}