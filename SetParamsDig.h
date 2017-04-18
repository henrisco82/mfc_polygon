#pragma once


// CSetParamsDig dialog

class CSetParamsDig : public CDialog
{
	DECLARE_DYNAMIC(CSetParamsDig)

public:
	CSetParamsDig(CWnd* pParent = NULL);   // standard constructor
	virtual ~CSetParamsDig();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
};
