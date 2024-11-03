#include <stdio.h>
#include "SevenSegment.h"

SevenSegment s1(0) ;
SevenSegment s2(4) ;

extern "C" void app_main(void)
{

    uint8_t counter = 0;
    while(1)
    {
        s1.DisplayNumber(counter / 10);
        s1.DisplayOn();
        vTaskDelay(100/portTICK_PERIOD_MS);
        s1.DisplayOff();

        s2.DisplayNumber(counter % 10);
        s2.DisplayOn();
        vTaskDelay(100/portTICK_PERIOD_MS);
        s2.DisplayOff();
        counter++;
        if (counter > 99)
            counter = 0;

        // for (int i = 0; i < 9; i++)
        // {
        //     s1.DisplayNumber(i);
        //     vTaskDelay(500 / portTICK_PERIOD_MS);

        //     s2.DisplayNumber((i+1) % 10);
        //     vTaskDelay(500 / portTICK_PERIOD_MS);
        // }
        // s1.DisplayNum0();
        // vTaskDelay(500/portTICK_PERIOD_MS);
        // s1.DisplayNum1();
        // vTaskDelay(500/portTICK_PERIOD_MS);
        // s1.DisplayNum2();
        // vTaskDelay(500/portTICK_PERIOD_MS);
        // s1.DisplayNum3();
        // vTaskDelay(500/portTICK_PERIOD_MS);
        // s1.DisplayNum4();
        // vTaskDelay(500/portTICK_PERIOD_MS);
        // s1.DisplayNum5();
        // vTaskDelay(500/portTICK_PERIOD_MS);
        // s1.DisplayNum6();
        // vTaskDelay(500/portTICK_PERIOD_MS);
        // s1.DisplayNum7();
        // vTaskDelay(500/portTICK_PERIOD_MS);
        // s1.DisplayNum8();
        // vTaskDelay(500/portTICK_PERIOD_MS);
        // s1.DisplayNum9();
        // vTaskDelay(500/portTICK_PERIOD_MS);
        // s1.DisplayBlank();

        // s2.DisplayNum0();
        // vTaskDelay(500/portTICK_PERIOD_MS);
        // s2.DisplayNum1();
        // vTaskDelay(500/portTICK_PERIOD_MS);
        // s2.DisplayNum2();
        // vTaskDelay(500/portTICK_PERIOD_MS);
        // s2.DisplayNum3();
        // vTaskDelay(500/portTICK_PERIOD_MS);
        // s2.DisplayNum4();
        // vTaskDelay(500/portTICK_PERIOD_MS);
        // s2.DisplayNum5();
        // vTaskDelay(500/portTICK_PERIOD_MS);
        // s2.DisplayNum6();
        // vTaskDelay(500/portTICK_PERIOD_MS);
        // s2.DisplayNum7();
        // vTaskDelay(500/portTICK_PERIOD_MS);
        // s2.DisplayNum8();
        // vTaskDelay(500/portTICK_PERIOD_MS);
        // s2.DisplayNum9();
        // vTaskDelay(500/portTICK_PERIOD_MS);
        // s2.DisplayBlank();
    } 
}