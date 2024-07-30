//github.com/Xornotor/ESP-IDF-LCD1602-Component/tree/main

#include <lcd1602.h>
//funkcni gpio
// #define RS GPIO_NUM_4
// #define EN GPIO_NUM_5
// #define D4 GPIO_NUM_19
// #define D5 GPIO_NUM_21
// #define D6 GPIO_NUM_22
// #define D7 GPIO_NUM_23
#define RS GPIO_NUM_2
#define EN GPIO_NUM_4
#define D4 GPIO_NUM_5
#define D5 GPIO_NUM_21
#define D6 GPIO_NUM_22
#define D7 GPIO_NUM_23

void app_main() {
    lcd1602_init(RS, EN, D4, D5, D6, D7);
    lcd1602_write("Toto je test!");
    vTaskDelay(2000/portTICK_PERIOD_MS);
    lcd1602_set_cursor(1, 0);
    lcd1602_write("Test 2.radek!");
    lcd1602_set_cursor(0, 0);
    vTaskDelay(pdMS_TO_TICKS(2000));
    lcd1602_clear();
    lcd1602_write("Test novy radek!");
    lcd1602_set_cursor(1, 0);
    lcd1602_write("Toto je test!");
    lcd1602_set_behavior(1, 1);
    vTaskDelay(pdMS_TO_TICKS(2000));
    lcd1602_clear();
    lcd1602_write("Treti test!");
    lcd1602_set_cursor(1, 0);
    lcd1602_write("Jdeme na to!");
    vTaskDelay(pdMS_TO_TICKS(2000));
    lcd1602_clear();
    lcd1602_set_cursor(0, 0);
    lcd1602_write("Posledni test!");
    lcd1602_set_cursor(1, 0);
    lcd1602_write("Konec!");
    lcd1602_set_cursor(0, 0);
    lcd1602_set_behavior(0, 0);
    vTaskDelay(pdMS_TO_TICKS(500));

    while(true){
        lcd1602_shift_left();
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}
