// ControlDialog.cpp : implementation file
//

#include "stdafx.h"
#include "Tutorial.h"
#include "ControlDialog.h"
#include "afxdialogex.h"


// CControlDialog dialog

IMPLEMENT_DYNAMIC(CControlDialog, CDialogEx)

CControlDialog::CControlDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(CControlDialog::IDD, pParent)
{

}

CControlDialog::~CControlDialog()
{
}

void CControlDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CControlDialog, CDialogEx)
END_MESSAGE_MAP()


// CControlDialog message handlers
