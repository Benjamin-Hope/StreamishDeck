#include <blink_example.h>

int main()
{
    const uint8_t led_pin {25};

    // Initialize the pin
    gpio_init(led_pin);
    gpio_set_dir(led_pin, GPIO_OUT);

    // loop
    while (true)
    {
        gpio_put(led_pin, true);
        sleep_ms(1000);
        gpio_put(led_pin, false);
        sleep_ms(1000);
    }
}
