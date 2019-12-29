/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
ValuetreeAttachmentsAudioProcessorEditor::ValuetreeAttachmentsAudioProcessorEditor (ValuetreeAttachmentsAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    //Float
    slider.setSliderStyle (Slider::SliderStyle::LinearVertical);
    slider.setTextBoxStyle (Slider::TextEntryBoxPosition::TextBoxBelow, true, 50, 10);
    slider.setRange (0.0, 1.0, 0.1);
    addAndMakeVisible (slider);
    
    //Int
    dial.setSliderStyle (Slider::SliderStyle::RotaryVerticalDrag);
    dial.setTextBoxStyle (Slider::TextEntryBoxPosition::TextBoxBelow, true, 50, 10);
    dial.setRange (0, 10, 1);
    addAndMakeVisible (dial);
    
    //Bool
    powerButton.setColour (TextButton::buttonColourId, Colours::red);
    powerButton.setColour (TextButton::buttonOnColourId, Colours::green);
    powerButton.setClickingTogglesState (true);
    powerButton.onClick = [this]() { };
    addAndMakeVisible (powerButton);
    
    //Choice
    choiceBox.addItem ("Choice1", 1);
    choiceBox.addItem ("Choice2", 2);
    choiceBox.addItem ("Choice3", 3);
    choiceBox.setJustificationType (Justification::centred);
    addAndMakeVisible (choiceBox);
    
    setSize (400, 800);
}

ValuetreeAttachmentsAudioProcessorEditor::~ValuetreeAttachmentsAudioProcessorEditor()
{
}

//==============================================================================
void ValuetreeAttachmentsAudioProcessorEditor::paint (Graphics& g)
{
    g.fillAll (Colours::black);
    
    const int border { 10 };
    
    g.setColour (Colours::yellow);
    g.setFont (20.0f);
    g.drawText ("Audio Parameter Float", getWidth() / 2 - 100, border, 200, 20, Justification::centred);
    g.drawText ("Audio Parameter Int", getWidth() / 2 - 100, 200 + border, 200, 20, Justification::centred);
    g.drawText ("Audio Parameter Bool", getWidth() / 2 - 100, 400 + border, 200, 20, Justification::centred);
    g.drawText ("Audio Parameter Choice", getWidth() / 2 - 100, 600 + border, 200, 20, Justification::centred);
    
    const int sectionSize { 200 };
    
    for (int i = sectionSize; i < getHeight(); i+=sectionSize)
    {
        g.setColour (Colours::white);
        g.drawLine (0, i, getWidth(), i, 10);
    }
}

void ValuetreeAttachmentsAudioProcessorEditor::resized()
{
    auto bounds = getLocalBounds();
    const int componentSize { 100 };
    
    slider.setBounds (bounds.removeFromTop (200).withSizeKeepingCentre (componentSize, componentSize));
    dial.setBounds (bounds.removeFromTop (200).withSizeKeepingCentre (componentSize, componentSize));
    powerButton.setBounds (bounds.removeFromTop (200).withSizeKeepingCentre (componentSize, componentSize));
    choiceBox.setBounds (bounds.removeFromTop (200).withSizeKeepingCentre (180, 40));
}
