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

    Font font ("Helvetica", "Regular", 10.0f);
    //Font font (10.0f);
    string.setFont(font);

    Time time = Time::getCurrentTime();
    layout.createLayout(string, 600 /*400*/);
    DBG(String("Time taken: ") << (time - Time::getCurrentTime()).getDescription());

    setSize (layout.getWidth(), layout.getHeight());
}

MainContentComponent::~MainContentComponent()
{
}

void MainContentComponent::paint (Graphics& g)
{
    juce::Rectangle<int> bounds = getBounds();

    // Draw layout at the bottom
    layout.draw(g, bounds.toFloat());
}

void MainContentComponent::resized()
{
}
