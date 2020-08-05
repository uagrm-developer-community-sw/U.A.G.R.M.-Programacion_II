//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitFPR.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFrmFPRecursivo *FrmFPRecursivo;

//---------------------------------------------------------------------------
// 							HERRAMIENTAS / ALGORITMOS
//MOSTRAR
// PROGRAMA QUE MUESTRA LOS PRIMEROS N NÚMEROS NATURALES //
void Mostrar(byte n){
	if (n==0) {
	}else{
		Mostrar(n-1);
		ShowMessage(n);
	}
}
//---------------------------------------------------------------------------
__fastcall TFrmFPRecursivo::TFrmFPRecursivo(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
//                         MnMnFPRRecursivo
void __fastcall TFrmFPRecursivo::BtnFPRLimp1Click(TObject *Sender)
{
	EdtFPRecursivo1->Clear();
}
//---------------------------------------------------------------------------
void __fastcall TFrmFPRecursivo::BtnFPRLimp2Click(TObject *Sender)
{
	EdtFPRecursivo2->Clear();
}
//---------------------------------------------------------------------------
void __fastcall TFrmFPRecursivo::BtnFPRLimp3Click(TObject *Sender)
{
    EdtFPRecursivo3->Clear();
}
//---------------------------------------------------------------------------
void __fastcall TFrmFPRecursivo::BtnFPRLimp4Click(TObject *Sender)
{
    EdtFPRecursivo4->Clear();
}
//---------------------------------------------------------------------------
//							MnMnFPRRecursivo
void __fastcall TFrmFPRecursivo::LimpiarMMPFRClick(TObject *Sender)
{
	EdtFPRecursivo1->Clear();
	EdtFPRecursivo2->Clear();
	EdtFPRecursivo3->Clear();
	EdtFPRecursivo4->Clear();
}
//---------------------------------------------------------------------------
void __fastcall TFrmFPRecursivo::SalirMMPFRClick(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------
//                          LLAMAR A LOS ALGORITMOS
void __fastcall TFrmFPRecursivo::MFPRecursivoPrimerosNNClick(TObject *Sender)
{
	Mostrar(StrToInt(EdtFPRecursivo1->Text));

}
//---------------------------------------------------------------------------
