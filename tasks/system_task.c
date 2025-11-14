#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void system_task(void *pvParams) {
    while (1) {
        vTaskDelay(pdMS_TO_TICKS(100));
    }
}
