﻿
// MFC_ServerDlg.h: 헤더 파일
//

#pragma once
#include "Client_listen.h"


// CMFCServerDlg 대화 상자
class CMFCServerDlg : public CDialogEx
{
// 생성입니다.
public:
	CMFCServerDlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.
	Client_listen m_ListenSocket;	
	CListBox* clientList;

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFC_SERVER_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:

	CListBox message_list;
	CListBox client_list;
	afx_msg void OnDestroy();
};
