/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 5.3.2

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2017 - ROLI Ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "Settings.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
/*Settings::Settings ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]
   
    
    textButton.reset (new TextButton ("new button"));
    addAndMakeVisible (textButton.get());
    textButton->setButtonText (TRANS("Change Pattern"));
    textButton->addListener (this);
    textButton->setColour (TextButton::buttonColourId, Colour (0xff614e5d));
    
    textButton->setBounds (192, 200, 216, 24);
    
    textButton2.reset (new TextButton ("new button"));
    addAndMakeVisible (textButton2.get());
    textButton2->setButtonText (TRANS("Configure Port"));
    textButton2->addListener (this);
    textButton2->setColour (TextButton::buttonColourId, Colour (0xff614e5d));
    
    textButton2->setBounds (192, 240, 216, 24);
    
    textButton3.reset (new TextButton ("new button"));
    addAndMakeVisible (textButton3.get());
    textButton3->setButtonText (TRANS("Terminal"));
    textButton3->addListener (this);
    textButton3->setColour (TextButton::buttonColourId, Colour (0xff614e5d));
    
    textButton3->setBounds (192, 280, 216, 24);
    
    
    //[UserPreSize]
    //[/UserPreSize]
    
    setSize (800, 600);
    
    
    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

Settings::~Settings()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]
    
    textButton = nullptr;
    textButton2 = nullptr;
    textButton3 = nullptr;
    
    
    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void Settings::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]
    
    g.fillAll (Colour (0xff323e44));
    
    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void Settings::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]
    
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void Settings::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]
    
    if (buttonThatWasClicked == textButton.get())
    {
        //[UserButtonCode_textButton] -- add your button handler code here..
        //[/UserButtonCode_textButton]
    }
    else if (buttonThatWasClicked == textButton2.get())
    {
        //[UserButtonCode_textButton2] -- add your button handler code here..
        //[/UserButtonCode_textButton2]
    }
    else if (buttonThatWasClicked == textButton3.get())
    {
        //[UserButtonCode_textButton3] -- add your button handler code here..
        //[/UserButtonCode_textButton3]
    }
    
    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]

//==============================================================================
#if 0
  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="Settings" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ff323e44"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/



//[EndFile] You can add extra defines here...
//[/EndFile]
