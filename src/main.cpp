/**
* @file pressure_sensor.ino
 * @brief Reads analog pressure sensor data from pin A0 and prints it to Serial Monitor.
 *
 * This program continuously reads the analog value from a pressure sensor
 * connected to pin A0 and outputs the value every second using serial communication.
 *
 * @author Alan Crozier
 * @date 2026-02-19
 */

#include <Arduino.h>

/**
 * @brief Stores the analog pressure sensor reading.
 *
 * The value ranges from 0 to 1023 depending on the input voltage.
 */
int pressure = 0;

/**
 * @brief Initializes serial communication and configures hardware.
 *
 * This function runs once at startup. It initializes the serial port
 * and sets the mode of pin A0.
 */
void setup() {
    Serial.begin(9600);
    pinMode(A0, OUTPUT);
}

/**
 * @brief Main execution loop.
 *
 * Continuously reads the analog value from pin A0, prints it to the
 * Serial Monitor, and waits for one second before repeating.
 */
void loop() {
    pressure = analogRead(A0);

    Serial.println(pressure);

    delay(1000);
}
