#include "FreeRTOS.h"
#include "task.h"


static void task1_handler(void* parameters);
static void task2_handler(void* parameters);


int main(void)
{
    TaskHandle_t task1_handle;
    TaskHandle_t task2_handle;
    BaseType_t status;

    status = xTaskCreate(task1_handler, "Task 1", 200, "Hello world from Task-1", 2, &task1_handle);
    configASSERT(status == pdPASS);
    status = xTaskCreate(task2_handler, "Task 2", 200, "Hello world from Task-2", 2, &task2_handle);
    configASSERT(status == pdPASS);
    // vTaskStartScheduler() scheduler padrao

    return 0;
}

static void task1_handler(void* parameters)
{ /*
   for ( ;; ){
    printf("Ola mundo de Task-1\n");
    vTaskDelay(pdMS_TO_TICKS(500));
   }
   */
}

static void task2_handler(void* parameters)
{
    
    
}

