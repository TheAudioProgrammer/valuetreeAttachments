/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class ValuetreeAttachmentsAudioProcessorEditor  : public AudioProcessorEditor
{
public:
    ValuetreeAttachmentsAudioProcessorEditor (ValuetreeAttachmentsAudioProcessor&);
    ~ValuetreeAttachmentsAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
    Slider slider;
    Slider dial;
    TextButton powerButton;
    ComboBox choiceBox;
    
    ValuetreeAttachmentsAudioProcessor& processor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ValuetreeAttachmentsAudioProcessorEditor)
};
