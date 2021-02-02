//---------------------------------------------------------------------------
//File name:    lang.h                  Revision Date: 2007.05.10
//---------------------------------------------------------------------------
//This file is used both for compiling the wLaunchELF program,
//with default language definitions, and when loading alternate
//language definitions at runtime. For the latter case it is the
//intention that an edited version of this file be used, where
//each string constant has been replaced by one suitable for the
//language to be used. Only the quoted strings should be edited
//for such use, as changing other parts of the lines could cause
//malfunction. The index number controls where in the program a
//string gets used, and the 'name' part is an identifying symbol
//that should remain untranslated even for translated versions,
//so that we can use them as a common reference independent both
//of the language used, and of the index number. Those names do
//not have any effect on loading alternate language definitions.
//--------------------------------------------------------------



//this is the english lang file, wich is the basic lang
//#include "Lang/ENG.LNG"
//to compile with custom language change the file in the previous line with yours.


#include "Lang/SPA.LNG"
