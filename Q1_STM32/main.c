#include <stdint.h>

#define GPIO_HIGH 1
#define GPIO_LOW  0

volatile uint8_t led_state = GPIO_LOW;

void GPIO_Init(void)
{
    led_state = GPIO_LOW;
}

void LED_On(void)
{
    led_state = GPIO_HIGH;
}

void LED_Off(void)
{
    led_state = GPIO_LOW;
}

void LED_Toggle(void)
{
    if(led_state == GPIO_HIGH)
        LED_Off();
    else
        LED_On();
}

void Delay(void)
{
    volatile uint32_t i;
    for(i=0;i<100000;i++);
}

int main(void)
{
    GPIO_Init();

    while(1)
    {
        LED_Toggle();
        Delay();
    }

    return 0;
}
