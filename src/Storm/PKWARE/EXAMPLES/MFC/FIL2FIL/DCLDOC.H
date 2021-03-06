/*
 *******************************************************************
 *** Important information for use with the                      ***
 *** PKWARE Data Compression Library (R) for Win32               ***
 *** Copyright 1994,1995 by PKWARE Inc. All Rights Reserved.     ***
 *** PKWARE Data Compression Library Reg. U.S. Pat. and Tm. Off. ***
 *******************************************************************
 */
// dcldoc.h : interface of the CDclDoc class
//
/////////////////////////////////////////////////////////////////////////////

class CDclDoc : public CDocument
{
protected: // create from serialization only
   CDclDoc();
   DECLARE_DYNCREATE(CDclDoc)

// Attributes
public:
// Operations
public:

// Implementation
public:
   virtual ~CDclDoc();
   virtual void Serialize(CArchive& ar);   // overridden for document i/o
#ifdef _DEBUG
   virtual void AssertValid() const;
   virtual void Dump(CDumpContext& dc) const;
#endif

protected:
   virtual BOOL OnNewDocument();

// Generated message map functions
protected:
   //{{AFX_MSG(CDclDoc)
      // NOTE - the ClassWizard will add and remove member functions here.
      //    DO NOT EDIT what you see in these blocks of generated code !
   //}}AFX_MSG
   DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////
