/**
 * Italian
 *
 * LCD Menu Messages
 * See also documentation/LCDLanguageFont.md
 *
 */
#ifndef LANGUAGE_IT_H
#define LANGUAGE_IT_H

#define MAPPER_NON
// Define SIMULATE_ROMFONT to see what is seen on the character based display defined in Configuration.h
//#define SIMULATE_ROMFONT
#define DISPLAY_CHARSET_ISO10646_1

#define WELCOME_MSG                         MACHINE_NAME " OK"
#define MSG_SD_INSERTED                     "SD Card inserita"
#define MSG_SD_REMOVED                      "SD Card rimossa"
#define MSG_MAIN                            "Menu principale"
#define MSG_AUTOSTART                       "Autostart"
#define MSG_DISABLE_STEPPERS                "Disabilita Motori"
#define MSG_AUTO_HOME                       "Auto Home"
#define MSG_SET_HOME_OFFSETS                "Setta offset home"
#define MSG_SET_ORIGIN                      "Imposta Origine"
#define MSG_PREHEAT_PLA                     "Preriscalda PLA"
#define MSG_PREHEAT_PLA_N                   "Preriscalda PLA "
#define MSG_PREHEAT_PLA_ALL                 "Prer. PLA Tutto"
#define MSG_PREHEAT_PLA_BEDONLY             "Prer. PLA Piatto"
#define MSG_PREHEAT_PLA_SETTINGS            "Config. prer. PLA"
#define MSG_PREHEAT_ABS                     "Preriscalda ABS"
#define MSG_PREHEAT_ABS_N                   "Preriscalda ABS "
#define MSG_PREHEAT_ABS_ALL                 "Prer. ABS Tutto"
#define MSG_PREHEAT_ABS_BEDONLY             "Prer. ABS Piatto"
#define MSG_PREHEAT_ABS_SETTINGS            "Config. prer. ABS"
#define MSG_COOLDOWN                        "Raffredda"
#define MSG_SWITCH_PS_ON                    "Accendi aliment."
#define MSG_SWITCH_PS_OFF                   "Spegni aliment."
#define MSG_EXTRUDE                         "Estrudi"
#define MSG_RETRACT                         "Ritrai"
#define MSG_MOVE_AXIS                       "Muovi Asse"
#define MSG_MOVE_X                          "Muovi X"
#define MSG_MOVE_Y                          "Muovi Y"
#define MSG_MOVE_Z                          "Muovi Z"
#define MSG_MOVE_E                          "Estrusore 1"
#define MSG_MOVE_E2                         "Estrusore 2"
#define MSG_MOVE_01MM                       "Muovi di 0.1mm"
#define MSG_MOVE_1MM                        "Muovi di   1mm"
#define MSG_MOVE_10MM                       "Muovi di  10mm"
#define MSG_SPEED                           "Velcità"
#define MSG_NOZZLE                          "Ugello"
#define MSG_BED                             "Piatto"
#define MSG_FAN_SPEED                       "Ventola"
#define MSG_FLOW                            "Flusso"
#define MSG_CONTROL                         "Controllo"
#define MSG_MIN                             LCD_STR_THERMOMETER " Min"
#define MSG_MAX                             LCD_STR_THERMOMETER " Max"
#define MSG_FACTOR                          LCD_STR_THERMOMETER " Fact"
#define MSG_AUTOTEMP                        "Autotemp"
#define MSG_ON                              "ON "
#define MSG_OFF                             "OFF"
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_PID_C                           "PID-C"
#define MSG_ACC                             "Accel."
#define MSG_VXY_JERK                        "Vxy-jerk"
#define MSG_VZ_JERK                         "Vz-jerk"
#define MSG_VE_JERK                         "Ve-jerk"
#define MSG_VMAX                            "Vmax"
#define MSG_X                               "x"
#define MSG_Y                               "y"
#define MSG_Z                               "z"
#define MSG_E                               "e"
#define MSG_VMIN                            "Vmin"
#define MSG_VTRAV_MIN                       "VTrav min"
#define MSG_AMAX                            "Amax"
#define MSG_A_RETRACT                       "A-retract"
#define MSG_XSTEPS                          "Xpassi/mm"
#define MSG_YSTEPS                          "Ypassi/mm"
#define MSG_ZSTEPS                          "Zpassi/mm"
#define MSG_ESTEPS                          "Epassi/mm"
#define MSG_TEMPERATURE                     "Temperatura"
#define MSG_MOTION                          "Movimento"
#define MSG_VOLUMETRIC                      "Filament"
#define MSG_VOLUMETRIC_ENABLED              "E in mm³"
#define MSG_FILAMENT_DIAM                   "Diam. filo"
#define MSG_CONTRAST                        "Contrasto LCD"
#define MSG_STORE_EPROM                     "Salva in EEPROM"
#define MSG_LOAD_EPROM                      "Carica da EEPROM"
#define MSG_RESTORE_FAILSAFE                "Impostaz. default"
#define MSG_REFRESH                         "Aggiorna"
#define MSG_WATCH                           "Guarda"
#define MSG_PREPARE                         "Prepara"
#define MSG_TUNE                            "Adatta"
#define MSG_PAUSE_PRINT                     "Pausa"
#define MSG_RESUME_PRINT                    "Riprendi stampa"
#define MSG_STOP_PRINT                      "Arresta stampa"
#define MSG_CARD_MENU                       "SD Card Menu"
#define MSG_NO_CARD                         "No SD Card"
#define MSG_DWELL                           "Sospensione..."
#define MSG_USERWAIT                        "Attendi Utente..."
#define MSG_RESUMING                        "Riprendi Stampa"
#define MSG_PRINT_ABORTED                   "Stampa abortita"
#define MSG_NO_MOVE                         "Nessun Movimento"
#define MSG_KILLED                          "UCCISO "
#define MSG_STOPPED                         "ARRESTATO "
#define MSG_CONTROL_RETRACT                 "Ritrai mm"
#define MSG_CONTROL_RETRACT_SWAP            "Scamb. Ritrai mm"
#define MSG_CONTROL_RETRACTF                "Ritrai  V"
#define MSG_CONTROL_RETRACT_ZLIFT           "Salta mm"
#define MSG_CONTROL_RETRACT_RECOVER         "UnRet +mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "Scamb. UnRet +mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "UnRet  V"
#define MSG_AUTORETRACT                     "AutoArretramento"
#define MSG_FILAMENTCHANGE                  "Cambia filamento"
#define MSG_INIT_SDCARD                     "Iniz. SD-Card"
#define MSG_CNG_SDCARD                      "Cambia SD-Card"
#define MSG_ZPROBE_OUT                      "Z probe out. bed"
#define MSG_POSITION_UNKNOWN                "Home X/Y before Z"
#define MSG_ZPROBE_ZOFFSET                  "Z Offset"
#define MSG_BABYSTEP_X                      "Babystep X"
#define MSG_BABYSTEP_Y                      "Babystep Y"
#define MSG_BABYSTEP_Z                      "Babystep Z"
#define MSG_ENDSTOP_ABORT                   "Finecorsa abort"
#define MSG_END_HOUR                        "ore"
#define MSG_END_MINUTE                      "minuti"

#if ENABLED(DELTA_CALIBRATION_MENU)
  #define MSG_DELTA_CALIBRATE               "Calibraz. Delta"
  #define MSG_DELTA_CALIBRATE_X             "Calibra X"
  #define MSG_DELTA_CALIBRATE_Y             "Calibra Y"
  #define MSG_DELTA_CALIBRATE_Z             "Calibra Z"
  #define MSG_DELTA_CALIBRATE_CENTER        "Calibra Center"
#endif // DELTA_CALIBRATION_MENU

#endif // LANGUAGE_IT_H
