/*
 * config.h
 *
 *  Automatically created by Lishui Parameter Configurator
 *  Author: stancecoke
 */

#ifndef CONFIG_H_
#define CONFIG_H_
#include "stdint.h"

//Dangerzone, do not touch!!
#define DISPLAY_TYPE_M365DASHBOARD (1<<1)
#define DISPLAY_TYPE_DEBUG (1<<0)// For ASCII-Output in Debug mode);

#define TRIGGER_OFFSET_ADC 50
#define TRIGGER_DEFAULT 2020
#define _T 2028

#define SPEEDFILTER 3

//#define ADCTHROTTLE
//#define FAST_LOOP_LOG
//#define DISABLE_DYNAMIC_ADC

// choose your display here
#define DISPLAY_TYPE DISPLAY_TYPE_M365DASHBOARD

// calibration factors for voltage and current
#define CAL_BAT_V 14 // ADC counts * CAL_BAT_V = Battery voltage in mV
#define CAL_I 38// ADC counts * CAL_I = current in mA

// gains for PI controls
#define P_FACTOR_I_Q 100
#define I_FACTOR_I_Q 2
#define P_FACTOR_I_D 100
#define I_FACTOR_I_D 10

// min and max values of throttle and brake signals in ADC counts
#define THROTTLEOFFSET 45
#define THROTTLEMAX 175
#define BRAKEOFFSET 50
#define BRAKEMAX 190

// parameters for speed calculation
#define WHEEL_CIRCUMFERENCE 550 //690 for original M365 motor
#define GEAR_RATIO 11 //15 for original M365 motor

// speed limits for individual modes in kph
#define SPEEDLIMIT_ECO     20
#define SPEEDLIMIT_NORMAL  25
#define SPEEDLIMIT_SPORT   34

// motor current limits for individual modes in mA, see default settings at https://max.cfw.sh/#
#define PH_CURRENT_MAX_ECO     17000   // Eco max current 17.0A
#define PH_CURRENT_MAX_NORMAL  32000   // Drive max current 32.0A
#define PH_CURRENT_MAX_SPORT   55000   // Sport max current 55.0A

// motor current limit for regen in mA
#define REGEN_CURRENT 20000

// maximum current for flux weakening in mA
#define FW_CURRENT_MAX 18000 //max id

// maximum battery currents in mA
#define BATTERYCURRENT_MAX      55000   // Sport max draw 55.0A
#define REGEN_CURRENT_MAX       10000

// battery voltage limits in mV
#define BATTERYVOLTAGE_MIN 33000
#define BATTERYVOLTAGE_MAX 43010   // Voltage limit 43.01V

// motor spinning direction
#define REVERSE 1 //1 for original M365 motor

// settings for speed PLL (angle estimation)
#define SPEED_PLL 1 //1 for using PLL, 0 for angle extrapolation
#define P_FACTOR_PLL 10 //7 for original M365 motor
#define I_FACTOR_PLL 10 //7 for original M365 motor

// --- Paramètres de la gâchette (throttle lever params) ---
#define THROTTLE_MODE                         THROTTLE_MODE_SPEED_BASED
#define THROTTLE_CURRENT_RAISE_COEFF          300   // Throttle current raising coefficient

// --- Paramètres du levier de frein (brake lever params) ---
#define BRAKE_LEVER_VIRTUAL_LIMIT             115   // Lever virtual limit
#define BRAKE_MIN_PHASE_CURRENT               8000  // Min phase current (mA)
#define BRAKE_MAX_PHASE_CURRENT               30000 // Max phase current (mA)
#define BRAKE_CURRENT_RAISE_COEFF             500   // Brake current raising coefficient

// --- Feu de freinage (brake light) ---
#define BRAKE_LIGHT_MODE                      BRAKE_LIGHT_MODE_STOCK
#define BRAKE_LIGHT_FLASH_FREQUENCY_HZ        235   // Brake light flash frequency

// --- Cruise control delay ---
#define CRUISE_CONTROL_DELAY_SECONDS          5

// --- Taille de roue pour calcul de vitesse ---
#define WHEEL_DIAMETER_INCHES                 8.5f  // 8.5 inches

// --- Spoofing de version (optionnel) ---
#define VERSION_SPOOFING_ENABLED              1     // Affiche « DRV155 » ou autre

// Active l’interface UART pour dashboard Pro (envoie les trames télémétrie)
#define ENABLE_DASHBOARD_UART                 1

#endif /* CONFIG_H_ */
