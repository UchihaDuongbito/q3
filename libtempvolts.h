#pragma once

#define NUM_VOLTAGE_READINGS 10

/**
 * Returns the voltage (in V) read from the temperature sensor
 * Every time you call the function, it will return the next voltage reading
 */
float get_voltage();
float io_read_temperature();

// Calculates the average temperature
float average_temperature() {
    float total_temperature = 0.0;

    // read temperature NUM_VOLTAGE_READINGS times
    for (int i = 0; i < NUM_VOLTAGE_READINGS; i++) {
        // read the temperature using the io_read_temperature() function
        float temperature = io_read_temperature();
        total_temperature += temperature;
    }

    // calculate the average temperature
    float average_temp = total_temperature / NUM_VOLTAGE_READINGS;

    // return the average temperature
    return average_temp;
}