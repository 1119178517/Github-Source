// MyDlg2.cpp: 实现文件
//

#include "pch.h"
#include "Dlg2.h"
#include "MyDlg2.h"
#include "afxdialogex.h"


// MyDlg2 对话框

IMPLEMENT_DYNAMIC(MyDlg2, CDialogEx)

MyDlg2::MyDlg2(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

MyDlg2::~MyDlg2()
{
}

void MyDlg2::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST2, Lbox);
}


BEGIN_MESSAGE_MAP(MyDlg2, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &MyDlg2::OnBnClickedButton1)
END_MESSAGE_MAP()


// MyDlg2 消息处理程序


BOOL MyDlg2::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	
	s = "";
	Lbox.AddString(_T("异常: OCX 属性页应返回 FALSE"));
	Lbox.AddString(_T("TODO:  在此添加额外的初始化"));
	
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void MyDlg2::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码

	int n = Lbox.GetCurSel();//可取得所选字符串的号数
	Lbox.GetText(n, s);
}
