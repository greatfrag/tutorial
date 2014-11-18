#pragma once


// CControlDialog dialog

class CControlDialog : public CDialogEx
{
	DECLARE_DYNAMIC(CControlDialog)

public:
	CControlDialog(CWnd* pParent = NULL);   // standard constructor
	virtual ~CControlDialog();

// Dialog Data
	enum { IDD = IDD_CONTROLS_CHILDDLG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
