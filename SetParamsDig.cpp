// SetParamsDig.cpp : implementation file
//

#include "stdafx.h"
#include "resource.h"
#include "Polygon.h"
#include "SetParamsDig.h"
#include "afxdialogex.h"


// CSetParamsDig dialog

IMPLEMENT_DYNAMIC(CSetParamsDig, CDialog)

CSetParamsDig::CSetParamsDig(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_DIALOG1, pParent)
{

}

CSetParamsDig::~CSetParamsDig()
{
}

void CSetParamsDig::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CSetParamsDig, CDialog)
	ON_WM_CTLCOLOR()
END_MESSAGE_MAP()


// CSetParamsDig message handlers


HBRUSH CSetParamsDig::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CDialog::OnCtlColor(pDC, pWnd, nCtlColor);

	// TODO:  Change any attributes of the DC here
	if (pWnd->GetDlgCtrlID() == IDC_COLOR) 
	{
		hbr = ::CreateSolidBrush(RGB(0,255,0));
	}

	// TODO:  Return a different brush if the default is not desired
	return hbr;
}
