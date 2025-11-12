#ifndef LEDBarH
#define LEDBarH

#include <SysUtils.hpp>
#include <Controls.hpp>
#include <Classes.hpp>
#include <Forms.hpp>

const int spacer_size = 3;
const int border_size = 1;

enum orient_type {orHorizontal, orVertical};

class PACKAGE TLEDBar : public TCustomControl
{
    private:
        int     top, left;            // Positional properties.
        int     width, height;        // Dimensional properties.
        int     bar_height;           // Display properties.
        TColor  lower_colour, upper_colour;
        TColor  background_colour, old_background_colour;
        int     colour_change;        // Percentage at which the colour change occurs.
        enum orient_type orientation;
        int     minimum, maximum;     // Values that can be stored.
        int     value;                // Actual value stored.

        //
        //  Member functions used to set properties.
        //
        void __fastcall SetBarHeight(int);
        void __fastcall SetLowerColour(TColor);
        void __fastcall SetUpperColour(TColor);
        void __fastcall SetColourChange(int);
        void __fastcall SetOrientation(enum orient_type);
        void __fastcall SetMinimum(int);
        void __fastcall SetMaximum(int);
        void __fastcall SetValue(int);
        void __fastcall SetBackgroundColour(TColor);
        //
        //  Private member function that implement the component.
        //
        void __fastcall DrawBars();
        
    protected:
        virtual void __fastcall Paint();
    
    public:
        __fastcall TLEDBar(TComponent* Owner);
        
    __published:
        __property int BarHeight={read=bar_height, write=SetBarHeight, default = 4};
        __property TColor LowerColour={read=lower_colour, write=SetLowerColour, default = clLime};
        __property TColor UpperColour={read=upper_colour, write=SetUpperColour, default = clRed};
        __property TColor BackgroundColour={read=background_colour, write=SetBackgroundColour, default = clSilver};
        __property int Maximum={read=maximum, write=SetMaximum, default = 100};
        __property int Minimum={read=minimum, write=SetMinimum, default = 0};
        __property int Value={read=value, write=SetValue, default = 100};
        __property enum orient_type Orientation={read=orientation, write=SetOrientation, default = orVertical};
        __property int ColourChange={read=colour_change, write=SetColourChange, default=75};
};
#endif
 