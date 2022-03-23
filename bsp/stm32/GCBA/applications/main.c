/*
 * Copyright (c) 2006-2018, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       		Notes
 * 2020-07-13     Dozingfiretruck   first version
 */

#include <rtthread.h>
#include <rtdevice.h>
#include <board.h>
#include <hello.h>

/* defined the LED4 pin: PC2 */
#define LED0_PIN    GET_PIN(A, 11)

int main(void)
{
    int count = 1;
    /* set LED0 pin mode to output */
    rt_pin_mode(LED0_PIN, PIN_MODE_OUTPUT);
    rt_pin_write(LED0_PIN, PIN_LOW);

    hello_func();
    while (count++)
    {
        rt_pin_write(LED0_PIN, PIN_HIGH);
        // rt_thread_mdelay(500);
        // rt_pin_write(LED0_PIN, PIN_LOW);
        rt_thread_mdelay(500);
    }

    return RT_EOK;
}
