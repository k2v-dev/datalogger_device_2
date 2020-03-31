/*
 * Ble_Interface.h
 *
 *  Created on: 05-Dec-2019
 *      Author: GTsilicon
 */

#ifndef APPLICATIONS_INC_BLE_INTERFACE_H_
#define APPLICATIONS_INC_BLE_INTERFACE_H_
#include <stdint.h>
#include <string.h>
#include <stdbool.h>

static char const * day_of_week[] =
{
    "Unknown",
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday",
    "Sunday"
};

static char const * month_of_year[] =
{
    "Unknown",
    "January",
    "February",
    "March",
    "April",
    "May",
    "June",
    "July",
    "August",
    "September",
    "October",
    "November",
    "December"
};



extern uint8_t rcvd_cmd_id;
extern uint8_t rcvd_cmd_rate;
extern bool turn_on_output;
//struct tm * current_time;
extern int ble_init(void);
extern float milisec;
static void cts_init(void);
#endif /* APPLICATIONS_INC_BLE_INTERFACE_H_ */
