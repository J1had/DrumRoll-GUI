/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"
//==============================================================================

int motorSpeed;

MainComponent::MainComponent()
{
    // Return the list of serial ports available on the computer.
    StringPairArray portlist = SerialPort::getSerialPortPaths();
    String message;
    
    // List out all the available serial ports on the machine for debugging puposes.
    for (int i=0; i < portlist.size(); i++)
    {
        message << portlist.getAllValues()[i] << newLine;
    }
    Logger::getCurrentLogger()->writeToLog(message);

    // Open the desired serial port.
    if(portlist.size())
    {
        pSP = new SerialPort(
                portlist.getAllValues()[0], // Zero-index means commputing with the first serial point. 
                SerialPortConfig(9600, 8, SerialPortConfig::SERIALPORT_PARITY_NONE, SerialPortConfig::STOPBITS_1, SerialPortConfig::FLOWCONTROL_NONE)
            );
        
    }
    
    
    
    dial1.setSliderStyle(Slider::Rotary);
    dial1.setRange(50, 1000);
    dial1.setTextBoxStyle (Slider::NoTextBox, false, 0, 0);
    addAndMakeVisible (dial1);
    
    
    dial2.setSliderStyle(Slider::Rotary);
    dial2.setTextBoxStyle(Slider::NoTextBox, false, 0,0);
    addAndMakeVisible(dial2);
    
    button1.setButtonText("Play");
    addAndMakeVisible (button1);
    button2.setButtonText("Stop");
    addAndMakeVisible (button2);
    button3.setButtonText("Connect");
    addAndMakeVisible (button3);
    button4.setButtonText("Settings");
    addAndMakeVisible (button4);
    button5.setButtonText("Wizard");
    addAndMakeVisible (button5);
    
    setSize (800, 600);
    
}

MainComponent::~MainComponent()
{
}

//==============================================================================



void MainComponent::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));
    getLookAndFeel().setColour (Slider::thumbColourId, Colours::white);
    
    g.setFont (Font (16.0f));
    g.setColour (Colours::black);
}

void MainComponent::resized()
{
    auto border = 5;
    
    auto area = getLocalBounds();
    
    auto dialArea = area.removeFromTop (area.getHeight() / 2);
    dial1.setBounds (dialArea.removeFromLeft (dialArea.getWidth() / 2).reduced (border));
    dial2.setBounds (dialArea.reduced (border));
    
    auto buttonHeight = 50;
    
    button1.setBounds (area.removeFromTop (buttonHeight).reduced (border));
    button2.setBounds (area.removeFromTop (buttonHeight).reduced (border));
    button3.setBounds (area.removeFromTop (buttonHeight).reduced (border));
    button4.setBounds (area.removeFromTop (buttonHeight).reduced (border));
    button5.setBounds (area.removeFromTop (buttonHeight).reduced (border));
    
    // This is called when the MainComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
}
