#include <vcl.h>
#pragma hdrstop

#include "TestForm.h"

#pragma package(smart_init)
#pragma link "LEDBar"
#pragma resource "*.dfm"

TTheForm *TheForm;

__fastcall TTheForm::TTheForm(TComponent* Owner) : TForm(Owner)
{
}

void __fastcall TTheForm::Button1Click(TObject *Sender)
{
   led->Value = Edit1->Text.ToInt();
}

