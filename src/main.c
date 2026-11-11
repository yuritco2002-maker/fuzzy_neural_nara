#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "fuzzy.h"

void app_main(void) {
    float v_1;
    float v_2;
    float d;
    print("Setpoint da velocidade do motor 1: \n");
    scanf("%f", v_1);
    print("Setpoint da velocidade do motor 2: \n");
    scanf("%f", v_2);
    print("Setpoint da distância : \n");
    scanf("%f", v_1);
}