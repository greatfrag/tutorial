
// TutorialDlg.h : header file
//

#pragma once
#include "afxcmn.h"
#include "CircleRadiusControls.h"

// CTutorialDlg dialog
class CTutorialDlg : public CDialogEx
{
// Construction
public:
	CTutorialDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_ECHOBUTTONEVENT_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
private:
	CString m_EchoText;
	int m_OkCount;
public:
	afx_msg void OnBnClickedBtnAdd();
private:
	CSliderCtrl m_VSliderBar;
	CString m_VSliderEcho;
private:
	CString m_HSliderEcho;
	CSliderCtrl m_HSliderBar;
public:
	afx_msg void OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	afx_msg void OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
private:
	CString m_TimerEcho;
	int m_Seconds;
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
private:
	CString m_MouseEcho;
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
private:
	BOOL m_TimerCtrlSliders;
	CCircleRadiusControls m_circle_controls;
public:
	afx_msg void OnBnClickedTimerControlSliders();
};
