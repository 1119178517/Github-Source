
// week9.h: PROJECT_NAME 应用程序的主头文件
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// 主符号


// Cweek9App:
// 有关此类的实现，请参阅 week9.cpp
//

class Cweek9App : public CWinApp
{
public:
	Cweek9App();

// 重写
public:
	virtual BOOL InitInstance();

// 实现

	DECLARE_MESSAGE_MAP()
};

extern Cweek9App theApp;
