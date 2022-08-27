/** unitTest.c
* ===========================================================
* Name: David Petzold
* Section: T6/7
* Project: Lab 08
* Purpose: Develop a unit test for the 'coldAdvisory' method
* ===========================================================*/

#include <stdbool.h>
#include <stdio.h>
#include <assert.h>

#include "unitTest.h"
#include "advisory.h"

void unitTest01(){
    assert(coldAdvisory(0, 16) == NO_COLD_ADVISORY);
    printf("Test 01 Passed\n");
}

void unitTest02(){
    assert(coldAdvisory(51, 0) == COLD_WARNING);
    printf("Test 02 Passed\n");
}

void unitTest03(){
    assert(coldAdvisory(49, 0) == COLD_ADVISORY);
    printf("Test 03 Passed\n");
}

void unitTest04(){
    assert(coldAdvisory(21, -10) == COLD_WARNING);
    printf("Test 04 Passed\n");
}

void unitTest05(){
    assert(coldAdvisory(19, -10) == COLD_ADVISORY);
    printf("Test 05 Passed\n");
}

void unitTest06(){
    assert(coldAdvisory(69, -11) == COLD_WARNING);
    printf("Test 06 Passed\n");
}

void runAllTests(){
    unitTest01();
    unitTest02();
    unitTest03();
    unitTest04();
    unitTest05();
    unitTest06();
    printf("Testing completed\n");
}