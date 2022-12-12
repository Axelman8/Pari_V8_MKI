# Pari_V8_MKI FINAL

 Fractal Audio axeFxIII midi controller MK1

This version is the FINAL version for the MKI on the Arduino DUE

several new functions 

* A user .ini file to make personal configuration settings.
* NEW ability to see effects in the scenpage 
* Toggle effects by holding the button for 0.35sec
* Hold button to go to the auditionmode
* Hold to go to the Looper
* Reselecting the scene will restore the effect toggle to default
* Reselecting the preset in presetscreen will exit presetscreen and goto scenepage
* Reselecting the preset in auditionModescreen will exit presetmode and goto scenepage
* Holding the button to toggle the effect in the effectpage will do nothing... No more toggling errors

You can customize your own colorsceme in the SD_ini.h file
Just change the colorcode  TFT_[color]  

HOW:  f.i.
Open the SD_ini.h file in notepad++ 
Change TFT_BLACK to TFT_YELLOW and save 
Reflash the .ino to the Arduino and you have changed the color


first time user?
Copy the PARI_INI folder to:
C:\Users[your_name]\Documents\Arduino\libraries\PARI_INI

===========================================================================

library file: SD_ini.h

-> Define the function on the screens 5, 10, 11, 12, 13, 14, 15

-> Boot-up TFT screen background color and text color

-> TFT screen background color (all function screens) and text color row 1, row 2, row 3 -> This can be set for the Scenes screen, presets screen, effects screen, AMP ABCD screen, Tuner screen, Number screen, Tempo screen, preset up / down screen.

-> Border color settings for active screen (default is green)

===========================================================================

library file: vpreset_amp_ini.h

-> placeholder for all your personal used AMP1 and AMP2 names   (if your fractal only has AMP1,  no problem ;) )

===========================================================================

library file: preset_ini.h for the user presets

-> placeholder for all your preset names 0-511

===========================================================================

What is the benefit?

With this file separated from the .ino files, you can flash new software versions, without effecting your own settings.

================

**Future plans**: SKIPPED

**-> having all user config settings in the ini file's, so updates would only be about flashing a .HEX file. No arduino IDE needed** SKIPPED

================

Axelman8
