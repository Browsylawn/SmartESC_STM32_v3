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
#define DISPLAY_TYPE_DEBUG (1<<0)							// For ASCII-Output in Debug mode);

#define TRIGGER_OFFSET_ADC 50
#define TRIGGER_DEFAULT 2020
#define _T 2028

#define SPEEDFILTER 3

#define ADCTHROTTLE // passe la commande de throttle en ADC direct
//#define DISABLE_DYNAMIC_ADC

#define FAST_LOOP_LOG // envoi continu des trames de télémétrie au Dashboard Pro

// Active la communication Bluetooth « Pro »
#define ENABLE_BT_PRO true

// choose your display here
#define DISPLAY_TYPE DISPLAY_TYPE_M365_PRO_DASHBOARD

// calibration factors for voltage and current
#define CAL_BAT_V 14 	// ADC counts * CAL_BAT_V = Battery voltage in mV
#define CAL_I 38		// ADC counts * CAL_I = current in mA

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

// speed limits for invividual modes in kph
#define SPEEDLIMIT_ECO 15
#define SPEEDLIMIT_NORMAL 25
#define SPEEDLIMIT_SPORT 35

// motor current limits for invividual modes in mA, see default settings at https://max.cfw.sh/#
#define PH_CURRENT_MAX_ECO 17000
#define PH_CURRENT_MAX_NORMAL 32000
#define PH_CURRENT_MAX_SPORT 55000

// motor current limit for regen in mA
#define REGEN_CURRENT 20000

// maximum current for flux weakening in mA
#define FW_CURRENT_MAX 18000 //max id

// maximum battery currents in mA
#define BATTERYCURRENT_MAX 15000
#define REGEN_CURRENT_MAX 8000

// battery voltage limits in mV
#define BATTERYVOLTAGE_MIN 33000
#define BATTERYVOLTAGE_MAX 42000


// motor spinning direction
#define REVERSE 1 //1 for original M365 motor

// settings for speed PLL (angle estimation)
#define SPEED_PLL 1 //1 for using PLL, 0 for angle extrapolation
#define P_FACTOR_PLL 10 //7 for original M365 motor
#define I_FACTOR_PLL 10 //7 for original M365 motor

// Active le régulateur de vitesse (cruise control) via double-clic dash
#define ENABLE_CRUISE_CONTROL         true
// Durée d’activation du cruise (sec)
#define CRUISE_ENABLE_DELAY_SEC       3

// Feux arrière toujours allumés (même en mode veille)
#define ENABLE_REAR_LIGHT_ALWAYS_ON   false

// Feux avant automatiques selon luminosité ambiante (via capteur ADC)
#define ENABLE_AUTO_HEADLIGHT         false
// Seuil lumineux ADC pour allumer / éteindre
#define AUTO_HEADLIGHT_ADC_THRESHOLD  1500  

// Inversion dynamique du throttle (pour Mi-Home smooth start)
#define ENABLE_SMOOTH_START           true
// Durée d’accélération douce (ms)
#define SMOOTH_START_DURATION_MS      500  

// Mode Start & Go : démarrage sans appuyer sur accélérateur
#define ENABLE_START_AND_GO           false

#define ENABLE_TEMPERATURE_SENSOR  true

#define TEMPERATURE_ADC_CHANNEL     3     // à adapter selon votre hardware

#endif /* CONFIG_H_ */
