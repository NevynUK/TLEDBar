//---------------------------------------------------------------------------
#ifndef TestFormH
#define TestFormH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "LEDBar.h"
//---------------------------------------------------------------------------
class TTheForm : public TForm
{
__published:	// IDE-managed Components
   TLEDBar *led;
   TEdit *Edit1;
   TButton *Button1;
   void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
   __fastcall TTheForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TTheForm *TheForm;
//---------------------------------------------------------------------------
#endif
