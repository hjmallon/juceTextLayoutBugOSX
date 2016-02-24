/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"

//==============================================================================
MainContentComponent::MainContentComponent()
{
    int64 time;
    LookAndFeel::setDefaultLookAndFeel(new TestLookAndFeel());

    Font nativeFont ("Helvetica", "Regular", 10.0f);
    AttributedString nativeFontString = AttributedString(BinaryData::licence_apache_2_0_txt);
    nativeFontString.setFont(nativeFont);

    time = Time::getMillisecondCounterHiRes();
    nativeFontLayout.createLayout(nativeFontString, 600);
    DBG(String("Time taken to create Native font Layout: ") << String(Time::getMillisecondCounterHiRes() - time) );

    Font bundledFont (10.0f);
    AttributedString bundledFontString = AttributedString(BinaryData::licence_apache_2_0_txt);
    bundledFontString.setFont(bundledFont);

    time = Time::getMillisecondCounterHiRes();
    bundledFontLayout.createLayout(bundledFontString, 600);
    DBG(String("Time taken to create Bundled font Layout: ") << String(Time::getMillisecondCounterHiRes() - time) );

    setSize (jmax(nativeFontLayout.getWidth(), bundledFontLayout.getWidth()), 1000);
}

MainContentComponent::~MainContentComponent()
{
}

void MainContentComponent::paint (Graphics& g)
{
    int64 time;
    juce::Rectangle<int> bounds= getBounds();

    const int centre = getBounds().getHeight() / 2;

    time = Time::getMillisecondCounterHiRes();
    nativeFontLayout.draw(g, bounds.withTop(centre + 10).toFloat());
    DBG(String("Time taken to draw Native font Layout: ") << String(Time::getMillisecondCounterHiRes() - time));

    //bounds = bounds.withY(bounds.getHeight());
    time = Time::getMillisecondCounterHiRes();
    bundledFontLayout.draw(g, bounds.withHeight(centre - 10).toFloat());
    DBG(String("Time taken to draw Bundled font Layout: ") << String(Time::getMillisecondCounterHiRes() - time) );
}

void MainContentComponent::resized()
{
}
