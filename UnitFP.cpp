//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitFP.h"
#include "UnitFPR.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFrmFP *FrmFP;

//---------------------------------------------------------------------------
__fastcall TFrmFP::TFrmFP(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFrmFP::BtnRecursividadFPClick(TObject *Sender)
{
	FrmFPRecursivo->Show();
}
//---------------------------------------------------------------------------
void __fastcall TFrmFP::BtnSalirFPClick(TObject *Sender)
{
	Close();

}
//---------------------------------------------------------------------------
