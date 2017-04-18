
// PolygonDoc.h : interface of the CPolygonDoc class

// EXERCISE - 27 march
// N-SIDED REGULAR POLYGON WITH GIVEN COLOR AND PEN WIDTH


#pragma once


class CPolygonDoc : public CDocument
{
protected: // create from serialization only
	CPolygonDoc();
	DECLARE_DYNCREATE(CPolygonDoc)

// Attributes
public:
	unsigned int m_nVertices;
	unsigned int m_penWidth;
	COLORREF m_color;

// Operations
public:

// Overrides
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// Implementation
public:
	virtual ~CPolygonDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// Helper function that sets search content for a Search Handler
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
public:
	afx_msg void OnOptionsSetparameters();
};
