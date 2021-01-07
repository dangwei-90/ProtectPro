
// ProtectProDlg.h: 头文件
//

#pragma once
#include <thread>


// CProtectProDlg 对话框
class CProtectProDlg : public CDialogEx
{
// 构造
public:
	CProtectProDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PROTECTPRO_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

public:
	afx_msg void OnBnClickedStart();
	afx_msg void OnBnClickedStop();
	void ProtectProThread();


private:
	std::thread protect_pro_thread_;
	int status_ = 0;
	CString text_status_ = "未启动";
};
