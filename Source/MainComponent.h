/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#ifndef MAINCOMPONENT_H_INCLUDED
#define MAINCOMPONENT_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"

class TestLookAndFeel : public LookAndFeel_V3, public DeletedAtShutdown
{
public:
    TestLookAndFeel()
    {
        roboto = Typeface::createSystemTypefaceFor(BinaryData::fonts__roboto_ttf, BinaryData::fonts__roboto_ttfSize);
    }

    Typeface::Ptr getTypefaceForFont (const Font& font)
    {
        return roboto;
    }

private:
    Typeface::Ptr roboto;
};

//==============================================================================
/*
    This component lives inside our window, and this is where you should put all
    your controls and content.
*/
class MainContentComponent   : public Component
{
public:
    //==============================================================================
    MainContentComponent();
    ~MainContentComponent();

    void paint (Graphics&);
    void resized();

private:
    AttributedString string;
    TextLayout layout;
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainContentComponent)
};


#endif  // MAINCOMPONENT_H_INCLUDED
