
// PolygonView.cpp : implementation of the CPolygonView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "Polygon.h"
#endif

#include "PolygonDoc.h"
#include "PolygonView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CPolygonView

IMPLEMENT_DYNCREATE(CPolygonView, CView)

BEGIN_MESSAGE_MAP(CPolygonView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CPolygonView construction/destruction

CPolygonView::CPolygonView()
{
	// TODO: add construction code here

}

CPolygonView::~CPolygonView()
{
}

BOOL CPolygonView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CPolygonView drawing

void CPolygonView::OnDraw(CDC* pDC)
{
	CPolygonDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
	CPen pen(PS_SOLID, pDoc->m_penWidth, pDoc->m_color);
	pDC->SelectObject(&pen);
	pDC->MoveTo(500, 300);
	for(int i = 0; i <= pDoc->m_nVertices; ++i)
	{
		int x = 200 * cos(2 * 3.1416 / pDoc->m_nVertices * i) + 300;
		int y = 200 * sin(2 * 3.1416 / pDoc->m_nVertices * i) + 300;
		pDC->LineTo(x, y);
	}
}


// CPolygonView printing

BOOL CPolygonView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CPolygonView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CPolygonView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CPolygonView diagnostics

#ifdef _DEBUG
void CPolygonView::AssertValid() const
{
	CView::AssertValid();
}

void CPolygonView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CPolygonDoc* CPolygonView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CPolygonDoc)));
	return (CPolygonDoc*)m_pDocument;
}
#endif //_DEBUG


// CPolygonView message handlers
