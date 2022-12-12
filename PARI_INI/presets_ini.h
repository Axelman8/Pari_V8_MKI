#pragma once

/*=========================================================================================================================*/
/*=========================================================================================================================*/

                            /* ==========================================================
                               ====                                                 =====
                               ====           here are all the presetnames          =====
                               ====                                                 =====
                               ====                 from 0 - 511                    =====
                               ====                                                 =====
                               ====     Paste the info from the Excel page here     =====
                               ====                                                 =====
                               ==========================================================*/  
/*=========================================================================================================================*/
/*=========================================================================================================================*/

void preset_Names(void)
{
  debugln(); debug(" -> Preset names are beeing read from presets.ini.h");
  switch (PresetNumb)
  {

// Delete all below: 
// -> set the cursor in front of case 0 and select (CTRL+SHIFT+END) and then DEL 
// PASTE HERE UNDER your presetnames from the excel file
    
case 0: 
strcpy(PresetName0,("Petrucci REC"));
strcpy(PresetName1,("Petrucci Rig 2020"));
strcpy(PresetName2,("Boogie IIC++"));
strcpy(PresetName3,("JP2C Best Rig"));
strcpy(PresetName4,("JP2C+"));
strcpy(PresetName5,("JohnP MarkIIC+"));
strcpy(PresetName6,("JP's IIC+ v12"));
strcpy(PresetName7,("Mesa MarkIV"));
strcpy(PresetName8,("Mesa TriAxess"));
strcpy(PresetName9,("VidarAus JP2C Rigv5"));

break;

case 10: 
strcpy(PresetName0,("MESA TRIAXIS"));
strcpy(PresetName1,("Mark's Recto TNT"));
strcpy(PresetName2,("Mark's Recto 2"));
strcpy(PresetName3,("Mark Journey Set"));
strcpy(PresetName4,("L.O.G."));
strcpy(PresetName5,("Lamb Of God inspired"));
strcpy(PresetName6,("L.O.G 11th Hour"));
strcpy(PresetName7,("L.O.G 11th Hour"));
strcpy(PresetName8,("Mark Morton Mesa"));
strcpy(PresetName9,("MarkIV_NKD"));

break;

case 20: 
strcpy(PresetName0,("Bag Pipes drone"));
strcpy(PresetName1,("<EMPTY>"));
strcpy(PresetName2,("<EMPTY>"));
strcpy(PresetName3,("<EMPTY>"));
strcpy(PresetName4,("Sacrament"));
strcpy(PresetName5,("LAMB OF GOD"));
strcpy(PresetName6,("LAMB OF GOD"));
strcpy(PresetName7,("<EMPTY>"));
strcpy(PresetName8,("Instant Room Cab"));
strcpy(PresetName9,("Lonestar rig"));

break;

case 30: 
strcpy(PresetName0,("TM Lukather"));
strcpy(PresetName1,("Farfegnugen"));
strcpy(PresetName2,("Zakk's Marshall #34"));
strcpy(PresetName3,("Two Amps"));
strcpy(PresetName4,("LAMB OF GOD"));
strcpy(PresetName5,("DiG"));
strcpy(PresetName6,("LT MK IV Cygnus"));
strcpy(PresetName7,("LT Rack (Filth)"));
strcpy(PresetName8,("LT Rack (Clean)"));
strcpy(PresetName9,("F.A.R.K"));

break;

case 40: 
strcpy(PresetName0,("LT Crunch"));
strcpy(PresetName1,("LT Chunk"));
strcpy(PresetName2,("MCU"));
strcpy(PresetName3,("Rockbone!"));
strcpy(PresetName4,("Skull Crusher"));
strcpy(PresetName5,("Powerball ENGL AX3"));
strcpy(PresetName6,("<EMPTY>"));
strcpy(PresetName7,("<EMPTY>"));
strcpy(PresetName8,("<EMPTY>"));
strcpy(PresetName9,("<EMPTY>"));

break;

case 50: 
strcpy(PresetName0,("<EMPTY>"));
strcpy(PresetName1,("<EMPTY>"));
strcpy(PresetName2,("<EMPTY>"));
strcpy(PresetName3,("<EMPTY>"));
strcpy(PresetName4,("<EMPTY>"));
strcpy(PresetName5,("<EMPTY>"));
strcpy(PresetName6,("<EMPTY>"));
strcpy(PresetName7,("<EMPTY>"));
strcpy(PresetName8,("<EMPTY>"));
strcpy(PresetName9,("<EMPTY>"));

break;

case 60: 
strcpy(PresetName0,("SLO Savage"));
strcpy(PresetName1,("Savage"));
strcpy(PresetName2,("8 String Djent"));
strcpy(PresetName3,("FAS Me!"));
strcpy(PresetName4,("Ambient Djentymist"));
strcpy(PresetName5,("6160 Rhythm"));
strcpy(PresetName6,("GHoffman's Djent Scenes"));
strcpy(PresetName7,("chris' djent tone"));
strcpy(PresetName8,("2dor"));
strcpy(PresetName9,("Devil's bleeding crown"));

break;

case 70: 
strcpy(PresetName0,("USA 2C++ (Anthony Thiessen '22)"));
strcpy(PresetName1,("MG jp2c  mids"));
strcpy(PresetName2,("JPIIC+ Scene Ignore - CCFF#23"));
strcpy(PresetName3,("MP Van Halen 90's"));
strcpy(PresetName4,("MP Synth"));
strcpy(PresetName5,("BAd Boys"));
strcpy(PresetName6,("<EMPTY>"));
strcpy(PresetName7,("<EMPTY>"));
strcpy(PresetName8,("<EMPTY>"));
strcpy(PresetName9,("<EMPTY>"));

break;

case 80: 
strcpy(PresetName0,("Fryette D60 Flg L Phr R"));
strcpy(PresetName1,("MP Van Halen 90's"));
strcpy(PresetName2,("Thorndendal Modern"));
strcpy(PresetName3,("Meshuggah Demiurge"));
strcpy(PresetName4,("OMEGA 2"));
strcpy(PresetName5,("GRINDING FORTON"));
strcpy(PresetName6,("Meshuggah"));
strcpy(PresetName7,("Meshuggah FBM Rhythm"));
strcpy(PresetName8,("Meshuggah FBM Solo"));
strcpy(PresetName9,("Meshuggah FBM Rhythm"));

break;

case 90: 
strcpy(PresetName0,("Evailution 1 AM8"));
strcpy(PresetName1,("Steve Vai FTLOG"));
strcpy(PresetName2,("For The Love Of God"));
strcpy(PresetName3,("Evailution 1"));
strcpy(PresetName4,("Evailution 2"));
strcpy(PresetName5,("Legator Ninja (Fishman Modern)"));
strcpy(PresetName6,("Legator Ninja (Fishman Modern)"));
strcpy(PresetName7,("Lamb Of God"));
strcpy(PresetName8,("MetallicA Live 89"));
strcpy(PresetName9,("MetallicA"));

break;

case 100: 
strcpy(PresetName0,(">BLUES PACK<"));
strcpy(PresetName1,("Rockin' Train"));
strcpy(PresetName2,("Dr Z's blues"));
strcpy(PresetName3,("Carol-Ann OD2 lead 1"));
strcpy(PresetName4,("Carol-Ann OD2 lead 2"));
strcpy(PresetName5,("Carol-Ann OD2 lead 3"));
strcpy(PresetName6,("Fat Buddah"));
strcpy(PresetName7,("Bright Buddah"));
strcpy(PresetName8,("Bludojai Lead 1"));
strcpy(PresetName9,("Bludojai Lead 2"));

break;

case 110: 
strcpy(PresetName0,("Two Rock to rock"));
strcpy(PresetName1,("Two Rock to rock II"));
strcpy(PresetName2,("Zen Wreck"));
strcpy(PresetName3,("FAS Wreck"));
strcpy(PresetName4,("What the Fuchs is goin'"));
strcpy(PresetName5,("ODS-100 Lead 1"));
strcpy(PresetName6,("ODS-100 Lead 2"));
strcpy(PresetName7,("ODS-100 Lead 3"));
strcpy(PresetName8,("ODS-100 Lead 4 Joe B"));
strcpy(PresetName9,("ODS-100 HRM Mid lead"));

break;

case 120: 
strcpy(PresetName0,("ODS-100 Ford lead 1"));
strcpy(PresetName1,("ODS-100 Ford lead 2"));
strcpy(PresetName2,("ODS-100 Ford lead 3"));
strcpy(PresetName3,("Dumble and Dumbler"));
strcpy(PresetName4,("Fat ODS-100"));
strcpy(PresetName5,("Fat lead"));
strcpy(PresetName6,("Komet Concorde 1"));
strcpy(PresetName7,("Komet Concorde 2"));
strcpy(PresetName8,("Komet Concorde 3"));
strcpy(PresetName9,("Tucana blues 1"));

break;

case 130: 
strcpy(PresetName0,("Tucana blues 2"));
strcpy(PresetName1,("Hook blues"));
strcpy(PresetName2,("Warm BogFish lead"));
strcpy(PresetName3,("5F1 Tweed EC"));
strcpy(PresetName4,("Blues Jr Fat"));
strcpy(PresetName5,("Texas Blues - Lonestar"));
strcpy(PresetName6,("Texas Blues - Vibroking"));
strcpy(PresetName7,("Texas Blues - VibratoVerb"));
strcpy(PresetName8,("Texas Blues - Bandmaster"));
strcpy(PresetName9,("Texas Blues - Super Reverb"));

break;

case 140: 
strcpy(PresetName0,("Texas Blues - Princeton"));
strcpy(PresetName1,("Texas Blues - Dr Z"));
strcpy(PresetName2,("Texas Blues - Bassman"));
strcpy(PresetName3,("Dirty tweed"));
strcpy(PresetName4,("Andy Little Wing"));
strcpy(PresetName5,("Just one night"));
strcpy(PresetName6,("AC20 crunch"));
strcpy(PresetName7,("AC20 crunch 2"));
strcpy(PresetName8,("AC20 fusion 1"));
strcpy(PresetName9,("AC20 fusion 2"));

break;

case 150: 
strcpy(PresetName0,("AC20 fusion 3"));
strcpy(PresetName1,("Crunchy D30"));
strcpy(PresetName2,("Div/13 crunch"));
strcpy(PresetName3,("J. Mayer I"));
strcpy(PresetName4,("J. Mayer II"));
strcpy(PresetName5,("J. Mayer III"));
strcpy(PresetName6,("Fat Carol"));
strcpy(PresetName7,("Dirty Carol"));
strcpy(PresetName8,("Crunchy Rocket"));
strcpy(PresetName9,("Dirty Texas Blues"));

break;

case 160: 
strcpy(PresetName0,("Vintage Santana"));
strcpy(PresetName1,("My_Asato"));
strcpy(PresetName2,("Flexi Rig"));
strcpy(PresetName3,("Flexi-Rig II"));
strcpy(PresetName4,("<EMPTY>"));
strcpy(PresetName5,("<EMPTY>"));
strcpy(PresetName6,("<EMPTY>"));
strcpy(PresetName7,("<EMPTY>"));
strcpy(PresetName8,("<EMPTY>"));
strcpy(PresetName9,("<EMPTY>"));

break;

case 170: 
strcpy(PresetName0,("<EMPTY>"));
strcpy(PresetName1,("<EMPTY>"));
strcpy(PresetName2,("<EMPTY>"));
strcpy(PresetName3,("<EMPTY>"));
strcpy(PresetName4,("<EMPTY>"));
strcpy(PresetName5,("<EMPTY>"));
strcpy(PresetName6,("<EMPTY>"));
strcpy(PresetName7,("<EMPTY>"));
strcpy(PresetName8,("<EMPTY>"));
strcpy(PresetName9,("<EMPTY>"));

break;

case 180: 
strcpy(PresetName0,("<EMPTY>"));
strcpy(PresetName1,("<EMPTY>"));
strcpy(PresetName2,("<EMPTY>"));
strcpy(PresetName3,("<EMPTY>"));
strcpy(PresetName4,("<EMPTY>"));
strcpy(PresetName5,("<EMPTY>"));
strcpy(PresetName6,("<EMPTY>"));
strcpy(PresetName7,("<EMPTY>"));
strcpy(PresetName8,("<EMPTY>"));
strcpy(PresetName9,("<EMPTY>"));

break;

case 190: 
strcpy(PresetName0,("<EMPTY>"));
strcpy(PresetName1,("<EMPTY>"));
strcpy(PresetName2,("<EMPTY>"));
strcpy(PresetName3,("<EMPTY>"));
strcpy(PresetName4,("<EMPTY>"));
strcpy(PresetName5,("<EMPTY>"));
strcpy(PresetName6,("<EMPTY>"));
strcpy(PresetName7,("<EMPTY>"));
strcpy(PresetName8,("<EMPTY>"));
strcpy(PresetName9,("<EMPTY>"));

break;

case 200: 
strcpy(PresetName0,(">BRITT PACK<"));
strcpy(PresetName1,("Plexi 50w Normal"));
strcpy(PresetName2,("Plexi 50w Jump"));
strcpy(PresetName3,("Plexi 50w Jump 2"));
strcpy(PresetName4,("Plexi 100w High"));
strcpy(PresetName5,("Plexi 100w 1970"));
strcpy(PresetName6,("Plexi 100w 1970 II"));
strcpy(PresetName7,("Plexi 50w 6550"));
strcpy(PresetName8,("Plexi 50w 6550 II"));
strcpy(PresetName9,("Plexi 1959SLP Jump"));

break;

case 210: 
strcpy(PresetName0,("Plexi 2204"));
strcpy(PresetName1,("Plexi + Klon"));
strcpy(PresetName2,("Plexi 1987x Jump"));
strcpy(PresetName3,("Brit 800"));
strcpy(PresetName4,("Brit 800 #34"));
strcpy(PresetName5,("Brit 800 Mod"));
strcpy(PresetName6,("Brit JVM OD2 Green"));
strcpy(PresetName7,("Brit JVM OD2 Orange"));
strcpy(PresetName8,("Brit JVM OD2 Red"));
strcpy(PresetName9,("Brit JMPre-1 OD1 BS"));

break;

case 220: 
strcpy(PresetName0,("Brit JMPre-1 OD2 BS"));
strcpy(PresetName1,("Brit Pre"));
strcpy(PresetName2,("Dual Brit JMP"));
strcpy(PresetName3,("Brit JTM45 1 fat"));
strcpy(PresetName4,("Brit JTM45 2 acid"));
strcpy(PresetName5,("Brit JTM45 3"));
strcpy(PresetName6,("Old Plexi 1"));
strcpy(PresetName7,("Old Plexi 2"));
strcpy(PresetName8,("Plexi AC/DC"));
strcpy(PresetName9,("Brit Silver"));

break;

case 230: 
strcpy(PresetName0,("Brit Super"));
strcpy(PresetName1,("Hell's Belles"));
strcpy(PresetName2,("Spawn Q-Rod OD1-1"));
strcpy(PresetName3,("Spawn Q-Rod OD1-2"));
strcpy(PresetName4,("Spawn Q-Rod OD1-3"));
strcpy(PresetName5,("Spawn Nitrous 1"));
strcpy(PresetName6,("Spawn Nitrous 2"));
strcpy(PresetName7,("Atomica High 1"));
strcpy(PresetName8,("Atomica High 2"));
strcpy(PresetName9,("Cameron CCV 2A"));

break;

case 240: 
strcpy(PresetName0,("Cameron CCV 2C"));
strcpy(PresetName1,("Evil Citrus"));
strcpy(PresetName2,("Toxic Citrus"));
strcpy(PresetName3,("FAS Crunch"));
strcpy(PresetName4,("Hellios"));
strcpy(PresetName5,("Plexi 50w 6CA7"));
strcpy(PresetName6,("Vox Populi"));
strcpy(PresetName7,("Vox Dei"));
strcpy(PresetName8,("The quick brown Vox 8sc"));
strcpy(PresetName9,("Vox stacked delays"));

break;

case 250: 
strcpy(PresetName0,("A30 blue"));
strcpy(PresetName1,("<EMPTY>"));
strcpy(PresetName2,("<EMPTY>"));
strcpy(PresetName3,("<EMPTY>"));
strcpy(PresetName4,("<EMPTY>"));
strcpy(PresetName5,("<EMPTY>"));
strcpy(PresetName6,("<EMPTY>"));
strcpy(PresetName7,("<EMPTY>"));
strcpy(PresetName8,("<EMPTY>"));
strcpy(PresetName9,("<EMPTY>"));

break;

case 260: 
strcpy(PresetName0,("GRINDING FORTON 2"));
strcpy(PresetName1,("GRINDING FORTON"));
strcpy(PresetName2,("NAMELESS FORTON"));
strcpy(PresetName3,("NAMELESS"));
strcpy(PresetName4,("OMEGA 2"));
strcpy(PresetName5,("OMEGA BEEFY 2"));
strcpy(PresetName6,("OMEGA BEEFY"));
strcpy(PresetName7,("OMEGA SCOOPED 2"));
strcpy(PresetName8,("OMEGA SCOOPED"));
strcpy(PresetName9,("OMEGA"));

break;

case 270: 
strcpy(PresetName0,("SAWN THROUGH 2"));
strcpy(PresetName1,("SWALLOWED WHOLE"));
strcpy(PresetName2,("AMBIENT CLEAN"));
strcpy(PresetName3,("ARCH AIR"));
strcpy(PresetName4,("<EMPTY>"));
strcpy(PresetName5,("<EMPTY>"));
strcpy(PresetName6,("<EMPTY>"));
strcpy(PresetName7,("<EMPTY>"));
strcpy(PresetName8,("<EMPTY>"));
strcpy(PresetName9,("<EMPTY>"));

break;

case 280: 
strcpy(PresetName0,("NKP Dream Theater"));
strcpy(PresetName1,("NKP metallica"));
strcpy(PresetName2,("NKP malmsteen"));
strcpy(PresetName3,("NKP muse (plug in baby)"));
strcpy(PresetName4,("NKP meshuggah"));
strcpy(PresetName5,("NKP hendrix"));
strcpy(PresetName6,("NKP nirvana"));
strcpy(PresetName7,("NKP guns N roses"));
strcpy(PresetName8,("NKP Slayer"));
strcpy(PresetName9,("NKP AC/DC"));

break;

case 290: 
strcpy(PresetName0,("<EMPTY>"));
strcpy(PresetName1,("<EMPTY>"));
strcpy(PresetName2,("<EMPTY>"));
strcpy(PresetName3,("<EMPTY>"));
strcpy(PresetName4,("<EMPTY>"));
strcpy(PresetName5,("<EMPTY>"));
strcpy(PresetName6,("<EMPTY>"));
strcpy(PresetName7,("<EMPTY>"));
strcpy(PresetName8,("<EMPTY>"));
strcpy(PresetName9,("<EMPTY>"));

break;

case 300: 
strcpy(PresetName0,("<EMPTY>"));
strcpy(PresetName1,("<EMPTY>"));
strcpy(PresetName2,("<EMPTY>"));
strcpy(PresetName3,("<EMPTY>"));
strcpy(PresetName4,("<EMPTY>"));
strcpy(PresetName5,("<EMPTY>"));
strcpy(PresetName6,("<EMPTY>"));
strcpy(PresetName7,("<EMPTY>"));
strcpy(PresetName8,("<EMPTY>"));
strcpy(PresetName9,("<EMPTY>"));

break;

case 310: 
strcpy(PresetName0,("<EMPTY>"));
strcpy(PresetName1,("<EMPTY>"));
strcpy(PresetName2,("<EMPTY>"));
strcpy(PresetName3,("<EMPTY>"));
strcpy(PresetName4,("<EMPTY>"));
strcpy(PresetName5,("<EMPTY>"));
strcpy(PresetName6,("<EMPTY>"));
strcpy(PresetName7,("<EMPTY>"));
strcpy(PresetName8,("<EMPTY>"));
strcpy(PresetName9,("<EMPTY>"));

break;

case 320: 
strcpy(PresetName0,("<EMPTY>"));
strcpy(PresetName1,("<EMPTY>"));
strcpy(PresetName2,("<EMPTY>"));
strcpy(PresetName3,("<EMPTY>"));
strcpy(PresetName4,("<EMPTY>"));
strcpy(PresetName5,("<EMPTY>"));
strcpy(PresetName6,("<EMPTY>"));
strcpy(PresetName7,("<EMPTY>"));
strcpy(PresetName8,("<EMPTY>"));
strcpy(PresetName9,("<EMPTY>"));

break;

case 330: 
strcpy(PresetName0,("<EMPTY>"));
strcpy(PresetName1,("<EMPTY>"));
strcpy(PresetName2,("<EMPTY>"));
strcpy(PresetName3,("<EMPTY>"));
strcpy(PresetName4,("<EMPTY>"));
strcpy(PresetName5,("<EMPTY>"));
strcpy(PresetName6,("<EMPTY>"));
strcpy(PresetName7,("<EMPTY>"));
strcpy(PresetName8,("<EMPTY>"));
strcpy(PresetName9,("<EMPTY>"));

break;

case 340: 
strcpy(PresetName0,("<EMPTY>"));
strcpy(PresetName1,("<EMPTY>"));
strcpy(PresetName2,("<EMPTY>"));
strcpy(PresetName3,("<EMPTY>"));
strcpy(PresetName4,("<EMPTY>"));
strcpy(PresetName5,("<EMPTY>"));
strcpy(PresetName6,("<EMPTY>"));
strcpy(PresetName7,("<EMPTY>"));
strcpy(PresetName8,("<EMPTY>"));
strcpy(PresetName9,("<EMPTY>"));

break;

case 350: 
strcpy(PresetName0,("<EMPTY>"));
strcpy(PresetName1,("<EMPTY>"));
strcpy(PresetName2,("<EMPTY>"));
strcpy(PresetName3,("<EMPTY>"));
strcpy(PresetName4,("<EMPTY>"));
strcpy(PresetName5,("<EMPTY>"));
strcpy(PresetName6,("<EMPTY>"));
strcpy(PresetName7,("<EMPTY>"));
strcpy(PresetName8,("<EMPTY>"));
strcpy(PresetName9,("<EMPTY>"));

break;

case 360: 
strcpy(PresetName0,("<EMPTY>"));
strcpy(PresetName1,("<EMPTY>"));
strcpy(PresetName2,("<EMPTY>"));
strcpy(PresetName3,("<EMPTY>"));
strcpy(PresetName4,("<EMPTY>"));
strcpy(PresetName5,("<EMPTY>"));
strcpy(PresetName6,("<EMPTY>"));
strcpy(PresetName7,("<EMPTY>"));
strcpy(PresetName8,("<EMPTY>"));
strcpy(PresetName9,("<EMPTY>"));

break;

case 370: 
strcpy(PresetName0,("<EMPTY>"));
strcpy(PresetName1,("<EMPTY>"));
strcpy(PresetName2,("<EMPTY>"));
strcpy(PresetName3,("<EMPTY>"));
strcpy(PresetName4,("<EMPTY>"));
strcpy(PresetName5,("<EMPTY>"));
strcpy(PresetName6,("<EMPTY>"));
strcpy(PresetName7,("<EMPTY>"));
strcpy(PresetName8,("<EMPTY>"));
strcpy(PresetName9,("<EMPTY>"));

break;

case 380: 
strcpy(PresetName0,("<EMPTY>"));
strcpy(PresetName1,("<EMPTY>"));
strcpy(PresetName2,("<EMPTY>"));
strcpy(PresetName3,("<EMPTY>"));
strcpy(PresetName4,("<EMPTY>"));
strcpy(PresetName5,("<EMPTY>"));
strcpy(PresetName6,("<EMPTY>"));
strcpy(PresetName7,("<EMPTY>"));
strcpy(PresetName8,("<EMPTY>"));
strcpy(PresetName9,("<EMPTY>"));

break;

case 390: 
strcpy(PresetName0,("<EMPTY>"));
strcpy(PresetName1,("<EMPTY>"));
strcpy(PresetName2,("<EMPTY>"));
strcpy(PresetName3,("<EMPTY>"));
strcpy(PresetName4,("<EMPTY>"));
strcpy(PresetName5,("<EMPTY>"));
strcpy(PresetName6,("<EMPTY>"));
strcpy(PresetName7,("<EMPTY>"));
strcpy(PresetName8,("<EMPTY>"));
strcpy(PresetName9,("<EMPTY>"));

break;

case 400: 
strcpy(PresetName0,("<EMPTY>"));
strcpy(PresetName1,("<EMPTY>"));
strcpy(PresetName2,("<EMPTY>"));
strcpy(PresetName3,("<EMPTY>"));
strcpy(PresetName4,("<EMPTY>"));
strcpy(PresetName5,("<EMPTY>"));
strcpy(PresetName6,("<EMPTY>"));
strcpy(PresetName7,("<EMPTY>"));
strcpy(PresetName8,("<EMPTY>"));
strcpy(PresetName9,("<EMPTY>"));

break;

case 410: 
strcpy(PresetName0,("<EMPTY>"));
strcpy(PresetName1,("<EMPTY>"));
strcpy(PresetName2,("<EMPTY>"));
strcpy(PresetName3,("<EMPTY>"));
strcpy(PresetName4,("<EMPTY>"));
strcpy(PresetName5,("<EMPTY>"));
strcpy(PresetName6,("<EMPTY>"));
strcpy(PresetName7,("<EMPTY>"));
strcpy(PresetName8,("<EMPTY>"));
strcpy(PresetName9,("<EMPTY>"));

break;

case 420: 
strcpy(PresetName0,("<EMPTY>"));
strcpy(PresetName1,("<EMPTY>"));
strcpy(PresetName2,("<EMPTY>"));
strcpy(PresetName3,("<EMPTY>"));
strcpy(PresetName4,("<EMPTY>"));
strcpy(PresetName5,("<EMPTY>"));
strcpy(PresetName6,("<EMPTY>"));
strcpy(PresetName7,("<EMPTY>"));
strcpy(PresetName8,("<EMPTY>"));
strcpy(PresetName9,("<EMPTY>"));

break;

case 430: 
strcpy(PresetName0,("<EMPTY>"));
strcpy(PresetName1,("<EMPTY>"));
strcpy(PresetName2,("<EMPTY>"));
strcpy(PresetName3,("<EMPTY>"));
strcpy(PresetName4,("<EMPTY>"));
strcpy(PresetName5,("<EMPTY>"));
strcpy(PresetName6,("<EMPTY>"));
strcpy(PresetName7,("<EMPTY>"));
strcpy(PresetName8,("<EMPTY>"));
strcpy(PresetName9,("<EMPTY>"));

break;

case 440: 
strcpy(PresetName0,("<EMPTY>"));
strcpy(PresetName1,("<EMPTY>"));
strcpy(PresetName2,("<EMPTY>"));
strcpy(PresetName3,("<EMPTY>"));
strcpy(PresetName4,("<EMPTY>"));
strcpy(PresetName5,("<EMPTY>"));
strcpy(PresetName6,("<EMPTY>"));
strcpy(PresetName7,("<EMPTY>"));
strcpy(PresetName8,("<EMPTY>"));
strcpy(PresetName9,("<EMPTY>"));

break;

case 450: 
strcpy(PresetName0,("<EMPTY>"));
strcpy(PresetName1,("<EMPTY>"));
strcpy(PresetName2,("<EMPTY>"));
strcpy(PresetName3,("<EMPTY>"));
strcpy(PresetName4,("<EMPTY>"));
strcpy(PresetName5,("<EMPTY>"));
strcpy(PresetName6,("<EMPTY>"));
strcpy(PresetName7,("<EMPTY>"));
strcpy(PresetName8,("<EMPTY>"));
strcpy(PresetName9,("<EMPTY>"));

break;

case 460: 
strcpy(PresetName0,("<EMPTY>"));
strcpy(PresetName1,("<EMPTY>"));
strcpy(PresetName2,("<EMPTY>"));
strcpy(PresetName3,("<EMPTY>"));
strcpy(PresetName4,("<EMPTY>"));
strcpy(PresetName5,("<EMPTY>"));
strcpy(PresetName6,("<EMPTY>"));
strcpy(PresetName7,("<EMPTY>"));
strcpy(PresetName8,("<EMPTY>"));
strcpy(PresetName9,("Ping-Pong Pong-Ping"));

break;

case 470: 
strcpy(PresetName0,("8-Voice Chorus"));
strcpy(PresetName1,("Dual Clean"));
strcpy(PresetName2,("New Country"));
strcpy(PresetName3,("In a Fixx"));
strcpy(PresetName4,("L.A. Session Clean"));
strcpy(PresetName5,("Yngwie!"));
strcpy(PresetName6,("Mr.Gilmour Lead"));
strcpy(PresetName7,("Plate Collection"));
strcpy(PresetName8,("Chugnuts"));
strcpy(PresetName9,("Ned Beatty"));

break;

case 480: 
strcpy(PresetName0,("A Kind of Dream"));
strcpy(PresetName1,("Spandex & Hairspray"));
strcpy(PresetName2,("Avant Jazz"));
strcpy(PresetName3,("Stone in Love"));
strcpy(PresetName4,("Fifth Tribe"));
strcpy(PresetName5,("Ambient Guitar"));
strcpy(PresetName6,("Eruption"));
strcpy(PresetName7,("Thrilling Chilling"));
strcpy(PresetName8,("Mr.Floyd"));
strcpy(PresetName9,("Barracuda"));

break;

case 490: 
strcpy(PresetName0,("Solar Eclipses"));
strcpy(PresetName1,("Comb Delays"));
strcpy(PresetName2,("Blitz III"));
strcpy(PresetName3,("Pitch Follower"));
strcpy(PresetName4,("The Infield"));
strcpy(PresetName5,("Polychromatic Shifter"));
strcpy(PresetName6,("1987 Clean"));
strcpy(PresetName7,("Sultans"));
strcpy(PresetName8,("RockMeOn CLN2"));
strcpy(PresetName9,("Jeff Gets Ready"));

break;

case 500: 
strcpy(PresetName0,("Diamonique Rain"));
strcpy(PresetName1,("Pete-a-Palooza"));
strcpy(PresetName2,("Larry Mitchell NY Steak"));
strcpy(PresetName3,("Mark's Day's Recto Cygnus"));
strcpy(PresetName4,("Fremen's Drones of Arrakis"));
strcpy(PresetName5,("Brett's Party Pack"));
strcpy(PresetName6,("Brett's Party Pack 2"));
strcpy(PresetName7,("AustinBuddy's XTCs"));
strcpy(PresetName8,("Leon's Live"));
strcpy(PresetName9,("Out1:FOH Out2:Cab"));

break;

case 510: 
strcpy(PresetName0,("Amp Match Template"));
strcpy(PresetName1,("BYPASS"));
strcpy(PresetName2,("NOT AVAILABLE"));
strcpy(PresetName3,("NOT AVAILABLE"));
strcpy(PresetName4,("NOT AVAILABLE"));
strcpy(PresetName5,("NOT AVAILABLE"));
strcpy(PresetName6,("NOT AVAILABLE"));
strcpy(PresetName7,("NOT AVAILABLE"));
strcpy(PresetName8,("NOT AVAILABLE"));
strcpy(PresetName9,("NOT AVAILABLE"));

break;

 }
}
