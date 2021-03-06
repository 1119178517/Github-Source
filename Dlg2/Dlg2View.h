﻿
// Dlg2View.h: CDlg2View 类的接口
//

#pragma once


class CDlg2View : public CView
{
protected: // 仅从序列化创建
	CDlg2View() noexcept;
	DECLARE_DYNCREATE(CDlg2View)

// 特性
public:
	CDlg2Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CDlg2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnRButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // Dlg2View.cpp 中的调试版本
inline CDlg2Doc* CDlg2View::GetDocument() const
   { return reinterpret_cast<CDlg2Doc*>(m_pDocument); }
#endif

