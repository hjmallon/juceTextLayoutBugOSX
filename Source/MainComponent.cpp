/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"

//==============================================================================
MainContentComponent::MainContentComponent()
{
    LookAndFeel::setDefaultLookAndFeel(new TestLookAndFeel());
    string = AttributedString(BinaryData::licence_apache_2_0_txt);

    layout.createLayout(string, 600 /*400*/);

    setSize (600, 800);
}

MainContentComponent::~MainContentComponent()
{
}

void MainContentComponent::paint (Graphics& g)
{
    juce::Rectangle<int> bounds = getBounds();

    // Draw string at the top
    string.draw(g, bounds.removeFromTop(400).toFloat());

    // Draw layout at the bottom
    layout.draw(g, bounds.toFloat());
}

void MainContentComponent::resized()
{
}
