/* 
	Editor: http://www.visualmicro.com
	        visual micro and the arduino ide ignore this code during compilation. this code is automatically maintained by visualmicro, manual changes to this file will be overwritten
	        the contents of the Visual Micro sketch sub folder can be deleted prior to publishing a project
	        all non-arduino files created by visual micro and all visual studio project or solution files can be freely deleted and are not required to compile a sketch (do not delete your own code!).
	        note: debugger breakpoints are stored in '.sln' or '.asln' files, knowledge of last uploaded breakpoints is stored in the upload.vmps.xml file. Both files are required to continue a previous debug session without needing to compile and upload again
	
	Hardware: Arduino Mega w/ ATmega2560 (Mega 2560), Platform=avr, Package=arduino
*/

#ifndef _VSARDUINO_H_
#define _VSARDUINO_H_
#define __AVR_ATmega2560__
#define F_CPU 16000000L
#define ARDUINO 10605
#define ARDUINO_AVR_MEGA2560
#define ARDUINO_ARCH_AVR
#define __cplusplus 201103L
#define __AVR__
#define __inline__
#define __asm__(x)
#define __extension__
#define __inline__
#define __volatile__
#define GCC_VERSION 40801
#define volatile(va_arg) 
#define _CONST
#define __builtin_va_start
#define __builtin_va_end
#define __attribute__(x)
#define NOINLINE __attribute__((noinline))
#define prog_void
#define PGM_VOID_P int
#ifndef __builtin_constant_p
	#define __builtin_constant_p __attribute__((__const__))
#endif
#ifndef __builtin_strlen
	#define __builtin_strlen  __attribute__((__const__))
#endif
#define NEW_H
typedef void *__builtin_va_list;
typedef unsigned char byte;
extern "C" void __cxa_pure_virtual() {;}



#include <arduino.h>
#include <pins_arduino.h> 
#undef F
#define F(string_literal) ((const PROGMEM char *)(string_literal))
#undef PSTR
#define PSTR(string_literal) ((const PROGMEM char *)(string_literal))
#undef cli
#define cli()
#define pgm_read_byte(address_short)
#define pgm_read_word(address_short)
#define pgm_read_word2(address_short)
#define digitalPinToPort(P)
#define digitalPinToBitMask(P) 
#define digitalPinToTimer(P)
#define analogInPinToBit(P)
#define portOutputRegister(P)
#define portInputRegister(P)
#define portModeRegister(P)
#include <..\Marlin\Marlin.ino>
#include <..\Marlin\Conditionals.h>
#include <..\Marlin\Configuration.h>
#include <..\Marlin\Configuration_adv.h>
#include <..\Marlin\Default_Version.h>
#include <..\Marlin\M100_Free_Mem_Chk.cpp>
#include <..\Marlin\Marlin.h>
#include <..\Marlin\MarlinSerial.cpp>
#include <..\Marlin\MarlinSerial.h>
#include <..\Marlin\Marlin_main.cpp>
#include <..\Marlin\SanityCheck.h>
#include <..\Marlin\Sd2Card.cpp>
#include <..\Marlin\Sd2Card.h>
#include <..\Marlin\Sd2PinMap.h>
#include <..\Marlin\SdBaseFile.cpp>
#include <..\Marlin\SdBaseFile.h>
#include <..\Marlin\SdFatConfig.h>
#include <..\Marlin\SdFatStructs.h>
#include <..\Marlin\SdFatUtil.cpp>
#include <..\Marlin\SdFatUtil.h>
#include <..\Marlin\SdFile.cpp>
#include <..\Marlin\SdFile.h>
#include <..\Marlin\SdInfo.h>
#include <..\Marlin\SdVolume.cpp>
#include <..\Marlin\SdVolume.h>
#include <..\Marlin\blinkm.cpp>
#include <..\Marlin\blinkm.h>
#include <..\Marlin\boards.h>
#include <..\Marlin\buzzer.cpp>
#include <..\Marlin\buzzer.h>
#include <..\Marlin\cardreader.cpp>
#include <..\Marlin\cardreader.h>
#include <..\Marlin\configuration_store.cpp>
#include <..\Marlin\configuration_store.h>
#include <..\Marlin\dac_mcp4728.cpp>
#include <..\Marlin\dac_mcp4728.h>
#include <..\Marlin\digipot_mcp4451.cpp>
#include <..\Marlin\dogm_bitmaps.h>
#include <..\Marlin\dogm_font_data_6x9_marlin.h>
#include <..\Marlin\dogm_font_data_HD44780_C.h>
#include <..\Marlin\dogm_font_data_HD44780_J.h>
#include <..\Marlin\dogm_font_data_HD44780_W.h>
#include <..\Marlin\dogm_font_data_ISO10646_1.h>
#include <..\Marlin\dogm_font_data_ISO10646_5_Cyrillic.h>
#include <..\Marlin\dogm_font_data_ISO10646_CN.h>
#include <..\Marlin\dogm_font_data_ISO10646_Kana.h>
#include <..\Marlin\dogm_font_data_Marlin_symbols.h>
#include <..\Marlin\dogm_lcd_implementation.h>
#include <..\Marlin\fastio.h>
#include <..\Marlin\language.h>
#include <..\Marlin\language_an.h>
#include <..\Marlin\language_bg.h>
#include <..\Marlin\language_ca.h>
#include <..\Marlin\language_cn.h>
#include <..\Marlin\language_cz.h>
#include <..\Marlin\language_da.h>
#include <..\Marlin\language_de.h>
#include <..\Marlin\language_en.h>
#include <..\Marlin\language_es.h>
#include <..\Marlin\language_eu.h>
#include <..\Marlin\language_fi.h>
#include <..\Marlin\language_fr.h>
#include <..\Marlin\language_gl.h>
#include <..\Marlin\language_it.h>
#include <..\Marlin\language_kana.h>
#include <..\Marlin\language_kana_utf8.h>
#include <..\Marlin\language_nl.h>
#include <..\Marlin\language_pl.h>
#include <..\Marlin\language_pt-br.h>
#include <..\Marlin\language_pt-br_utf8.h>
#include <..\Marlin\language_pt.h>
#include <..\Marlin\language_pt_utf8.h>
#include <..\Marlin\language_ru.h>
#include <..\Marlin\language_test.h>
#include <..\Marlin\macros.h>
#include <..\Marlin\mesh_bed_leveling.cpp>
#include <..\Marlin\mesh_bed_leveling.h>
#include <..\Marlin\pins.h>
#include <..\Marlin\pins_3DRAG.h>
#include <..\Marlin\pins_5DPRINT.h>
#include <..\Marlin\pins_99.h>
#include <..\Marlin\pins_A4JP.h>
#include <..\Marlin\pins_AZTEEG_X1.h>
#include <..\Marlin\pins_AZTEEG_X3.h>
#include <..\Marlin\pins_AZTEEG_X3_PRO.h>
#include <..\Marlin\pins_BAM_DICE_DUE.h>
#include <..\Marlin\pins_BQ_ZUM_MEGA_3D.h>
#include <..\Marlin\pins_BRAINWAVE.h>
#include <..\Marlin\pins_BRAINWAVE_PRO.h>
#include <..\Marlin\pins_CHEAPTRONIC.h>
#include <..\Marlin\pins_ELEFU_3.h>
#include <..\Marlin\pins_FELIX2.h>
#include <..\Marlin\pins_GEN3_MONOLITHIC.h>
#include <..\Marlin\pins_GEN3_PLUS.h>
#include <..\Marlin\pins_GEN6.h>
#include <..\Marlin\pins_GEN6_DELUXE.h>
#include <..\Marlin\pins_GEN7_12.h>
#include <..\Marlin\pins_GEN7_13.h>
#include <..\Marlin\pins_GEN7_14.h>
#include <..\Marlin\pins_GEN7_CUSTOM.h>
#include <..\Marlin\pins_K8200.h>
#include <..\Marlin\pins_LEAPFROG.h>
#include <..\Marlin\pins_MEGACONTROLLER.h>
#include <..\Marlin\pins_MEGATRONICS.h>
#include <..\Marlin\pins_MEGATRONICS_2.h>
#include <..\Marlin\pins_MEGATRONICS_3.h>
#include <..\Marlin\pins_MELZI.h>
#include <..\Marlin\pins_MELZI_MAKR3D.h>
#include <..\Marlin\pins_MINIRAMBO.h>
#include <..\Marlin\pins_MINITRONICS.h>
#include <..\Marlin\pins_MKS_13.h>
#include <..\Marlin\pins_MKS_BASE.h>
#include <..\Marlin\pins_OMCA.h>
#include <..\Marlin\pins_OMCA_A.h>
#include <..\Marlin\pins_PRINTRBOARD.h>
#include <..\Marlin\pins_PRINTRBOARD_REVF.h>
#include <..\Marlin\pins_RAMBO.h>
#include <..\Marlin\pins_RAMPS_13.h>
#include <..\Marlin\pins_RAMPS_13_EFB.h>
#include <..\Marlin\pins_RAMPS_14.h>
#include <..\Marlin\pins_RAMPS_14_EFB.h>
#include <..\Marlin\pins_RAMPS_OLD.h>
#include <..\Marlin\pins_RIGIDBOARD.h>
#include <..\Marlin\pins_RUMBA.h>
#include <..\Marlin\pins_SAINSMART_2IN1.h>
#include <..\Marlin\pins_SANGUINOLOLU_11.h>
#include <..\Marlin\pins_SANGUINOLOLU_12.h>
#include <..\Marlin\pins_SAV_MKI.h>
#include <..\Marlin\pins_SETHI.h>
#include <..\Marlin\pins_STB_11.h>
#include <..\Marlin\pins_TEENSY2.h>
#include <..\Marlin\pins_TEENSYLU.h>
#include <..\Marlin\pins_ULTIMAIN_2.h>
#include <..\Marlin\pins_ULTIMAKER.h>
#include <..\Marlin\pins_ULTIMAKER_OLD.h>
#include <..\Marlin\planner.cpp>
#include <..\Marlin\planner.h>
#include <..\Marlin\qr_solve.cpp>
#include <..\Marlin\qr_solve.h>
#include <..\Marlin\servo.cpp>
#include <..\Marlin\servo.h>
#include <..\Marlin\speed_lookuptable.h>
#include <..\Marlin\stepper.cpp>
#include <..\Marlin\stepper.h>
#include <..\Marlin\stepper_dac.cpp>
#include <..\Marlin\stepper_dac.h>
#include <..\Marlin\stepper_indirection.cpp>
#include <..\Marlin\stepper_indirection.h>
#include <..\Marlin\temperature.cpp>
#include <..\Marlin\temperature.h>
#include <..\Marlin\thermistortables.h>
#include <..\Marlin\ultralcd.cpp>
#include <..\Marlin\ultralcd.h>
#include <..\Marlin\ultralcd_implementation_hitachi_HD44780.h>
#include <..\Marlin\ultralcd_st7920_u8glib_rrd.h>
#include <..\Marlin\utf_mapper.h>
#include <..\Marlin\vector_3.cpp>
#include <..\Marlin\vector_3.h>
#include <..\Marlin\watchdog.cpp>
#include <..\Marlin\watchdog.h>
#endif
