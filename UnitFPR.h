//---------------------------------------------------------------------------

#ifndef UnitFPRH
#define UnitFPRH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.ButtonGroup.hpp>
//---------------------------------------------------------------------------
class TFrmFPRecursivo : public TForm
{
__published:	// IDE-managed Components
	TMainMenu *MnMnFPRRecursivo;
	TPanel *PnlFPRecursivo;
	TImage *ImgLogoFPRecursivo;
	TEdit *EdtFPRecursivo1;
	TEdit *EdtFPRecursivo2;
	TEdit *EdtFPRecursivo3;
	TEdit *EdtFPRecursivo4;
	TButton *BtnFPRLimp1;
	TButton *BtnFPRLimp2;
	TButton *BtnFPRLimp3;
	TButton *BtnFPRLimp4;
	TLabel *LblFPRecursivo;
	TMenuItem *InicioMMPFR;
	TMenuItem *InsertarMMPFR;
	TMenuItem *MostrarMMPFR;
	TMenuItem *LimpiarMMPFR;
	TMenuItem *SalirMMPFR;
	TMenuItem *HerramientasMMPFR;
	TMenuItem *PracticosMMPFR;
	TMenuItem *MostrarFPRecursivo;
	TMenuItem *MFPRecursivoPrimerosNN;
	TMenuItem *PNumerosParesFPRecursivo;
	TMenuItem *PNumerosImparesFPRecursivo;
	TMenuItem *NenteroMMPFR;
	TMenuItem *CadenasMMPFR;
	TMenuItem *VectoresMMPFR;
	TMenuItem *MatricesMMPFR;
	TMenuItem *N1;
	TMenuItem *N2;
	TMenuItem *N3;
	TMenuItem *N4;
	TMenuItem *N5;
	TMenuItem *N6;
	TPanel *PnlFPRNE;
	TButtonGroup *BtnGroupMMPFRNE;
	void __fastcall BtnFPRLimp1Click(TObject *Sender);
	void __fastcall BtnFPRLimp2Click(TObject *Sender);
	void __fastcall BtnFPRLimp3Click(TObject *Sender);
	void __fastcall BtnFPRLimp4Click(TObject *Sender);
	void __fastcall LimpiarMMPFRClick(TObject *Sender);
	void __fastcall SalirMMPFRClick(TObject *Sender);
	void __fastcall MFPRecursivoPrimerosNNClick(TObject *Sender);
	void __fastcall PNumerosParesFPRecursivoClick(TObject *Sender);
	void __fastcall PNumerosImparesFPRecursivoClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFrmFPRecursivo(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrmFPRecursivo *FrmFPRecursivo;
//---------------------------------------------------------------------------
#endif
