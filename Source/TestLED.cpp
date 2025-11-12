//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
USERES("TestLED.res");
USEFORM("TestForm.cpp", TheForm);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
   try
   {
       Application->Initialize();
       Application->CreateForm(__classid(TTheForm), &TheForm);
       Application->Run();
   }
   catch (Exception &exception)
   {
       Application->ShowException(&exception);
   }
   return 0;
}
//---------------------------------------------------------------------------
