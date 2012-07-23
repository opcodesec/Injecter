// Injecter.h : main header file for the INJECTER application
//

#if !defined(AFX_INJECTER_H__A26A71F0_940E_460F_9096_A72EE769940C__INCLUDED_)
#define AFX_INJECTER_H__A26A71F0_940E_460F_9096_A72EE769940C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CInjecterApp:
// See Injecter.cpp for the implementation of this class
//

class CInjecterApp : public CWinApp
{
public:
	CInjecterApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CInjecterApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CInjecterApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_INJECTER_H__A26A71F0_940E_460F_9096_A72EE769940C__INCLUDED_)
