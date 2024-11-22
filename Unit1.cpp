//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	Form1->StringGrid1->Columns[0]->Header="ID";
	Form1->StringGrid1->Columns[1]->Header="MemberShip Type";
	Form1->StringGrid1->Columns[2]->Header="First Name";
	Form1->StringGrid1->Columns[3]->Header="Last Name";

	Form1->StringGrid1->Columns[0]->Width=20;
	Form1->StringGrid1->Columns[1]->Width=120;
	Form1->StringGrid1->Columns[2]->Width=80;
	Form1->StringGrid1->Columns[3]->Width=80;

	Form1->StringGrid1->Width=330;


	Form1->StringGrid2->Columns[0]->Header="MemberShip Type";
	Form1->StringGrid2->Columns[1]->Header="Types";

	Form1->StringGrid2->Columns[0]->Width=120;
	Form1->StringGrid2->Columns[1]->Width=80;

	Form1->StringGrid2->Width=220;

	Form1->StringGrid3->Columns[0]->Header="UserID";
	Form1->StringGrid3->Columns[1]->Header="MemberShip Type";
	Form1->StringGrid3->Columns[2]->Header= "First Name";
	Form1->StringGrid3->Columns[3]->Header= "Last Name";

	Form1->StringGrid3->Columns[0]->Width=80;
	Form1->StringGrid3->Columns[1]->Width=120;
	Form1->StringGrid3->Columns[2]->Width=80;
	Form1->StringGrid3->Columns[3]->Width=80;

	Form1->StringGrid3->Width=380 ;
}
//---------------------------------------------------------------------------
