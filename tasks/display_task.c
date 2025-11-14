#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void display_task(void *pvParams) {
    while (1) {
        vTaskDelay(pdMS_TO_TICKS(100));
    }
}
