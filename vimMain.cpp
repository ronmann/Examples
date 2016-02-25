// vimMain.cpp
// Ron Mann
// Practice Program to Organize all of the Features of VIM
#include <iostream>
#include <string>
#include "vimMain.h"
#include "vimQR.h"
#include "vimMenu.h"

using namespace std;
/*****************************************************************/
/***                                                           ***/
/**                                                             **/
/*  MAIN MENU IS IN vimMenu.h                                    */
/**      menu();                                                **/
/***                                                           ***/
/*****************************************************************/

/* LIST OF CONSTRUCTORS FROM vimMain.h   *************************/
    //BasicMovement();
    //InsertionAndReplace();
    //Deletion();
    //VisualMode();
    //InsertMode();
    //Copying();
    //AdvancedInsertion();
    //UndoingAndRepeating();
    //ComplexMovement();
    //SearchAndSubstitution();
    //SpecialCharacters();
    //OffsetInSearchCommands();
    //MarksAndMotions();
    //Tags();
    //ScrollingAndMultiWindowing();
    //KeyMapping_Abbreviations();
    //ExRanges();
    //Misc();
/*****************************************************************/
int main()
{
    menu();
    BasicMovement();
    InsertionAndReplace();
    Deletion();
    VisualMode();
    InsertMode();
    Copying();
    AdvancedInsertion();
    UndoingAndRepeating();
    ComplexMovement();
    SearchAndSubstitution();
    SpecialCharacters();
    OffsetInSearchCommands();
    MarksAndMotions();
    Tags();
    ScrollingAndMultiWindowing();
    KeyMapping_Abbreviations();
    ExRanges();
    Misc();
    return 0;
}


