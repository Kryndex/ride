///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun  5 2014)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "ride/wx.h"

#include "ui.h"

///////////////////////////////////////////////////////////////////////////
using namespace ui;

Settings::Settings( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 500,500 ), wxDefaultSize );
	
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );
	
	m_notebook1 = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxNB_TOP );
	m_fonts = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer6;
	fgSizer6 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer6->AddGrowableCol( 0 );
	fgSizer6->AddGrowableCol( 1 );
	fgSizer6->AddGrowableRow( 0 );
	fgSizer6->SetFlexibleDirection( wxBOTH );
	fgSizer6->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_panel9 = new wxPanel( m_fonts, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer3;
	sbSizer3 = new wxStaticBoxSizer( new wxStaticBox( m_panel9, wxID_ANY, wxT("Styles") ), wxVERTICAL );
	
	uiFontStyles = new wxListBox( m_panel9, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	sbSizer3->Add( uiFontStyles, 1, wxALL|wxEXPAND, 5 );
	
	
	bSizer5->Add( sbSizer3, 1, wxEXPAND, 5 );
	
	
	m_panel9->SetSizer( bSizer5 );
	m_panel9->Layout();
	bSizer5->Fit( m_panel9 );
	fgSizer6->Add( m_panel9, 1, wxEXPAND | wxALL, 5 );
	
	m_panel7 = new wxPanel( m_fonts, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxGridBagSizer* gbSizer2;
	gbSizer2 = new wxGridBagSizer( 0, 0 );
	gbSizer2->SetFlexibleDirection( wxBOTH );
	gbSizer2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_ALL );
	
	wxStaticBoxSizer* sbSizer2;
	sbSizer2 = new wxStaticBoxSizer( new wxStaticBox( m_panel7, wxID_ANY, wxT("Typefaces") ), wxVERTICAL );
	
	uiStyleUseTypeface = new wxCheckBox( m_panel7, wxID_ANY, wxT("Use typeface?"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer2->Add( uiStyleUseTypeface, 0, wxALL, 5 );
	
	uiStyleOnlyFixedSize = new wxCheckBox( m_panel7, wxID_ANY, wxT("Only fixed sizes"), wxDefaultPosition, wxDefaultSize, 0 );
	uiStyleOnlyFixedSize->SetValue(true); 
	sbSizer2->Add( uiStyleOnlyFixedSize, 0, wxALL, 5 );
	
	uiStyleTypeface = new wxListBox( m_panel7, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	sbSizer2->Add( uiStyleTypeface, 1, wxALL|wxEXPAND, 5 );
	
	
	gbSizer2->Add( sbSizer2, wxGBPosition( 0, 0 ), wxGBSpan( 1, 2 ), wxEXPAND, 5 );
	
	uiStyleBold = new wxCheckBox( m_panel7, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer2->Add( uiStyleBold, wxGBPosition( 1, 1 ), wxGBSpan( 1, 1 ), wxALIGN_CENTER_VERTICAL|wxALIGN_LEFT|wxALL, 5 );
	
	uiStyleUseBold = new wxCheckBox( m_panel7, wxID_ANY, wxT("Bold:"), wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer2->Add( uiStyleUseBold, wxGBPosition( 1, 0 ), wxGBSpan( 1, 1 ), wxALIGN_RIGHT|wxALL, 5 );
	
	uiStyleItalic = new wxCheckBox( m_panel7, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer2->Add( uiStyleItalic, wxGBPosition( 2, 1 ), wxGBSpan( 1, 1 ), wxALIGN_LEFT|wxALL, 5 );
	
	uiStyleUseItalic = new wxCheckBox( m_panel7, wxID_ANY, wxT("Italic"), wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer2->Add( uiStyleUseItalic, wxGBPosition( 2, 0 ), wxGBSpan( 1, 1 ), wxALIGN_RIGHT|wxALL, 5 );
	
	uiStyleUnderline = new wxCheckBox( m_panel7, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer2->Add( uiStyleUnderline, wxGBPosition( 3, 1 ), wxGBSpan( 1, 1 ), wxALIGN_CENTER_VERTICAL|wxALIGN_LEFT|wxALL, 5 );
	
	uiStyleUseUnderline = new wxCheckBox( m_panel7, wxID_ANY, wxT("Underline:"), wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer2->Add( uiStyleUseUnderline, wxGBPosition( 3, 0 ), wxGBSpan( 1, 1 ), wxALIGN_RIGHT|wxALL, 5 );
	
	uiStyleSize = new wxTextCtrl( m_panel7, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer2->Add( uiStyleSize, wxGBPosition( 4, 1 ), wxGBSpan( 1, 1 ), wxALL, 5 );
	
	uiStyleUseSize = new wxCheckBox( m_panel7, wxID_ANY, wxT("Font size:"), wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer2->Add( uiStyleUseSize, wxGBPosition( 4, 0 ), wxGBSpan( 1, 1 ), wxALIGN_RIGHT|wxALL, 5 );
	
	uiStyleForeground = new wxColourPickerCtrl( m_panel7, wxID_ANY, *wxBLACK, wxDefaultPosition, wxDefaultSize, wxCLRP_DEFAULT_STYLE );
	gbSizer2->Add( uiStyleForeground, wxGBPosition( 5, 1 ), wxGBSpan( 1, 1 ), wxALL|wxEXPAND, 5 );
	
	uiStyleUseForeground = new wxCheckBox( m_panel7, wxID_ANY, wxT("Foreground:"), wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer2->Add( uiStyleUseForeground, wxGBPosition( 5, 0 ), wxGBSpan( 1, 1 ), wxALIGN_RIGHT|wxALL, 5 );
	
	uiStyleBackground = new wxColourPickerCtrl( m_panel7, wxID_ANY, *wxBLACK, wxDefaultPosition, wxDefaultSize, wxCLRP_DEFAULT_STYLE );
	gbSizer2->Add( uiStyleBackground, wxGBPosition( 6, 1 ), wxGBSpan( 1, 1 ), wxALL|wxEXPAND, 5 );
	
	uiStyleUseBackground = new wxCheckBox( m_panel7, wxID_ANY, wxT("Background:"), wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer2->Add( uiStyleUseBackground, wxGBPosition( 6, 0 ), wxGBSpan( 1, 1 ), wxALIGN_RIGHT|wxALL, 5 );
	
	uiStyleExample = new wxTextCtrl( m_panel7, wxID_ANY, wxT("Sample text"), wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer2->Add( uiStyleExample, wxGBPosition( 7, 1 ), wxGBSpan( 1, 1 ), wxALL, 5 );
	
	
	gbSizer2->AddGrowableCol( 0 );
	gbSizer2->AddGrowableRow( 0 );
	
	m_panel7->SetSizer( gbSizer2 );
	m_panel7->Layout();
	gbSizer2->Fit( m_panel7 );
	fgSizer6->Add( m_panel7, 1, wxALL|wxEXPAND, 5 );
	
	
	m_fonts->SetSizer( fgSizer6 );
	m_fonts->Layout();
	fgSizer6->Fit( m_fonts );
	m_notebook1->AddPage( m_fonts, wxT("Fonts && Colors"), false );
	m_indicators = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer7;
	fgSizer7 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer7->AddGrowableCol( 0 );
	fgSizer7->AddGrowableRow( 0 );
	fgSizer7->SetFlexibleDirection( wxBOTH );
	fgSizer7->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxVERTICAL );
	
	uiIndicatorList = new wxListBox( m_indicators, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	bSizer6->Add( uiIndicatorList, 1, wxALL|wxEXPAND, 5 );
	
	
	fgSizer7->Add( bSizer6, 1, wxEXPAND, 5 );
	
	wxFlexGridSizer* fgSizer8;
	fgSizer8 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer8->SetFlexibleDirection( wxBOTH );
	fgSizer8->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	uiIndicatorStyleLabel = new wxStaticText( m_indicators, wxID_ANY, wxT("Style:"), wxDefaultPosition, wxDefaultSize, 0 );
	uiIndicatorStyleLabel->Wrap( -1 );
	fgSizer8->Add( uiIndicatorStyleLabel, 0, wxALL, 5 );
	
	uiIndicatorStyle = new wxComboBox( m_indicators, wxID_ANY, wxT("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_DROPDOWN|wxCB_READONLY );
	uiIndicatorStyle->Append( wxT("Plain") );
	uiIndicatorStyle->Append( wxT("Squiggle") );
	uiIndicatorStyle->Append( wxT("TT") );
	uiIndicatorStyle->Append( wxT("Diagonal") );
	uiIndicatorStyle->Append( wxT("Strike") );
	uiIndicatorStyle->Append( wxT("Hidden") );
	uiIndicatorStyle->Append( wxT("Box") );
	uiIndicatorStyle->Append( wxT("Roundbox") );
	uiIndicatorStyle->Append( wxT("Straight box") );
	uiIndicatorStyle->Append( wxT("Dash") );
	uiIndicatorStyle->Append( wxT("Dots") );
	uiIndicatorStyle->Append( wxT("Squiggle low") );
	uiIndicatorStyle->Append( wxT("Dotbox") );
	uiIndicatorStyle->Append( wxEmptyString );
	uiIndicatorStyle->Append( wxEmptyString );
	uiIndicatorStyle->Append( wxEmptyString );
	uiIndicatorStyle->Append( wxEmptyString );
	uiIndicatorStyle->Append( wxEmptyString );
	fgSizer8->Add( uiIndicatorStyle, 0, wxALL, 5 );
	
	m_staticText11 = new wxStaticText( m_indicators, wxID_ANY, wxT("Color:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	fgSizer8->Add( m_staticText11, 0, wxALL, 5 );
	
	uiIndicatorColor = new wxColourPickerCtrl( m_indicators, wxID_ANY, *wxBLACK, wxDefaultPosition, wxDefaultSize, wxCLRP_DEFAULT_STYLE );
	fgSizer8->Add( uiIndicatorColor, 0, wxALL, 5 );
	
	
	fgSizer8->Add( 0, 0, 1, wxEXPAND, 5 );
	
	uiIndicatorUnder = new wxCheckBox( m_indicators, wxID_ANY, wxT("Under?"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer8->Add( uiIndicatorUnder, 0, wxALL, 5 );
	
	m_staticText12 = new wxStaticText( m_indicators, wxID_ANY, wxT("Alpha:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12->Wrap( -1 );
	fgSizer8->Add( m_staticText12, 0, wxALL, 5 );
	
	uiIndicatorAlpha = new wxTextCtrl( m_indicators, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer8->Add( uiIndicatorAlpha, 0, wxALL, 5 );
	
	m_staticText13 = new wxStaticText( m_indicators, wxID_ANY, wxT("Outline alpha:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13->Wrap( -1 );
	fgSizer8->Add( m_staticText13, 0, wxALL, 5 );
	
	uiIndicatorOutlineAlpha = new wxTextCtrl( m_indicators, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer8->Add( uiIndicatorOutlineAlpha, 0, wxALL, 5 );
	
	
	fgSizer7->Add( fgSizer8, 1, wxEXPAND, 5 );
	
	
	m_indicators->SetSizer( fgSizer7 );
	m_indicators->Layout();
	fgSizer7->Fit( m_indicators );
	m_notebook1->AddPage( m_indicators, wxT("Indicators"), false );
	m_markers = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer51;
	fgSizer51 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer51->AddGrowableCol( 0 );
	fgSizer51->AddGrowableRow( 0 );
	fgSizer51->SetFlexibleDirection( wxBOTH );
	fgSizer51->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_ALL );
	
	wxStaticBoxSizer* sbSizer8;
	sbSizer8 = new wxStaticBoxSizer( new wxStaticBox( m_markers, wxID_ANY, wxT("Markers") ), wxVERTICAL );
	
	uiMarkerList = new wxListBox( m_markers, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	sbSizer8->Add( uiMarkerList, 1, wxALL|wxEXPAND, 5 );
	
	
	fgSizer51->Add( sbSizer8, 1, wxEXPAND, 5 );
	
	wxFlexGridSizer* fgSizer61;
	fgSizer61 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer61->SetFlexibleDirection( wxBOTH );
	fgSizer61->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText7 = new wxStaticText( m_markers, wxID_ANY, wxT("Symbol:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	fgSizer61->Add( m_staticText7, 0, wxALL, 5 );
	
	uiMarkerSymbol = new wxComboBox( m_markers, wxID_ANY, wxT("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_DROPDOWN|wxCB_READONLY );
	uiMarkerSymbol->Append( wxT("Circle") );
	uiMarkerSymbol->Append( wxT("Roundrect ") );
	uiMarkerSymbol->Append( wxT("Arrow") );
	uiMarkerSymbol->Append( wxT("Smallrect ") );
	uiMarkerSymbol->Append( wxT("Shortarrow") );
	uiMarkerSymbol->Append( wxT("Empty") );
	uiMarkerSymbol->Append( wxT("Arrowdown ") );
	uiMarkerSymbol->Append( wxT("Minus") );
	uiMarkerSymbol->Append( wxT("Plus") );
	uiMarkerSymbol->Append( wxEmptyString );
	uiMarkerSymbol->Append( wxEmptyString );
	fgSizer61->Add( uiMarkerSymbol, 0, wxALL, 5 );
	
	m_staticText9 = new wxStaticText( m_markers, wxID_ANY, wxT("Foreground color:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9->Wrap( -1 );
	fgSizer61->Add( m_staticText9, 0, wxALL, 5 );
	
	uiMarkerForegroundColor = new wxColourPickerCtrl( m_markers, wxID_ANY, *wxBLACK, wxDefaultPosition, wxDefaultSize, wxCLRP_DEFAULT_STYLE );
	fgSizer61->Add( uiMarkerForegroundColor, 0, wxALL, 5 );
	
	m_staticText8 = new wxStaticText( m_markers, wxID_ANY, wxT("Background color:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	fgSizer61->Add( m_staticText8, 0, wxALL, 5 );
	
	uiMarkerBackgroundColor = new wxColourPickerCtrl( m_markers, wxID_ANY, *wxBLACK, wxDefaultPosition, wxDefaultSize, wxCLRP_DEFAULT_STYLE );
	fgSizer61->Add( uiMarkerBackgroundColor, 0, wxALL, 5 );
	
	
	fgSizer51->Add( fgSizer61, 1, wxEXPAND, 5 );
	
	
	m_markers->SetSizer( fgSizer51 );
	m_markers->Layout();
	fgSizer51->Fit( m_markers );
	m_notebook1->AddPage( m_markers, wxT("Markers"), false );
	m_editor = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );
	
	m_notebook2 = new wxNotebook( m_editor, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_panel10 = new wxPanel( m_notebook2, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer4;
	fgSizer4 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer4->SetFlexibleDirection( wxBOTH );
	fgSizer4->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	wxStaticBoxSizer* sbSizerFolding;
	sbSizerFolding = new wxStaticBoxSizer( new wxStaticBox( m_panel10, wxID_ANY, wxT("Folding") ), wxVERTICAL );
	
	wxBoxSizer* bSizer32;
	bSizer32 = new wxBoxSizer( wxVERTICAL );
	
	wxFlexGridSizer* fgSizer5;
	fgSizer5 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer5->SetFlexibleDirection( wxBOTH );
	fgSizer5->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	uiAllowFolding = new wxCheckBox( m_panel10, wxID_ANY, wxT("Allow folding"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer5->Add( uiAllowFolding, 0, wxALL, 5 );
	
	uiFoldLevelNumbers = new wxCheckBox( m_panel10, wxID_ANY, wxT("Level numbers"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer5->Add( uiFoldLevelNumbers, 0, wxALL, 5 );
	
	uiFoldLineBeforeExpanded = new wxCheckBox( m_panel10, wxID_ANY, wxT("Line before (expanded)"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer5->Add( uiFoldLineBeforeExpanded, 0, wxALL, 5 );
	
	uiFoldLineBeforeContracted = new wxCheckBox( m_panel10, wxID_ANY, wxT("Line before (contracted)"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer5->Add( uiFoldLineBeforeContracted, 0, wxALL, 5 );
	
	uiFoldLineAfterExpanded = new wxCheckBox( m_panel10, wxID_ANY, wxT("Line after (expanded)"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer5->Add( uiFoldLineAfterExpanded, 0, wxALL, 5 );
	
	uiFoldLineAfterContracted = new wxCheckBox( m_panel10, wxID_ANY, wxT("Line After (contracted)"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer5->Add( uiFoldLineAfterContracted, 0, wxALL, 5 );
	
	
	bSizer32->Add( fgSizer5, 1, wxEXPAND, 5 );
	
	wxFlexGridSizer* fgSizer22;
	fgSizer22 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer22->AddGrowableCol( 1 );
	fgSizer22->SetFlexibleDirection( wxBOTH );
	fgSizer22->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText42 = new wxStaticText( m_panel10, wxID_ANY, wxT("High Color:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText42->Wrap( -1 );
	fgSizer22->Add( m_staticText42, 0, wxALL, 5 );
	
	uiEditFoldHi = new wxColourPickerCtrl( m_panel10, wxID_ANY, *wxBLACK, wxDefaultPosition, wxDefaultSize, wxCLRP_DEFAULT_STYLE );
	fgSizer22->Add( uiEditFoldHi, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText43 = new wxStaticText( m_panel10, wxID_ANY, wxT("Low color:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText43->Wrap( -1 );
	fgSizer22->Add( m_staticText43, 0, wxALL, 5 );
	
	uiEditFoldLow = new wxColourPickerCtrl( m_panel10, wxID_ANY, *wxBLACK, wxDefaultPosition, wxDefaultSize, wxCLRP_DEFAULT_STYLE );
	fgSizer22->Add( uiEditFoldLow, 0, wxALL|wxEXPAND, 5 );
	
	
	bSizer32->Add( fgSizer22, 1, wxEXPAND, 5 );
	
	
	sbSizerFolding->Add( bSizer32, 1, wxEXPAND, 5 );
	
	
	fgSizer4->Add( sbSizerFolding, 1, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizerCurrentLine;
	sbSizerCurrentLine = new wxStaticBoxSizer( new wxStaticBox( m_panel10, wxID_ANY, wxT("Current line") ), wxVERTICAL );
	
	wxFlexGridSizer* fgSizer20;
	fgSizer20 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer20->AddGrowableCol( 1 );
	fgSizer20->SetFlexibleDirection( wxBOTH );
	fgSizer20->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	
	fgSizer20->Add( 0, 0, 1, wxEXPAND, 5 );
	
	uiCurrentLineVisible = new wxCheckBox( m_panel10, wxID_ANY, wxT("Show current line?"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer20->Add( uiCurrentLineVisible, 0, wxALL, 5 );
	
	
	fgSizer20->Add( 0, 0, 1, wxEXPAND, 5 );
	
	uiEditCurrentLineOverdraw = new wxCheckBox( m_panel10, wxID_ANY, wxT("Overdraw?"), wxDefaultPosition, wxDefaultSize, 0 );
	uiEditCurrentLineOverdraw->SetValue(true); 
	fgSizer20->Add( uiEditCurrentLineOverdraw, 0, wxALL, 5 );
	
	m_staticText39 = new wxStaticText( m_panel10, wxID_ANY, wxT("Color:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText39->Wrap( -1 );
	fgSizer20->Add( m_staticText39, 0, wxALL, 5 );
	
	uiEditCurrentLineColor = new wxColourPickerCtrl( m_panel10, wxID_ANY, *wxBLACK, wxDefaultPosition, wxDefaultSize, wxCLRP_DEFAULT_STYLE );
	fgSizer20->Add( uiEditCurrentLineColor, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText40 = new wxStaticText( m_panel10, wxID_ANY, wxT("Alpha:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText40->Wrap( -1 );
	fgSizer20->Add( m_staticText40, 0, wxALL, 5 );
	
	uiEditCurrentLineAlpha = new wxTextCtrl( m_panel10, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer20->Add( uiEditCurrentLineAlpha, 0, wxALL|wxEXPAND, 5 );
	
	
	sbSizerCurrentLine->Add( fgSizer20, 1, wxEXPAND, 5 );
	
	
	fgSizer4->Add( sbSizerCurrentLine, 1, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizerAutocomplete;
	sbSizerAutocomplete = new wxStaticBoxSizer( new wxStaticBox( m_panel10, wxID_ANY, wxT("Auto completion") ), wxVERTICAL );
	
	uiEditAutocompleteCurlyBraces = new wxCheckBox( m_panel10, wxID_ANY, wxT("Curly braces"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizerAutocomplete->Add( uiEditAutocompleteCurlyBraces, 0, wxALL, 5 );
	
	uiEditAutocompleteParentheses = new wxCheckBox( m_panel10, wxID_ANY, wxT("Parentheses"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizerAutocomplete->Add( uiEditAutocompleteParentheses, 0, wxALL, 5 );
	
	uiEditAutocompleteBrackets = new wxCheckBox( m_panel10, wxID_ANY, wxT("Brackets"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizerAutocomplete->Add( uiEditAutocompleteBrackets, 0, wxALL, 5 );
	
	
	fgSizer4->Add( sbSizerAutocomplete, 1, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizerSelection;
	sbSizerSelection = new wxStaticBoxSizer( new wxStaticBox( m_panel10, wxID_ANY, wxT("Selection") ), wxVERTICAL );
	
	wxFlexGridSizer* fgSizer9;
	fgSizer9 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer9->SetFlexibleDirection( wxBOTH );
	fgSizer9->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	uiEditUseSelectionForeground = new wxCheckBox( m_panel10, wxID_ANY, wxT("Foreground:"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer9->Add( uiEditUseSelectionForeground, 0, wxALL, 5 );
	
	uiEditSelectionForeground = new wxColourPickerCtrl( m_panel10, wxID_ANY, *wxBLACK, wxDefaultPosition, wxDefaultSize, wxCLRP_DEFAULT_STYLE );
	fgSizer9->Add( uiEditSelectionForeground, 0, wxALL, 5 );
	
	uiEditUseSelectionBackground = new wxCheckBox( m_panel10, wxID_ANY, wxT("Background:"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer9->Add( uiEditUseSelectionBackground, 0, wxALL, 5 );
	
	uiEditSelectionBackground = new wxColourPickerCtrl( m_panel10, wxID_ANY, *wxBLACK, wxDefaultPosition, wxDefaultSize, wxCLRP_DEFAULT_STYLE );
	fgSizer9->Add( uiEditSelectionBackground, 0, wxALL, 5 );
	
	
	sbSizerSelection->Add( fgSizer9, 1, wxEXPAND, 5 );
	
	
	fgSizer4->Add( sbSizerSelection, 1, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizerProjectDefault;
	sbSizerProjectDefault = new wxStaticBoxSizer( new wxStaticBox( m_panel10, wxID_ANY, wxT("Project defaults") ), wxVERTICAL );
	
	wxFlexGridSizer* fgSizer21;
	fgSizer21 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer21->SetFlexibleDirection( wxBOTH );
	fgSizer21->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	
	fgSizer21->Add( 0, 0, 1, wxEXPAND, 5 );
	
	uiUseTabs = new wxCheckBox( m_panel10, wxID_ANY, wxT("Use tabs"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer21->Add( uiUseTabs, 0, wxALL, 5 );
	
	m_staticText41 = new wxStaticText( m_panel10, wxID_ANY, wxT("Tab width:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText41->Wrap( -1 );
	fgSizer21->Add( m_staticText41, 0, wxALL, 5 );
	
	uiTabWidth = new wxTextCtrl( m_panel10, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer21->Add( uiTabWidth, 0, wxALL, 5 );
	
	
	sbSizerProjectDefault->Add( fgSizer21, 1, wxEXPAND, 5 );
	
	
	fgSizer4->Add( sbSizerProjectDefault, 1, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizerEdges;
	sbSizerEdges = new wxStaticBoxSizer( new wxStaticBox( m_panel10, wxID_ANY, wxT("Edge") ), wxVERTICAL );
	
	wxFlexGridSizer* fgSizer25;
	fgSizer25 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer25->AddGrowableCol( 1 );
	fgSizer25->SetFlexibleDirection( wxBOTH );
	fgSizer25->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText47 = new wxStaticText( m_panel10, wxID_ANY, wxT("Style:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText47->Wrap( -1 );
	fgSizer25->Add( m_staticText47, 0, wxALL, 5 );
	
	uiEdgeStyle = new wxComboBox( m_panel10, wxID_ANY, wxT("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_DROPDOWN|wxCB_READONLY );
	uiEdgeStyle->Append( wxT("None") );
	uiEdgeStyle->Append( wxT("Line") );
	uiEdgeStyle->Append( wxT("Background") );
	fgSizer25->Add( uiEdgeStyle, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText48 = new wxStaticText( m_panel10, wxID_ANY, wxT("Color:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText48->Wrap( -1 );
	fgSizer25->Add( m_staticText48, 0, wxALL, 5 );
	
	uiEdgeColor = new wxColourPickerCtrl( m_panel10, wxID_ANY, *wxBLACK, wxDefaultPosition, wxDefaultSize, wxCLRP_DEFAULT_STYLE );
	fgSizer25->Add( uiEdgeColor, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText49 = new wxStaticText( m_panel10, wxID_ANY, wxT("Column:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText49->Wrap( -1 );
	fgSizer25->Add( m_staticText49, 0, wxALL, 5 );
	
	uiEdgeColumn = new wxTextCtrl( m_panel10, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer25->Add( uiEdgeColumn, 0, wxALL|wxEXPAND, 5 );
	
	
	sbSizerEdges->Add( fgSizer25, 1, wxEXPAND, 5 );
	
	
	fgSizer4->Add( sbSizerEdges, 1, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizerEditorFeel;
	sbSizerEditorFeel = new wxStaticBoxSizer( new wxStaticBox( m_panel10, wxID_ANY, wxT("Feel") ), wxVERTICAL );
	
	uiTabIndents = new wxCheckBox( m_panel10, wxID_ANY, wxT("Tab indents"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizerEditorFeel->Add( uiTabIndents, 0, wxALL, 5 );
	
	uiBackspaceUnindents = new wxCheckBox( m_panel10, wxID_ANY, wxT("Bacspace unindents"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizerEditorFeel->Add( uiBackspaceUnindents, 0, wxALL, 5 );
	
	
	fgSizer4->Add( sbSizerEditorFeel, 1, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizerIndent;
	sbSizerIndent = new wxStaticBoxSizer( new wxStaticBox( m_panel10, wxID_ANY, wxT("Indenting") ), wxVERTICAL );
	
	wxFlexGridSizer* fgSizer23;
	fgSizer23 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer23->AddGrowableCol( 1 );
	fgSizer23->SetFlexibleDirection( wxBOTH );
	fgSizer23->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	
	fgSizer23->Add( 0, 0, 1, wxEXPAND, 5 );
	
	uiIndentGuide = new wxCheckBox( m_panel10, wxID_ANY, wxT("Display indent guide"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer23->Add( uiIndentGuide, 0, wxALL, 5 );
	
	m_staticText44 = new wxStaticText( m_panel10, wxID_ANY, wxT("Indent type:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText44->Wrap( -1 );
	fgSizer23->Add( m_staticText44, 0, wxALL, 5 );
	
	uiEditIndentation = new wxComboBox( m_panel10, wxID_ANY, wxT("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_DROPDOWN|wxCB_READONLY );
	uiEditIndentation->Append( wxT("None") );
	uiEditIndentation->Append( wxT("Keep") );
	uiEditIndentation->Append( wxT("Smart") );
	fgSizer23->Add( uiEditIndentation, 0, wxALL|wxEXPAND, 5 );
	
	
	sbSizerIndent->Add( fgSizer23, 1, wxEXPAND, 5 );
	
	
	fgSizer4->Add( sbSizerIndent, 1, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizerWhitespace;
	sbSizerWhitespace = new wxStaticBoxSizer( new wxStaticBox( m_panel10, wxID_ANY, wxT("Whitespace") ), wxVERTICAL );
	
	wxFlexGridSizer* fgSizer24;
	fgSizer24 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer24->AddGrowableCol( 1 );
	fgSizer24->SetFlexibleDirection( wxBOTH );
	fgSizer24->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	
	fgSizer24->Add( 0, 0, 1, wxEXPAND, 5 );
	
	uiDisplayEOL = new wxCheckBox( m_panel10, wxID_ANY, wxT("Display EOL"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer24->Add( uiDisplayEOL, 0, wxALL, 5 );
	
	m_staticText45 = new wxStaticText( m_panel10, wxID_ANY, wxT("View whitespace:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText45->Wrap( -1 );
	fgSizer24->Add( m_staticText45, 0, wxALL, 5 );
	
	uiViewWhitespace = new wxComboBox( m_panel10, wxID_ANY, wxT("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_DROPDOWN|wxCB_READONLY );
	uiViewWhitespace->Append( wxT("Hidden") );
	uiViewWhitespace->Append( wxT("Always") );
	uiViewWhitespace->Append( wxT("AfterIdent") );
	fgSizer24->Add( uiViewWhitespace, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText46 = new wxStaticText( m_panel10, wxID_ANY, wxT("Word wrap:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText46->Wrap( -1 );
	fgSizer24->Add( m_staticText46, 0, wxALL, 5 );
	
	uiWordwrap = new wxComboBox( m_panel10, wxID_ANY, wxT("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_DROPDOWN|wxCB_READONLY );
	uiWordwrap->Append( wxT("None") );
	uiWordwrap->Append( wxT("Char") );
	uiWordwrap->Append( wxT("Word") );
	fgSizer24->Add( uiWordwrap, 0, wxALL|wxEXPAND, 5 );
	
	
	sbSizerWhitespace->Add( fgSizer24, 1, wxEXPAND, 5 );
	
	
	fgSizer4->Add( sbSizerWhitespace, 1, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizerGeneral;
	sbSizerGeneral = new wxStaticBoxSizer( new wxStaticBox( m_panel10, wxID_ANY, wxT("General") ), wxVERTICAL );
	
	uiEditShowCompilerAnnotations = new wxCheckBox( m_panel10, wxID_ANY, wxT("Show warning/errors as annotations"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizerGeneral->Add( uiEditShowCompilerAnnotations, 0, wxALL, 5 );
	
	uiEditShowMultilineIndicators = new wxCheckBox( m_panel10, wxID_ANY, wxT("Show multiline warning/errors"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizerGeneral->Add( uiEditShowMultilineIndicators, 0, wxALL, 5 );
	
	uiEditHighlightKeyword = new wxCheckBox( m_panel10, wxID_ANY, wxT("Auto highlight keywords"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizerGeneral->Add( uiEditHighlightKeyword, 0, wxALL, 5 );
	
	uiShowLineNumbers = new wxCheckBox( m_panel10, wxID_ANY, wxT("Show line numbers"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizerGeneral->Add( uiShowLineNumbers, 0, wxALL, 5 );
	
	
	fgSizer4->Add( sbSizerGeneral, 1, wxEXPAND, 5 );
	
	
	m_panel10->SetSizer( fgSizer4 );
	m_panel10->Layout();
	fgSizer4->Fit( m_panel10 );
	m_notebook2->AddPage( m_panel10, wxT("General"), true );
	m_panel11 = new wxPanel( m_notebook2, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_notebook2->AddPage( m_panel11, wxT("C++"), false );
	
	bSizer2->Add( m_notebook2, 1, wxEXPAND | wxALL, 5 );
	
	
	m_editor->SetSizer( bSizer2 );
	m_editor->Layout();
	bSizer2->Fit( m_editor );
	m_notebook1->AddPage( m_editor, wxT("Editor && Feel"), false );
	m_window = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_notebook1->AddPage( m_window, wxT("Window behaviour"), false );
	m_themes = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer28;
	fgSizer28 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer28->AddGrowableCol( 0 );
	fgSizer28->AddGrowableRow( 1 );
	fgSizer28->SetFlexibleDirection( wxBOTH );
	fgSizer28->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	wxFlexGridSizer* fgSizer31;
	fgSizer31 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer31->AddGrowableCol( 1 );
	fgSizer31->SetFlexibleDirection( wxBOTH );
	fgSizer31->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText55 = new wxStaticText( m_themes, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText55->Wrap( -1 );
	fgSizer31->Add( m_staticText55, 0, wxALL, 5 );
	
	m_button40 = new wxButton( m_themes, wxID_ANY, wxT("Use selected theme"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer31->Add( m_button40, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText56 = new wxStaticText( m_themes, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText56->Wrap( -1 );
	fgSizer31->Add( m_staticText56, 0, wxALL, 5 );
	
	m_button41 = new wxButton( m_themes, wxID_ANY, wxT("Export selected theme"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer31->Add( m_button41, 0, wxALL|wxEXPAND, 5 );
	
	
	fgSizer28->Add( fgSizer31, 1, wxEXPAND, 5 );
	
	wxFlexGridSizer* fgSizer221;
	fgSizer221 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer221->AddGrowableCol( 0 );
	fgSizer221->AddGrowableRow( 0 );
	fgSizer221->SetFlexibleDirection( wxBOTH );
	fgSizer221->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	uiThemeList = new wxListBox( m_themes, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	fgSizer221->Add( uiThemeList, 0, wxALL|wxEXPAND, 5 );
	
	wxBoxSizer* bSizer28;
	bSizer28 = new wxBoxSizer( wxVERTICAL );
	
	uiThemeListAdd = new wxButton( m_themes, wxID_ANY, wxT("+"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	bSizer28->Add( uiThemeListAdd, 0, wxALL, 5 );
	
	 uiThemeListChange = new wxButton( m_themes, wxID_ANY, wxT("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	bSizer28->Add(  uiThemeListChange, 0, wxALL, 5 );
	
	uiThemeListRemove = new wxButton( m_themes, wxID_ANY, wxT("-"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	bSizer28->Add( uiThemeListRemove, 0, wxALL, 5 );
	
	uiThemeListUp = new wxButton( m_themes, wxID_ANY, wxT("/\\"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	bSizer28->Add( uiThemeListUp, 0, wxALL, 5 );
	
	uiThemeListDown = new wxButton( m_themes, wxID_ANY, wxT("\\/"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	bSizer28->Add( uiThemeListDown, 0, wxALL, 5 );
	
	
	fgSizer221->Add( bSizer28, 1, wxEXPAND, 5 );
	
	
	fgSizer28->Add( fgSizer221, 1, wxEXPAND, 5 );
	
	
	m_themes->SetSizer( fgSizer28 );
	m_themes->Layout();
	fgSizer28->Fit( m_themes );
	m_notebook1->AddPage( m_themes, wxT("Themes"), true );
	
	bSizer3->Add( m_notebook1, 1, wxEXPAND | wxALL, 5 );
	
	m_sdbSizer1 = new wxStdDialogButtonSizer();
	m_sdbSizer1OK = new wxButton( this, wxID_OK );
	m_sdbSizer1->AddButton( m_sdbSizer1OK );
	m_sdbSizer1Apply = new wxButton( this, wxID_APPLY );
	m_sdbSizer1->AddButton( m_sdbSizer1Apply );
	m_sdbSizer1Cancel = new wxButton( this, wxID_CANCEL );
	m_sdbSizer1->AddButton( m_sdbSizer1Cancel );
	m_sdbSizer1->Realize();
	m_sdbSizer1->SetMinSize( wxSize( -1,50 ) ); 
	
	bSizer3->Add( m_sdbSizer1, 0, wxEXPAND|wxFIXED_MINSIZE, 5 );
	
	
	this->SetSizer( bSizer3 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	uiFontStyles->Connect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( Settings::OnSelectedStyleChanged ), NULL, this );
	uiStyleUseTypeface->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnStyleCheckChanged ), NULL, this );
	uiStyleOnlyFixedSize->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnOnlyFixedSysChanged ), NULL, this );
	uiStyleTypeface->Connect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( Settings::OnStyleFontChanged ), NULL, this );
	uiStyleBold->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnStyleCheckChanged ), NULL, this );
	uiStyleUseBold->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnStyleCheckChanged ), NULL, this );
	uiStyleItalic->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnStyleCheckChanged ), NULL, this );
	uiStyleUseItalic->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnStyleCheckChanged ), NULL, this );
	uiStyleUnderline->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnStyleCheckChanged ), NULL, this );
	uiStyleUseUnderline->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnStyleCheckChanged ), NULL, this );
	uiStyleSize->Connect( wxEVT_CHAR, wxKeyEventHandler( Settings::OnlyAllowNumberChars ), NULL, this );
	uiStyleSize->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( Settings::OnStyleTextChanged ), NULL, this );
	uiStyleUseSize->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnStyleCheckChanged ), NULL, this );
	uiStyleForeground->Connect( wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler( Settings::OnStyleColorChanged ), NULL, this );
	uiStyleUseForeground->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnStyleCheckChanged ), NULL, this );
	uiStyleBackground->Connect( wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler( Settings::OnStyleColorChanged ), NULL, this );
	uiStyleUseBackground->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnStyleCheckChanged ), NULL, this );
	uiIndicatorList->Connect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( Settings::OnIndicatorListChanged ), NULL, this );
	uiIndicatorStyle->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( Settings::OnIndicatorCombobox ), NULL, this );
	uiIndicatorColor->Connect( wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler( Settings::OnIndicatorColor ), NULL, this );
	uiIndicatorUnder->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnIndicatorCheckbox ), NULL, this );
	uiIndicatorAlpha->Connect( wxEVT_CHAR, wxKeyEventHandler( Settings::OnlyAllowNumberChars ), NULL, this );
	uiIndicatorAlpha->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( Settings::OnIndicatorText ), NULL, this );
	uiIndicatorOutlineAlpha->Connect( wxEVT_CHAR, wxKeyEventHandler( Settings::OnlyAllowNumberChars ), NULL, this );
	uiIndicatorOutlineAlpha->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( Settings::OnIndicatorText ), NULL, this );
	uiMarkerList->Connect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( Settings::OnMarkerListChanged ), NULL, this );
	uiMarkerSymbol->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( Settings::OnMarkerComboChanged ), NULL, this );
	uiMarkerForegroundColor->Connect( wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler( Settings::OnMarkerColorChanged ), NULL, this );
	uiMarkerBackgroundColor->Connect( wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler( Settings::OnMarkerComboChanged ), NULL, this );
	uiAllowFolding->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnCheckboxChanged ), NULL, this );
	uiFoldLevelNumbers->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnCheckboxChanged ), NULL, this );
	uiFoldLineBeforeExpanded->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnCheckboxChanged ), NULL, this );
	uiFoldLineBeforeContracted->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnCheckboxChanged ), NULL, this );
	uiFoldLineAfterExpanded->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnCheckboxChanged ), NULL, this );
	uiFoldLineAfterContracted->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnCheckboxChanged ), NULL, this );
	uiEditFoldHi->Connect( wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler( Settings::OnColorChanged ), NULL, this );
	uiEditFoldLow->Connect( wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler( Settings::OnColorChanged ), NULL, this );
	uiCurrentLineVisible->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnCheckboxChanged ), NULL, this );
	uiEditCurrentLineOverdraw->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnCheckboxChanged ), NULL, this );
	uiEditCurrentLineColor->Connect( wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler( Settings::OnColorChanged ), NULL, this );
	uiEditCurrentLineAlpha->Connect( wxEVT_CHAR, wxKeyEventHandler( Settings::OnlyAllowNumberChars ), NULL, this );
	uiEditCurrentLineAlpha->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( Settings::OnEditChanged ), NULL, this );
	uiEditUseSelectionForeground->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnCheckboxChanged ), NULL, this );
	uiEditSelectionForeground->Connect( wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler( Settings::OnColorChanged ), NULL, this );
	uiEditUseSelectionBackground->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnCheckboxChanged ), NULL, this );
	uiEditSelectionBackground->Connect( wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler( Settings::OnColorChanged ), NULL, this );
	uiUseTabs->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnCheckboxChanged ), NULL, this );
	uiTabWidth->Connect( wxEVT_CHAR, wxKeyEventHandler( Settings::OnlyAllowNumberChars ), NULL, this );
	uiTabWidth->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( Settings::OnEditChanged ), NULL, this );
	uiEdgeStyle->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( Settings::OnComboboxChanged ), NULL, this );
	uiEdgeColor->Connect( wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler( Settings::OnColorChanged ), NULL, this );
	uiEdgeColumn->Connect( wxEVT_CHAR, wxKeyEventHandler( Settings::OnlyAllowNumberChars ), NULL, this );
	uiEdgeColumn->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( Settings::OnEditChanged ), NULL, this );
	uiTabIndents->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnCheckboxChanged ), NULL, this );
	uiBackspaceUnindents->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnCheckboxChanged ), NULL, this );
	uiIndentGuide->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnCheckboxChanged ), NULL, this );
	uiEditIndentation->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( Settings::OnComboboxChanged ), NULL, this );
	uiDisplayEOL->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnCheckboxChanged ), NULL, this );
	uiViewWhitespace->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( Settings::OnComboboxChanged ), NULL, this );
	uiWordwrap->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( Settings::OnComboboxChanged ), NULL, this );
	uiEditHighlightKeyword->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnCheckboxChanged ), NULL, this );
	uiShowLineNumbers->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnCheckboxChanged ), NULL, this );
	m_button40->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Settings::OnThemeApplySelected ), NULL, this );
	m_button41->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Settings::OnThemeExportSelected ), NULL, this );
	uiThemeListAdd->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Settings::OnAdd ), NULL, this );
	 uiThemeListChange->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Settings::OnEdit ), NULL, this );
	uiThemeListRemove->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Settings::OnRemove ), NULL, this );
	uiThemeListUp->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Settings::OnUp ), NULL, this );
	uiThemeListDown->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Settings::OnDown ), NULL, this );
	m_sdbSizer1Apply->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Settings::OnApply ), NULL, this );
	m_sdbSizer1Cancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Settings::OnCancel ), NULL, this );
	m_sdbSizer1OK->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Settings::OnOk ), NULL, this );
}

Settings::~Settings()
{
	// Disconnect Events
	uiFontStyles->Disconnect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( Settings::OnSelectedStyleChanged ), NULL, this );
	uiStyleUseTypeface->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnStyleCheckChanged ), NULL, this );
	uiStyleOnlyFixedSize->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnOnlyFixedSysChanged ), NULL, this );
	uiStyleTypeface->Disconnect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( Settings::OnStyleFontChanged ), NULL, this );
	uiStyleBold->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnStyleCheckChanged ), NULL, this );
	uiStyleUseBold->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnStyleCheckChanged ), NULL, this );
	uiStyleItalic->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnStyleCheckChanged ), NULL, this );
	uiStyleUseItalic->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnStyleCheckChanged ), NULL, this );
	uiStyleUnderline->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnStyleCheckChanged ), NULL, this );
	uiStyleUseUnderline->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnStyleCheckChanged ), NULL, this );
	uiStyleSize->Disconnect( wxEVT_CHAR, wxKeyEventHandler( Settings::OnlyAllowNumberChars ), NULL, this );
	uiStyleSize->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( Settings::OnStyleTextChanged ), NULL, this );
	uiStyleUseSize->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnStyleCheckChanged ), NULL, this );
	uiStyleForeground->Disconnect( wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler( Settings::OnStyleColorChanged ), NULL, this );
	uiStyleUseForeground->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnStyleCheckChanged ), NULL, this );
	uiStyleBackground->Disconnect( wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler( Settings::OnStyleColorChanged ), NULL, this );
	uiStyleUseBackground->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnStyleCheckChanged ), NULL, this );
	uiIndicatorList->Disconnect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( Settings::OnIndicatorListChanged ), NULL, this );
	uiIndicatorStyle->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( Settings::OnIndicatorCombobox ), NULL, this );
	uiIndicatorColor->Disconnect( wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler( Settings::OnIndicatorColor ), NULL, this );
	uiIndicatorUnder->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnIndicatorCheckbox ), NULL, this );
	uiIndicatorAlpha->Disconnect( wxEVT_CHAR, wxKeyEventHandler( Settings::OnlyAllowNumberChars ), NULL, this );
	uiIndicatorAlpha->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( Settings::OnIndicatorText ), NULL, this );
	uiIndicatorOutlineAlpha->Disconnect( wxEVT_CHAR, wxKeyEventHandler( Settings::OnlyAllowNumberChars ), NULL, this );
	uiIndicatorOutlineAlpha->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( Settings::OnIndicatorText ), NULL, this );
	uiMarkerList->Disconnect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( Settings::OnMarkerListChanged ), NULL, this );
	uiMarkerSymbol->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( Settings::OnMarkerComboChanged ), NULL, this );
	uiMarkerForegroundColor->Disconnect( wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler( Settings::OnMarkerColorChanged ), NULL, this );
	uiMarkerBackgroundColor->Disconnect( wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler( Settings::OnMarkerComboChanged ), NULL, this );
	uiAllowFolding->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnCheckboxChanged ), NULL, this );
	uiFoldLevelNumbers->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnCheckboxChanged ), NULL, this );
	uiFoldLineBeforeExpanded->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnCheckboxChanged ), NULL, this );
	uiFoldLineBeforeContracted->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnCheckboxChanged ), NULL, this );
	uiFoldLineAfterExpanded->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnCheckboxChanged ), NULL, this );
	uiFoldLineAfterContracted->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnCheckboxChanged ), NULL, this );
	uiEditFoldHi->Disconnect( wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler( Settings::OnColorChanged ), NULL, this );
	uiEditFoldLow->Disconnect( wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler( Settings::OnColorChanged ), NULL, this );
	uiCurrentLineVisible->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnCheckboxChanged ), NULL, this );
	uiEditCurrentLineOverdraw->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnCheckboxChanged ), NULL, this );
	uiEditCurrentLineColor->Disconnect( wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler( Settings::OnColorChanged ), NULL, this );
	uiEditCurrentLineAlpha->Disconnect( wxEVT_CHAR, wxKeyEventHandler( Settings::OnlyAllowNumberChars ), NULL, this );
	uiEditCurrentLineAlpha->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( Settings::OnEditChanged ), NULL, this );
	uiEditUseSelectionForeground->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnCheckboxChanged ), NULL, this );
	uiEditSelectionForeground->Disconnect( wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler( Settings::OnColorChanged ), NULL, this );
	uiEditUseSelectionBackground->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnCheckboxChanged ), NULL, this );
	uiEditSelectionBackground->Disconnect( wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler( Settings::OnColorChanged ), NULL, this );
	uiUseTabs->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnCheckboxChanged ), NULL, this );
	uiTabWidth->Disconnect( wxEVT_CHAR, wxKeyEventHandler( Settings::OnlyAllowNumberChars ), NULL, this );
	uiTabWidth->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( Settings::OnEditChanged ), NULL, this );
	uiEdgeStyle->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( Settings::OnComboboxChanged ), NULL, this );
	uiEdgeColor->Disconnect( wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler( Settings::OnColorChanged ), NULL, this );
	uiEdgeColumn->Disconnect( wxEVT_CHAR, wxKeyEventHandler( Settings::OnlyAllowNumberChars ), NULL, this );
	uiEdgeColumn->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( Settings::OnEditChanged ), NULL, this );
	uiTabIndents->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnCheckboxChanged ), NULL, this );
	uiBackspaceUnindents->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnCheckboxChanged ), NULL, this );
	uiIndentGuide->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnCheckboxChanged ), NULL, this );
	uiEditIndentation->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( Settings::OnComboboxChanged ), NULL, this );
	uiDisplayEOL->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnCheckboxChanged ), NULL, this );
	uiViewWhitespace->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( Settings::OnComboboxChanged ), NULL, this );
	uiWordwrap->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( Settings::OnComboboxChanged ), NULL, this );
	uiEditHighlightKeyword->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnCheckboxChanged ), NULL, this );
	uiShowLineNumbers->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( Settings::OnCheckboxChanged ), NULL, this );
	m_button40->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Settings::OnThemeApplySelected ), NULL, this );
	m_button41->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Settings::OnThemeExportSelected ), NULL, this );
	uiThemeListAdd->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Settings::OnAdd ), NULL, this );
	 uiThemeListChange->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Settings::OnEdit ), NULL, this );
	uiThemeListRemove->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Settings::OnRemove ), NULL, this );
	uiThemeListUp->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Settings::OnUp ), NULL, this );
	uiThemeListDown->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Settings::OnDown ), NULL, this );
	m_sdbSizer1Apply->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Settings::OnApply ), NULL, this );
	m_sdbSizer1Cancel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Settings::OnCancel ), NULL, this );
	m_sdbSizer1OK->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Settings::OnOk ), NULL, this );
	
}

FileProperties::FileProperties( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxVERTICAL );
	
	wxFlexGridSizer* fgSizer4;
	fgSizer4 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer4->AddGrowableCol( 1 );
	fgSizer4->SetFlexibleDirection( wxBOTH );
	fgSizer4->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText1 = new wxStaticText( this, wxID_ANY, wxT("Filename:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	fgSizer4->Add( m_staticText1, 0, wxALIGN_RIGHT|wxALL, 5 );
	
	uiFileName = new wxStaticText( this, wxID_ANY, wxT("<C:\\Some\\Long\\Folder\\path\\to\\file.cpp>"), wxDefaultPosition, wxDefaultSize, 0 );
	uiFileName->Wrap( -1 );
	fgSizer4->Add( uiFileName, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText3 = new wxStaticText( this, wxID_ANY, wxT("Language:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	fgSizer4->Add( m_staticText3, 0, wxALIGN_RIGHT|wxALL, 5 );
	
	uiLanguage = new wxStaticText( this, wxID_ANY, wxT("<C++>"), wxDefaultPosition, wxDefaultSize, 0 );
	uiLanguage->Wrap( -1 );
	fgSizer4->Add( uiLanguage, 0, wxALL|wxEXPAND, 5 );
	
	m_button1 = new wxButton( this, wxID_ANY, wxT("Line ending..."), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer4->Add( m_button1, 0, wxALL, 5 );
	
	uiLineEndings = new wxStaticText( this, wxID_ANY, wxT("CLRF (Windows)"), wxDefaultPosition, wxDefaultSize, 0 );
	uiLineEndings->Wrap( -1 );
	fgSizer4->Add( uiLineEndings, 0, wxALL|wxEXPAND, 5 );
	
	m_button2 = new wxButton( this, wxID_ANY, wxT("Endoding..."), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer4->Add( m_button2, 0, wxALL, 5 );
	
	uiEncoding = new wxStaticText( this, wxID_ANY, wxT("UTF-8"), wxDefaultPosition, wxDefaultSize, 0 );
	uiEncoding->Wrap( -1 );
	fgSizer4->Add( uiEncoding, 0, wxALL|wxEXPAND, 5 );
	
	
	bSizer5->Add( fgSizer4, 1, wxEXPAND, 5 );
	
	wxGridBagSizer* gbSizer2;
	gbSizer2 = new wxGridBagSizer( 0, 0 );
	gbSizer2->SetFlexibleDirection( wxBOTH );
	gbSizer2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	
	bSizer5->Add( gbSizer2, 1, wxEXPAND, 5 );
	
	
	bSizer4->Add( bSizer5, 1, wxEXPAND, 5 );
	
	m_sdbSizer3 = new wxStdDialogButtonSizer();
	m_sdbSizer3OK = new wxButton( this, wxID_OK );
	m_sdbSizer3->AddButton( m_sdbSizer3OK );
	m_sdbSizer3->Realize();
	
	bSizer4->Add( m_sdbSizer3, 0, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer4 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	m_button1->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FileProperties::OnChangeLineEnding ), NULL, this );
	m_button2->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FileProperties::OnChangeEncoding ), NULL, this );
}

FileProperties::~FileProperties()
{
	// Disconnect Events
	m_button1->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FileProperties::OnChangeLineEnding ), NULL, this );
	m_button2->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FileProperties::OnChangeEncoding ), NULL, this );
	
}

CreateNewProject::CreateNewProject( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxVERTICAL );
	
	wxFlexGridSizer* fgSizer11;
	fgSizer11 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer11->AddGrowableCol( 1 );
	fgSizer11->AddGrowableRow( 0 );
	fgSizer11->SetFlexibleDirection( wxBOTH );
	fgSizer11->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	
	fgSizer11->Add( 0, 0, 1, wxEXPAND, 5 );
	
	uiTemplates = new wxListCtrl( this, wxID_ANY, wxDefaultPosition, wxSize( -1,-1 ), wxLC_NO_HEADER|wxLC_REPORT|wxLC_SINGLE_SEL );
	fgSizer11->Add( uiTemplates, 1, wxALL|wxEXPAND|wxFIXED_MINSIZE, 5 );
	
	lblProjectName = new wxStaticText( this, wxID_ANY, wxT("Project name:"), wxDefaultPosition, wxDefaultSize, 0 );
	lblProjectName->Wrap( -1 );
	fgSizer11->Add( lblProjectName, 0, wxALL, 5 );
	
	uiProjectName = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	fgSizer11->Add( uiProjectName, 1, wxALL|wxEXPAND, 5 );
	
	lblProjectFolder = new wxStaticText( this, wxID_ANY, wxT("Project folder:"), wxDefaultPosition, wxDefaultSize, 0 );
	lblProjectFolder->Wrap( -1 );
	fgSizer11->Add( lblProjectFolder, 0, wxALL, 5 );
	
	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );
	
	uiProjectfolder = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( uiProjectfolder, 1, wxALL, 5 );
	
	uiBrowseProjectFolder = new wxButton( this, wxID_ANY, wxT("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	bSizer9->Add( uiBrowseProjectFolder, 0, wxALL, 5 );
	
	
	fgSizer11->Add( bSizer9, 1, wxEXPAND, 5 );
	
	
	fgSizer11->Add( 0, 0, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxHORIZONTAL );
	
	uiVcs = new wxComboBox( this, wxID_ANY, wxT("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_DROPDOWN|wxCB_READONLY );
	uiVcs->Append( wxT("No VCS") );
	uiVcs->Append( wxT("Git") );
	uiVcs->Append( wxT("Hg") );
	bSizer10->Add( uiVcs, 1, wxALL|wxEXPAND, 5 );
	
	uiTravis = new wxCheckBox( this, wxID_ANY, wxT("Add travis.yml"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( uiTravis, 1, wxALL, 5 );
	
	
	fgSizer11->Add( bSizer10, 1, wxEXPAND, 5 );
	
	lblTargetFolder = new wxStaticText( this, wxID_ANY, wxT("Will be created as:"), wxDefaultPosition, wxDefaultSize, 0 );
	lblTargetFolder->Wrap( -1 );
	fgSizer11->Add( lblTargetFolder, 0, wxALL, 5 );
	
	uiTargetFolder = new wxStaticText( this, wxID_ANY, wxT("C:/myfolder/myprojects/test/Cargo.toml"), wxDefaultPosition, wxDefaultSize, 0 );
	uiTargetFolder->Wrap( -1 );
	fgSizer11->Add( uiTargetFolder, 0, wxALL, 5 );
	
	
	bSizer7->Add( fgSizer11, 1, wxEXPAND, 5 );
	
	uiButtons = new wxStdDialogButtonSizer();
	uiButtonsOK = new wxButton( this, wxID_OK );
	uiButtons->AddButton( uiButtonsOK );
	uiButtonsCancel = new wxButton( this, wxID_CANCEL );
	uiButtons->AddButton( uiButtonsCancel );
	uiButtons->Realize();
	
	bSizer7->Add( uiButtons, 0, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer7 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	uiProjectName->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( CreateNewProject::OnProjectNameChanged ), NULL, this );
	uiProjectName->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( CreateNewProject::OnProjectNameEnter ), NULL, this );
	uiProjectfolder->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( CreateNewProject::OnProjectFolderChanged ), NULL, this );
	uiBrowseProjectFolder->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CreateNewProject::OnBrowseProjectFolder ), NULL, this );
	uiButtonsCancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CreateNewProject::OnCancel ), NULL, this );
	uiButtonsOK->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CreateNewProject::OnOk ), NULL, this );
}

CreateNewProject::~CreateNewProject()
{
	// Disconnect Events
	uiProjectName->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( CreateNewProject::OnProjectNameChanged ), NULL, this );
	uiProjectName->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( CreateNewProject::OnProjectNameEnter ), NULL, this );
	uiProjectfolder->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( CreateNewProject::OnProjectFolderChanged ), NULL, this );
	uiBrowseProjectFolder->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CreateNewProject::OnBrowseProjectFolder ), NULL, this );
	uiButtonsCancel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CreateNewProject::OnCancel ), NULL, this );
	uiButtonsOK->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CreateNewProject::OnOk ), NULL, this );
	
}

CreateNewFile::CreateNewFile( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxVERTICAL );
	
	wxFlexGridSizer* fgSizer12;
	fgSizer12 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer12->AddGrowableCol( 0 );
	fgSizer12->AddGrowableRow( 0 );
	fgSizer12->SetFlexibleDirection( wxBOTH );
	fgSizer12->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	uiTemplates = new wxListCtrl( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_REPORT );
	fgSizer12->Add( uiTemplates, 1, wxALL|wxEXPAND, 5 );
	
	wxFlexGridSizer* fgSizer11;
	fgSizer11 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer11->AddGrowableCol( 1 );
	fgSizer11->SetFlexibleDirection( wxBOTH );
	fgSizer11->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText18 = new wxStaticText( this, wxID_ANY, wxT("Name:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText18->Wrap( -1 );
	fgSizer11->Add( m_staticText18, 0, wxALL, 5 );
	
	uiName = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	fgSizer11->Add( uiName, 1, wxALL|wxEXPAND, 5 );
	
	m_staticText19 = new wxStaticText( this, wxID_ANY, wxT("Path:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText19->Wrap( -1 );
	fgSizer11->Add( m_staticText19, 0, wxALL, 5 );
	
	uiPath = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer11->Add( uiPath, 1, wxALL|wxEXPAND, 5 );
	
	
	fgSizer12->Add( fgSizer11, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxHORIZONTAL );
	
	uiReplaceAction = new wxComboBox( this, wxID_ANY, wxT("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_DROPDOWN|wxCB_READONLY ); 
	uiReplaceAction->SetSelection( 0 );
	bSizer12->Add( uiReplaceAction, 1, wxALL|wxEXPAND, 5 );
	
	uiLowerCase = new wxCheckBox( this, wxID_ANY, wxT("Lower case filenames"), wxDefaultPosition, wxDefaultSize, 0 );
	uiLowerCase->SetValue(true); 
	bSizer12->Add( uiLowerCase, 1, wxALL, 5 );
	
	
	fgSizer12->Add( bSizer12, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText21 = new wxStaticText( this, wxID_ANY, wxT("Will create file at:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText21->Wrap( -1 );
	bSizer13->Add( m_staticText21, 0, wxALL, 5 );
	
	uiSuggestedFilePath = new wxStaticText( this, wxID_ANY, wxT("C:/path/to/my/myproject/src/hello-world.rs"), wxDefaultPosition, wxDefaultSize, 0 );
	uiSuggestedFilePath->Wrap( -1 );
	bSizer13->Add( uiSuggestedFilePath, 1, wxALL, 5 );
	
	
	fgSizer12->Add( bSizer13, 1, wxEXPAND, 5 );
	
	
	bSizer10->Add( fgSizer12, 1, wxEXPAND, 5 );
	
	m_sdbSizer4 = new wxStdDialogButtonSizer();
	m_sdbSizer4OK = new wxButton( this, wxID_OK );
	m_sdbSizer4->AddButton( m_sdbSizer4OK );
	m_sdbSizer4Cancel = new wxButton( this, wxID_CANCEL );
	m_sdbSizer4->AddButton( m_sdbSizer4Cancel );
	m_sdbSizer4->Realize();
	
	bSizer10->Add( m_sdbSizer4, 0, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer10 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	uiName->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( CreateNewFile::OnTextChanged ), NULL, this );
	uiName->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( CreateNewFile::OnNameEnter ), NULL, this );
	uiPath->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( CreateNewFile::OnTextChanged ), NULL, this );
	uiReplaceAction->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( CreateNewFile::OnComboChanged ), NULL, this );
	uiLowerCase->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( CreateNewFile::OnCheckChanged ), NULL, this );
	m_sdbSizer4Cancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CreateNewFile::OnCancel ), NULL, this );
	m_sdbSizer4OK->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CreateNewFile::OnOk ), NULL, this );
}

CreateNewFile::~CreateNewFile()
{
	// Disconnect Events
	uiName->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( CreateNewFile::OnTextChanged ), NULL, this );
	uiName->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( CreateNewFile::OnNameEnter ), NULL, this );
	uiPath->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( CreateNewFile::OnTextChanged ), NULL, this );
	uiReplaceAction->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( CreateNewFile::OnComboChanged ), NULL, this );
	uiLowerCase->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( CreateNewFile::OnCheckChanged ), NULL, this );
	m_sdbSizer4Cancel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CreateNewFile::OnCancel ), NULL, this );
	m_sdbSizer4OK->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CreateNewFile::OnOk ), NULL, this );
	
}

DeleteFolder::DeleteFolder( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxVERTICAL );
	
	uiRemoveFileDescription = new wxStaticText( this, wxID_ANY, wxT("Do you want to remove the folder?"), wxDefaultPosition, wxDefaultSize, 0 );
	uiRemoveFileDescription->Wrap( -1 );
	bSizer14->Add( uiRemoveFileDescription, 0, wxALL, 5 );
	
	uiFull = new wxCheckBox( this, wxID_ANY, wxT("Full"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer14->Add( uiFull, 0, wxALL, 5 );
	
	uiRecursive = new wxCheckBox( this, wxID_ANY, wxT("Recursive"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer14->Add( uiRecursive, 0, wxALL, 5 );
	
	m_sdbSizer5 = new wxStdDialogButtonSizer();
	m_sdbSizer5Yes = new wxButton( this, wxID_YES );
	m_sdbSizer5->AddButton( m_sdbSizer5Yes );
	m_sdbSizer5No = new wxButton( this, wxID_NO );
	m_sdbSizer5->AddButton( m_sdbSizer5No );
	m_sdbSizer5->Realize();
	
	bSizer14->Add( m_sdbSizer5, 0, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer14 );
	this->Layout();
	bSizer14->Fit( this );
	
	this->Centre( wxBOTH );
	
	// Connect Events
	m_sdbSizer5No->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DeleteFolder::OnNo ), NULL, this );
	m_sdbSizer5Yes->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DeleteFolder::OnYes ), NULL, this );
}

DeleteFolder::~DeleteFolder()
{
	// Disconnect Events
	m_sdbSizer5No->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DeleteFolder::OnNo ), NULL, this );
	m_sdbSizer5Yes->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DeleteFolder::OnYes ), NULL, this );
	
}

QuickOpen::QuickOpen( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer16;
	bSizer16 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxVERTICAL );
	
	uiFileList = new wxListCtrl( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_REPORT );
	bSizer17->Add( uiFileList, 1, wxALL|wxEXPAND, 5 );
	
	uiFilterName = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer17->Add( uiFilterName, 0, wxALL|wxEXPAND, 5 );
	
	uiCaseSensitive = new wxCheckBox( this, wxID_ANY, wxT("Case sensitivity"), wxDefaultPosition, wxDefaultSize, 0 );
	uiCaseSensitive->SetValue(true); 
	bSizer17->Add( uiCaseSensitive, 0, wxALL, 5 );
	
	
	bSizer16->Add( bSizer17, 1, wxEXPAND, 5 );
	
	m_sdbSizer6 = new wxStdDialogButtonSizer();
	m_sdbSizer6OK = new wxButton( this, wxID_OK );
	m_sdbSizer6->AddButton( m_sdbSizer6OK );
	m_sdbSizer6Cancel = new wxButton( this, wxID_CANCEL );
	m_sdbSizer6->AddButton( m_sdbSizer6Cancel );
	m_sdbSizer6->Realize();
	
	bSizer16->Add( m_sdbSizer6, 0, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer16 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_ACTIVATE, wxActivateEventHandler( QuickOpen::OnActivate ) );
	uiCaseSensitive->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( QuickOpen::OnContextSensitive ), NULL, this );
	m_sdbSizer6Cancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( QuickOpen::OnCancel ), NULL, this );
	m_sdbSizer6OK->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( QuickOpen::OnOk ), NULL, this );
}

QuickOpen::~QuickOpen()
{
	// Disconnect Events
	this->Disconnect( wxEVT_ACTIVATE, wxActivateEventHandler( QuickOpen::OnActivate ) );
	uiCaseSensitive->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( QuickOpen::OnContextSensitive ), NULL, this );
	m_sdbSizer6Cancel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( QuickOpen::OnCancel ), NULL, this );
	m_sdbSizer6OK->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( QuickOpen::OnOk ), NULL, this );
	
}

Find::Find( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer16;
	bSizer16 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText23 = new wxStaticText( this, wxID_ANY, wxT("Find what:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText23->Wrap( -1 );
	bSizer16->Add( m_staticText23, 0, wxALL, 5 );
	
	uiFindText = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer16->Add( uiFindText, 0, wxALL|wxEXPAND, 5 );
	
	uiReplaceStatic = new wxStaticText( this, wxID_ANY, wxT("Replace with:"), wxDefaultPosition, wxDefaultSize, 0 );
	uiReplaceStatic->Wrap( -1 );
	bSizer16->Add( uiReplaceStatic, 0, wxALL, 5 );
	
	uiReplaceText = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer16->Add( uiReplaceText, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText24 = new wxStaticText( this, wxID_ANY, wxT("Look in:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText24->Wrap( -1 );
	bSizer16->Add( m_staticText24, 0, wxALL, 5 );
	
	uiLookIn = new wxComboBox( this, wxID_ANY, wxT("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_DROPDOWN|wxCB_READONLY ); 
	uiLookIn->SetSelection( 0 );
	bSizer16->Add( uiLookIn, 0, wxALL|wxEXPAND, 5 );
	
	uiIncludeSubFolders = new wxCheckBox( this, wxID_ANY, wxT("Include sub-folders"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer16->Add( uiIncludeSubFolders, 0, wxALL, 5 );
	
	uiKeepFilesOpen = new wxCheckBox( this, wxID_ANY, wxT("Keep files open"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer16->Add( uiKeepFilesOpen, 0, wxALL, 5 );
	
	wxStaticBoxSizer* sbSizer9;
	sbSizer9 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Find options") ), wxVERTICAL );
	
	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxVERTICAL );
	
	uiMatchCase = new wxCheckBox( this, wxID_ANY, wxT("Match case"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer17->Add( uiMatchCase, 0, wxALL, 5 );
	
	uiMatchWholeWord = new wxCheckBox( this, wxID_ANY, wxT("Match whole word"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer17->Add( uiMatchWholeWord, 0, wxALL, 5 );
	
	uiFindWordStart = new wxCheckBox( this, wxID_ANY, wxT("Must be start of the word"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer17->Add( uiFindWordStart, 0, wxALL, 5 );
	
	uiFindTarget = new wxComboBox( this, wxID_ANY, wxT("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_DROPDOWN|wxCB_READONLY ); 
	uiFindTarget->SetSelection( 0 );
	bSizer17->Add( uiFindTarget, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText25 = new wxStaticText( this, wxID_ANY, wxT("Look at theese file types:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText25->Wrap( -1 );
	bSizer17->Add( m_staticText25, 0, wxALL, 5 );
	
	uiFileTypes = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer17->Add( uiFileTypes, 0, wxALL|wxEXPAND, 5 );
	
	m_scintilla1 = new wxStyledTextCtrl( this, wxID_ANY, wxDefaultPosition, wxSize( 0,0 ), 0, wxEmptyString );
	m_scintilla1->SetUseTabs( true );
	m_scintilla1->SetTabWidth( 4 );
	m_scintilla1->SetIndent( 4 );
	m_scintilla1->SetTabIndents( true );
	m_scintilla1->SetBackSpaceUnIndents( true );
	m_scintilla1->SetViewEOL( false );
	m_scintilla1->SetViewWhiteSpace( false );
	m_scintilla1->SetMarginWidth( 2, 0 );
	m_scintilla1->SetIndentationGuides( true );
	m_scintilla1->SetMarginType( 1, wxSTC_MARGIN_SYMBOL );
	m_scintilla1->SetMarginMask( 1, wxSTC_MASK_FOLDERS );
	m_scintilla1->SetMarginWidth( 1, 16);
	m_scintilla1->SetMarginSensitive( 1, true );
	m_scintilla1->SetProperty( wxT("fold"), wxT("1") );
	m_scintilla1->SetFoldFlags( wxSTC_FOLDFLAG_LINEBEFORE_CONTRACTED | wxSTC_FOLDFLAG_LINEAFTER_CONTRACTED );
	m_scintilla1->SetMarginType( 0, wxSTC_MARGIN_NUMBER );
	m_scintilla1->SetMarginWidth( 0, m_scintilla1->TextWidth( wxSTC_STYLE_LINENUMBER, wxT("_99999") ) );
	m_scintilla1->MarkerDefine( wxSTC_MARKNUM_FOLDER, wxSTC_MARK_BOXPLUS );
	m_scintilla1->MarkerSetBackground( wxSTC_MARKNUM_FOLDER, wxColour( wxT("BLACK") ) );
	m_scintilla1->MarkerSetForeground( wxSTC_MARKNUM_FOLDER, wxColour( wxT("WHITE") ) );
	m_scintilla1->MarkerDefine( wxSTC_MARKNUM_FOLDEROPEN, wxSTC_MARK_BOXMINUS );
	m_scintilla1->MarkerSetBackground( wxSTC_MARKNUM_FOLDEROPEN, wxColour( wxT("BLACK") ) );
	m_scintilla1->MarkerSetForeground( wxSTC_MARKNUM_FOLDEROPEN, wxColour( wxT("WHITE") ) );
	m_scintilla1->MarkerDefine( wxSTC_MARKNUM_FOLDERSUB, wxSTC_MARK_EMPTY );
	m_scintilla1->MarkerDefine( wxSTC_MARKNUM_FOLDEREND, wxSTC_MARK_BOXPLUS );
	m_scintilla1->MarkerSetBackground( wxSTC_MARKNUM_FOLDEREND, wxColour( wxT("BLACK") ) );
	m_scintilla1->MarkerSetForeground( wxSTC_MARKNUM_FOLDEREND, wxColour( wxT("WHITE") ) );
	m_scintilla1->MarkerDefine( wxSTC_MARKNUM_FOLDEROPENMID, wxSTC_MARK_BOXMINUS );
	m_scintilla1->MarkerSetBackground( wxSTC_MARKNUM_FOLDEROPENMID, wxColour( wxT("BLACK") ) );
	m_scintilla1->MarkerSetForeground( wxSTC_MARKNUM_FOLDEROPENMID, wxColour( wxT("WHITE") ) );
	m_scintilla1->MarkerDefine( wxSTC_MARKNUM_FOLDERMIDTAIL, wxSTC_MARK_EMPTY );
	m_scintilla1->MarkerDefine( wxSTC_MARKNUM_FOLDERTAIL, wxSTC_MARK_EMPTY );
	m_scintilla1->SetSelBackground( true, wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHT ) );
	m_scintilla1->SetSelForeground( true, wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHTTEXT ) );
	m_scintilla1->SetMaxSize( wxSize( 0,0 ) );
	
	bSizer17->Add( m_scintilla1, 0, wxALL, 5 );
	
	
	sbSizer9->Add( bSizer17, 1, wxEXPAND, 5 );
	
	
	bSizer16->Add( sbSizer9, 1, wxEXPAND, 5 );
	
	m_sdbSizer7 = new wxStdDialogButtonSizer();
	m_sdbSizer7OK = new wxButton( this, wxID_OK );
	m_sdbSizer7->AddButton( m_sdbSizer7OK );
	m_sdbSizer7Cancel = new wxButton( this, wxID_CANCEL );
	m_sdbSizer7->AddButton( m_sdbSizer7Cancel );
	m_sdbSizer7->Realize();
	
	bSizer16->Add( m_sdbSizer7, 0, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer16 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	uiFindText->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( Find::OnEnter ), NULL, this );
	uiFileTypes->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( Find::OnEnter ), NULL, this );
	m_sdbSizer7Cancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Find::OnCancel ), NULL, this );
	m_sdbSizer7OK->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Find::OnOk ), NULL, this );
}

Find::~Find()
{
	// Disconnect Events
	uiFindText->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( Find::OnEnter ), NULL, this );
	uiFileTypes->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( Find::OnEnter ), NULL, this );
	m_sdbSizer7Cancel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Find::OnCancel ), NULL, this );
	m_sdbSizer7OK->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Find::OnOk ), NULL, this );
	
}

ProjectSettings::ProjectSettings( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer18;
	bSizer18 = new wxBoxSizer( wxVERTICAL );
	
	m_notebook3 = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_cargoPanel = new wxPanel( m_notebook3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer13;
	fgSizer13 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer13->AddGrowableCol( 1 );
	fgSizer13->AddGrowableRow( 2 );
	fgSizer13->SetFlexibleDirection( wxBOTH );
	fgSizer13->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText27 = new wxStaticText( m_cargoPanel, wxID_ANY, wxT("Name:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText27->Wrap( -1 );
	fgSizer13->Add( m_staticText27, 0, wxALL, 5 );
	
	uiCargoName = new wxTextCtrl( m_cargoPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer13->Add( uiCargoName, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText28 = new wxStaticText( m_cargoPanel, wxID_ANY, wxT("Version:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText28->Wrap( -1 );
	fgSizer13->Add( m_staticText28, 0, wxALL, 5 );
	
	uiCargoVersion = new wxTextCtrl( m_cargoPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer13->Add( uiCargoVersion, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText29 = new wxStaticText( m_cargoPanel, wxID_ANY, wxT("Authors:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText29->Wrap( -1 );
	fgSizer13->Add( m_staticText29, 0, wxALL, 5 );
	
	uiCargoAuthors = new wxListBox( m_cargoPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, wxLB_ALWAYS_SB ); 
	fgSizer13->Add( uiCargoAuthors, 0, wxALL|wxEXPAND, 5 );
	
	
	fgSizer13->Add( 0, 0, 1, wxEXPAND, 5 );
	
	uiCargoLoadError = new wxStaticText( m_cargoPanel, wxID_ANY, wxT("Error message!"), wxDefaultPosition, wxDefaultSize, 0 );
	uiCargoLoadError->Wrap( -1 );
	uiCargoLoadError->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), 70, 90, 92, false, wxEmptyString ) );
	
	fgSizer13->Add( uiCargoLoadError, 0, wxALL|wxEXPAND, 5 );
	
	
	m_cargoPanel->SetSizer( fgSizer13 );
	m_cargoPanel->Layout();
	fgSizer13->Fit( m_cargoPanel );
	m_notebook3->AddPage( m_cargoPanel, wxT("&Cargo"), false );
	m_dependenciesPanel = new wxPanel( m_notebook3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer22;
	bSizer22 = new wxBoxSizer( wxVERTICAL );
	
	uiCargoDependencies = new wxListBox( m_dependenciesPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, wxLB_ALWAYS_SB ); 
	bSizer22->Add( uiCargoDependencies, 1, wxALL|wxEXPAND, 5 );
	
	
	m_dependenciesPanel->SetSizer( bSizer22 );
	m_dependenciesPanel->Layout();
	bSizer22->Fit( m_dependenciesPanel );
	m_notebook3->AddPage( m_dependenciesPanel, wxT("Cargo &Dependencies"), false );
	m_featuresPanel = new wxPanel( m_notebook3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer24;
	bSizer24 = new wxBoxSizer( wxVERTICAL );
	
	uiCargoFeatures = new wxListBox( m_featuresPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, wxLB_ALWAYS_SB ); 
	bSizer24->Add( uiCargoFeatures, 1, wxALL|wxEXPAND, 5 );
	
	
	m_featuresPanel->SetSizer( bSizer24 );
	m_featuresPanel->Layout();
	bSizer24->Fit( m_featuresPanel );
	m_notebook3->AddPage( m_featuresPanel, wxT("Cargo &Features"), false );
	m_editorPanel = new wxPanel( m_notebook3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer16;
	fgSizer16 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer16->AddGrowableCol( 1 );
	fgSizer16->SetFlexibleDirection( wxBOTH );
	fgSizer16->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	
	fgSizer16->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_staticText32 = new wxStaticText( m_editorPanel, wxID_ANY, wxT("Theese settings control the editor for the current project\nand are saved next to Cargo.toml in a file called project.ride"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText32->Wrap( -1 );
	fgSizer16->Add( m_staticText32, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText31 = new wxStaticText( m_editorPanel, wxID_ANY, wxT("Tab width:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText31->Wrap( -1 );
	fgSizer16->Add( m_staticText31, 0, wxALL, 5 );
	
	 uiEditorTabWidth = new wxTextCtrl( m_editorPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer16->Add(  uiEditorTabWidth, 1, wxALL|wxEXPAND, 5 );
	
	
	fgSizer16->Add( 0, 0, 1, wxEXPAND, 5 );
	
	uiEditorUseTabs = new wxCheckBox( m_editorPanel, wxID_ANY, wxT("Use tabs"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer16->Add( uiEditorUseTabs, 0, wxALL|wxEXPAND, 5 );
	
	
	m_editorPanel->SetSizer( fgSizer16 );
	m_editorPanel->Layout();
	fgSizer16->Fit( m_editorPanel );
	m_notebook3->AddPage( m_editorPanel, wxT("&Editor"), false );
	   m_buildPanel = new wxPanel( m_notebook3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer25;
	bSizer25 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer26;
	bSizer26 = new wxBoxSizer( wxHORIZONTAL );
	
	
	bSizer26->Add( 100, 0, 0, wxEXPAND, 5 );
	
	m_staticText33 = new wxStaticText(    m_buildPanel, wxID_ANY, wxT("Configuration:"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT );
	m_staticText33->Wrap( -1 );
	bSizer26->Add( m_staticText33, 0, wxALL|wxEXPAND, 5 );
	
	uiBuildConfiguration = new wxComboBox(    m_buildPanel, wxID_ANY, wxT("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_DROPDOWN|wxCB_READONLY ); 
	uiBuildConfiguration->SetMinSize( wxSize( 200,-1 ) );
	
	bSizer26->Add( uiBuildConfiguration, 1, wxALL, 5 );
	
	uiBuildManageConfigurations = new wxButton(    m_buildPanel, wxID_ANY, wxT("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	bSizer26->Add( uiBuildManageConfigurations, 0, wxALL, 5 );
	
	
	bSizer26->Add( 0, 0, 1, wxEXPAND, 5 );
	
	
	bSizer25->Add( bSizer26, 0, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer11;
	sbSizer11 = new wxStaticBoxSizer( new wxStaticBox(    m_buildPanel, wxID_ANY, wxT("label") ), wxVERTICAL );
	
	wxFlexGridSizer* fgSizer18;
	fgSizer18 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer18->AddGrowableCol( 1 );
	fgSizer18->AddGrowableRow( 5 );
	fgSizer18->SetFlexibleDirection( wxBOTH );
	fgSizer18->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	
	fgSizer18->Add( 0, 0, 1, wxEXPAND, 5 );
	
	uiBuildConfigurationRelease = new wxCheckBox(    m_buildPanel, wxID_ANY, wxT("Release"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer18->Add( uiBuildConfigurationRelease, 0, wxALL, 5 );
	
	
	fgSizer18->Add( 0, 0, 1, wxEXPAND, 5 );
	
	
	fgSizer18->Add( 0, 0, 1, wxEXPAND, 5 );
	
	uiBuildConfigurationDefaultFeatures = new wxCheckBox(    m_buildPanel, wxID_ANY, wxT("Add default features"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer18->Add( uiBuildConfigurationDefaultFeatures, 0, wxALL, 5 );
	
	
	fgSizer18->Add( 0, 0, 1, wxEXPAND, 5 );
	
	
	fgSizer18->Add( 0, 0, 1, wxEXPAND, 5 );
	
	 uiBuildConfigurationVerbose = new wxCheckBox(    m_buildPanel, wxID_ANY, wxT("Verbose"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer18->Add(  uiBuildConfigurationVerbose, 0, wxALL, 5 );
	
	
	fgSizer18->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_staticText37 = new wxStaticText(    m_buildPanel, wxID_ANY, wxT("Target:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText37->Wrap( -1 );
	fgSizer18->Add( m_staticText37, 0, wxALL, 5 );
	
	uiBuildConfigurationTarget = new wxTextCtrl(    m_buildPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer18->Add( uiBuildConfigurationTarget, 0, wxALL|wxEXPAND, 5 );
	
	uiBuildConfigurationTargetHelp = new wxButton(    m_buildPanel, wxID_ANY, wxT("?"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	fgSizer18->Add( uiBuildConfigurationTargetHelp, 0, wxALL, 5 );
	
	m_staticText34 = new wxStaticText(    m_buildPanel, wxID_ANY, wxT("Custom args:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText34->Wrap( -1 );
	fgSizer18->Add( m_staticText34, 0, wxALL, 5 );
	
	uiBuildConfigurationCustomArgs = new wxTextCtrl(    m_buildPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer18->Add( uiBuildConfigurationCustomArgs, 0, wxALL|wxEXPAND, 5 );
	
	uiBuildConfigurationCustomArgsHelp = new wxButton(    m_buildPanel, wxID_ANY, wxT("?"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	fgSizer18->Add( uiBuildConfigurationCustomArgsHelp, 0, wxALL, 5 );
	
	m_staticText38 = new wxStaticText(    m_buildPanel, wxID_ANY, wxT("Features:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText38->Wrap( -1 );
	fgSizer18->Add( m_staticText38, 0, wxALL, 5 );
	
	uiBuildFeatures = new wxListBox(    m_buildPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	fgSizer18->Add( uiBuildFeatures, 1, wxALL|wxEXPAND, 5 );
	
	wxBoxSizer* bSizer28;
	bSizer28 = new wxBoxSizer( wxVERTICAL );
	
	uiBuildFeatureAdd = new wxButton(    m_buildPanel, wxID_ANY, wxT("+"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	bSizer28->Add( uiBuildFeatureAdd, 0, wxALL, 5 );
	
	uiBuildFeatureEdit = new wxButton(    m_buildPanel, wxID_ANY, wxT("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	bSizer28->Add( uiBuildFeatureEdit, 0, wxALL, 5 );
	
	uiBuildFeatureRemove = new wxButton(    m_buildPanel, wxID_ANY, wxT("-"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	bSizer28->Add( uiBuildFeatureRemove, 0, wxALL, 5 );
	
	uiBuildFeatureUp = new wxButton(    m_buildPanel, wxID_ANY, wxT("/\\"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	bSizer28->Add( uiBuildFeatureUp, 0, wxALL, 5 );
	
	uiBuildFeatureDown = new wxButton(    m_buildPanel, wxID_ANY, wxT("\\/"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	bSizer28->Add( uiBuildFeatureDown, 0, wxALL, 5 );
	
	
	fgSizer18->Add( bSizer28, 0, 0, 5 );
	
	m_staticText48 = new wxStaticText(    m_buildPanel, wxID_ANY, wxT("Build command:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText48->Wrap( -1 );
	fgSizer18->Add( m_staticText48, 0, wxALL, 5 );
	
	uiBuildCommandLine = new wxTextCtrl(    m_buildPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	fgSizer18->Add( uiBuildCommandLine, 0, wxALL|wxEXPAND, 5 );
	
	
	sbSizer11->Add( fgSizer18, 1, wxEXPAND, 5 );
	
	
	bSizer25->Add( sbSizer11, 1, wxEXPAND, 5 );
	
	
	m_buildPanel->SetSizer( bSizer25 );
	m_buildPanel->Layout();
	bSizer25->Fit(    m_buildPanel );
	m_notebook3->AddPage(    m_buildPanel, wxT("&Build"), false );
	m_runPanel = new wxPanel( m_notebook3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer27;
	bSizer27 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer281;
	bSizer281 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer29;
	bSizer29 = new wxBoxSizer( wxHORIZONTAL );
	
	
	bSizer29->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_staticText49 = new wxStaticText( m_runPanel, wxID_ANY, wxT("Run:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText49->Wrap( -1 );
	bSizer29->Add( m_staticText49, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	uiRunConfigurations = new wxComboBox( m_runPanel, wxID_ANY, wxT("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_READONLY ); 
	uiRunConfigurations->SetMinSize( wxSize( 200,-1 ) );
	
	bSizer29->Add( uiRunConfigurations, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	uiRunManageConfigurations = new wxButton( m_runPanel, wxID_ANY, wxT("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	bSizer29->Add( uiRunManageConfigurations, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	
	bSizer29->Add( 0, 0, 1, wxEXPAND, 5 );
	
	
	bSizer281->Add( bSizer29, 0, wxEXPAND, 5 );
	
	
	bSizer27->Add( bSizer281, 0, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer16;
	sbSizer16 = new wxStaticBoxSizer( new wxStaticBox( m_runPanel, wxID_ANY, wxT("label") ), wxVERTICAL );
	
	wxFlexGridSizer* fgSizer23;
	fgSizer23 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer23->AddGrowableCol( 1 );
	fgSizer23->SetFlexibleDirection( wxBOTH );
	fgSizer23->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText50 = new wxStaticText( m_runPanel, wxID_ANY, wxT("Application to launch:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText50->Wrap( -1 );
	fgSizer23->Add( m_staticText50, 0, wxALL, 5 );
	
	uiRunApplication = new wxTextCtrl( m_runPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer23->Add( uiRunApplication, 0, wxALL|wxEXPAND, 5 );
	
	uiRunApplicationCmd = new wxButton( m_runPanel, wxID_ANY, wxT("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	fgSizer23->Add( uiRunApplicationCmd, 0, wxALL, 5 );
	
	m_staticText51 = new wxStaticText( m_runPanel, wxID_ANY, wxT("Arguments to app:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText51->Wrap( -1 );
	fgSizer23->Add( m_staticText51, 0, wxALL, 5 );
	
	uiRunArguments = new wxTextCtrl( m_runPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer23->Add( uiRunArguments, 0, wxALL|wxEXPAND, 5 );
	
	uiRunArgumentsCmd = new wxButton( m_runPanel, wxID_ANY, wxT("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	fgSizer23->Add( uiRunArgumentsCmd, 0, wxALL, 5 );
	
	m_staticText52 = new wxStaticText( m_runPanel, wxID_ANY, wxT("Startup folder:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText52->Wrap( -1 );
	fgSizer23->Add( m_staticText52, 0, wxALL, 5 );
	
	uiRunFolder = new wxTextCtrl( m_runPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer23->Add( uiRunFolder, 0, wxALL|wxEXPAND, 5 );
	
	uiRunFolderCmd = new wxButton( m_runPanel, wxID_ANY, wxT("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	fgSizer23->Add( uiRunFolderCmd, 0, wxALL, 5 );
	
	m_staticText53 = new wxStaticText( m_runPanel, wxID_ANY, wxT("Cmd before launch"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText53->Wrap( -1 );
	fgSizer23->Add( m_staticText53, 0, wxALL, 5 );
	
	uiCmdBeforeLaunch = new wxTextCtrl( m_runPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer23->Add( uiCmdBeforeLaunch, 0, wxALL|wxEXPAND, 5 );
	
	uiCmdBeforeLaunchCmd = new wxButton( m_runPanel, wxID_ANY, wxT("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	fgSizer23->Add( uiCmdBeforeLaunchCmd, 0, wxALL, 5 );
	
	
	fgSizer23->Add( 0, 0, 1, wxEXPAND, 5 );
	
	uiRunWaitForExit = new wxCheckBox( m_runPanel, wxID_ANY, wxT("Wait for application exit"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer23->Add( uiRunWaitForExit, 0, wxALL, 5 );
	
	
	fgSizer23->Add( 0, 0, 1, wxEXPAND, 5 );
	
	
	sbSizer16->Add( fgSizer23, 1, wxEXPAND, 5 );
	
	
	bSizer27->Add( sbSizer16, 1, wxEXPAND, 5 );
	
	
	m_runPanel->SetSizer( bSizer27 );
	m_runPanel->Layout();
	bSizer27->Fit( m_runPanel );
	m_notebook3->AddPage( m_runPanel, wxT("&Run"), true );
	
	bSizer18->Add( m_notebook3, 1, wxEXPAND | wxALL, 5 );
	
	m_sdbSizer8 = new wxStdDialogButtonSizer();
	m_sdbSizer8OK = new wxButton( this, wxID_OK );
	m_sdbSizer8->AddButton( m_sdbSizer8OK );
	m_sdbSizer8Apply = new wxButton( this, wxID_APPLY );
	m_sdbSizer8->AddButton( m_sdbSizer8Apply );
	m_sdbSizer8Cancel = new wxButton( this, wxID_CANCEL );
	m_sdbSizer8->AddButton( m_sdbSizer8Cancel );
	m_sdbSizer8->Realize();
	
	bSizer18->Add( m_sdbSizer8, 0, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer18 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	 uiEditorTabWidth->Connect( wxEVT_CHAR, wxKeyEventHandler( ProjectSettings::OnlyAllowNumberChars ), NULL, this );
	 uiEditorTabWidth->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( ProjectSettings::OnTabWdithChanged ), NULL, this );
	uiEditorUseTabs->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ProjectSettings::OnEditorUseTabsClicked ), NULL, this );
	uiBuildConfiguration->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( ProjectSettings::OnBuildConfiguration ), NULL, this );
	uiBuildManageConfigurations->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ProjectSettings::OnBuildConfigurationModify ), NULL, this );
	uiBuildConfigurationRelease->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ProjectSettings::OnBuildCheckbox ), NULL, this );
	uiBuildConfigurationDefaultFeatures->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ProjectSettings::OnBuildCheckbox ), NULL, this );
	 uiBuildConfigurationVerbose->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ProjectSettings::OnBuildCheckbox ), NULL, this );
	uiBuildConfigurationTarget->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( ProjectSettings::OnBuildText ), NULL, this );
	uiBuildConfigurationTargetHelp->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ProjectSettings::OnBuildTargetHelp ), NULL, this );
	uiBuildConfigurationCustomArgs->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( ProjectSettings::OnBuildText ), NULL, this );
	uiBuildConfigurationCustomArgsHelp->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ProjectSettings::OnBuildCustomArgHelp ), NULL, this );
	uiBuildFeatureAdd->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ProjectSettings::OnBuildFeatureAdd ), NULL, this );
	uiBuildFeatureEdit->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ProjectSettings::OnBuildFeatureEdit ), NULL, this );
	uiBuildFeatureRemove->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ProjectSettings::OnBuildFeatureRemove ), NULL, this );
	uiBuildFeatureUp->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ProjectSettings::OnBuildFeatureUp ), NULL, this );
	uiBuildFeatureDown->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ProjectSettings::OnBuildFeatureDown ), NULL, this );
	uiRunConfigurations->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( ProjectSettings::OnRunConfiguration ), NULL, this );
	uiRunManageConfigurations->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ProjectSettings::OnRunConfigurationModify ), NULL, this );
	uiRunApplication->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( ProjectSettings::OnRunText ), NULL, this );
	uiRunApplicationCmd->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ProjectSettings::OnRunApplication ), NULL, this );
	uiRunArguments->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( ProjectSettings::OnRunText ), NULL, this );
	uiRunArgumentsCmd->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ProjectSettings::OnRunArguments ), NULL, this );
	uiRunFolder->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( ProjectSettings::OnRunText ), NULL, this );
	uiRunFolderCmd->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ProjectSettings::OnRunFolder ), NULL, this );
	uiCmdBeforeLaunch->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( ProjectSettings::OnRunText ), NULL, this );
	uiCmdBeforeLaunchCmd->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ProjectSettings::OnCmdBeforeLaunch ), NULL, this );
	uiRunWaitForExit->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ProjectSettings::OnRunCheck ), NULL, this );
	m_sdbSizer8Apply->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ProjectSettings::OnApply ), NULL, this );
	m_sdbSizer8Cancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ProjectSettings::OnCancel ), NULL, this );
	m_sdbSizer8OK->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ProjectSettings::OnOk ), NULL, this );
}

ProjectSettings::~ProjectSettings()
{
	// Disconnect Events
	 uiEditorTabWidth->Disconnect( wxEVT_CHAR, wxKeyEventHandler( ProjectSettings::OnlyAllowNumberChars ), NULL, this );
	 uiEditorTabWidth->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( ProjectSettings::OnTabWdithChanged ), NULL, this );
	uiEditorUseTabs->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ProjectSettings::OnEditorUseTabsClicked ), NULL, this );
	uiBuildConfiguration->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( ProjectSettings::OnBuildConfiguration ), NULL, this );
	uiBuildManageConfigurations->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ProjectSettings::OnBuildConfigurationModify ), NULL, this );
	uiBuildConfigurationRelease->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ProjectSettings::OnBuildCheckbox ), NULL, this );
	uiBuildConfigurationDefaultFeatures->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ProjectSettings::OnBuildCheckbox ), NULL, this );
	 uiBuildConfigurationVerbose->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ProjectSettings::OnBuildCheckbox ), NULL, this );
	uiBuildConfigurationTarget->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( ProjectSettings::OnBuildText ), NULL, this );
	uiBuildConfigurationTargetHelp->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ProjectSettings::OnBuildTargetHelp ), NULL, this );
	uiBuildConfigurationCustomArgs->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( ProjectSettings::OnBuildText ), NULL, this );
	uiBuildConfigurationCustomArgsHelp->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ProjectSettings::OnBuildCustomArgHelp ), NULL, this );
	uiBuildFeatureAdd->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ProjectSettings::OnBuildFeatureAdd ), NULL, this );
	uiBuildFeatureEdit->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ProjectSettings::OnBuildFeatureEdit ), NULL, this );
	uiBuildFeatureRemove->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ProjectSettings::OnBuildFeatureRemove ), NULL, this );
	uiBuildFeatureUp->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ProjectSettings::OnBuildFeatureUp ), NULL, this );
	uiBuildFeatureDown->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ProjectSettings::OnBuildFeatureDown ), NULL, this );
	uiRunConfigurations->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( ProjectSettings::OnRunConfiguration ), NULL, this );
	uiRunManageConfigurations->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ProjectSettings::OnRunConfigurationModify ), NULL, this );
	uiRunApplication->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( ProjectSettings::OnRunText ), NULL, this );
	uiRunApplicationCmd->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ProjectSettings::OnRunApplication ), NULL, this );
	uiRunArguments->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( ProjectSettings::OnRunText ), NULL, this );
	uiRunArgumentsCmd->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ProjectSettings::OnRunArguments ), NULL, this );
	uiRunFolder->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( ProjectSettings::OnRunText ), NULL, this );
	uiRunFolderCmd->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ProjectSettings::OnRunFolder ), NULL, this );
	uiCmdBeforeLaunch->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( ProjectSettings::OnRunText ), NULL, this );
	uiCmdBeforeLaunchCmd->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ProjectSettings::OnCmdBeforeLaunch ), NULL, this );
	uiRunWaitForExit->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ProjectSettings::OnRunCheck ), NULL, this );
	m_sdbSizer8Apply->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ProjectSettings::OnApply ), NULL, this );
	m_sdbSizer8Cancel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ProjectSettings::OnCancel ), NULL, this );
	m_sdbSizer8OK->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ProjectSettings::OnOk ), NULL, this );
	
}

Configurations::Configurations( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer25;
	bSizer25 = new wxBoxSizer( wxVERTICAL );
	
	wxFlexGridSizer* fgSizer22;
	fgSizer22 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer22->AddGrowableCol( 0 );
	fgSizer22->AddGrowableRow( 0 );
	fgSizer22->SetFlexibleDirection( wxBOTH );
	fgSizer22->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	uiList = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	fgSizer22->Add( uiList, 0, wxALL|wxEXPAND, 5 );
	
	wxBoxSizer* bSizer28;
	bSizer28 = new wxBoxSizer( wxVERTICAL );
	
	uiListAdd = new wxButton( this, wxID_ANY, wxT("+"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	bSizer28->Add( uiListAdd, 0, wxALL, 5 );
	
	 uiListChange = new wxButton( this, wxID_ANY, wxT("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	bSizer28->Add(  uiListChange, 0, wxALL, 5 );
	
	uiListRemove = new wxButton( this, wxID_ANY, wxT("-"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	bSizer28->Add( uiListRemove, 0, wxALL, 5 );
	
	uiListUp = new wxButton( this, wxID_ANY, wxT("/\\"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	bSizer28->Add( uiListUp, 0, wxALL, 5 );
	
	uiListDown = new wxButton( this, wxID_ANY, wxT("\\/"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	bSizer28->Add( uiListDown, 0, wxALL, 5 );
	
	
	fgSizer22->Add( bSizer28, 1, wxEXPAND, 5 );
	
	
	bSizer25->Add( fgSizer22, 1, wxEXPAND, 5 );
	
	m_sdbSizer9 = new wxStdDialogButtonSizer();
	m_sdbSizer9OK = new wxButton( this, wxID_OK );
	m_sdbSizer9->AddButton( m_sdbSizer9OK );
	m_sdbSizer9Apply = new wxButton( this, wxID_APPLY );
	m_sdbSizer9->AddButton( m_sdbSizer9Apply );
	m_sdbSizer9Cancel = new wxButton( this, wxID_CANCEL );
	m_sdbSizer9->AddButton( m_sdbSizer9Cancel );
	m_sdbSizer9->Realize();
	
	bSizer25->Add( m_sdbSizer9, 0, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer25 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	uiListAdd->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Configurations::OnAdd ), NULL, this );
	 uiListChange->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Configurations::OnEdit ), NULL, this );
	uiListRemove->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Configurations::OnRemove ), NULL, this );
	uiListUp->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Configurations::OnUp ), NULL, this );
	uiListDown->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Configurations::OnDown ), NULL, this );
	m_sdbSizer9Apply->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Configurations::OnApply ), NULL, this );
	m_sdbSizer9Cancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Configurations::OnCancel ), NULL, this );
	m_sdbSizer9OK->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Configurations::OnOk ), NULL, this );
}

Configurations::~Configurations()
{
	// Disconnect Events
	uiListAdd->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Configurations::OnAdd ), NULL, this );
	 uiListChange->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Configurations::OnEdit ), NULL, this );
	uiListRemove->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Configurations::OnRemove ), NULL, this );
	uiListUp->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Configurations::OnUp ), NULL, this );
	uiListDown->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Configurations::OnDown ), NULL, this );
	m_sdbSizer9Apply->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Configurations::OnApply ), NULL, this );
	m_sdbSizer9Cancel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Configurations::OnCancel ), NULL, this );
	m_sdbSizer9OK->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Configurations::OnOk ), NULL, this );
	
}

VariableEditor::VariableEditor( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer30;
	bSizer30 = new wxBoxSizer( wxVERTICAL );
	
	uiText = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer30->Add( uiText, 0, wxALL|wxEXPAND, 5 );
	
	wxBoxSizer* bSizer31;
	bSizer31 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText54 = new wxStaticText( this, wxID_ANY, wxT("Add:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText54->Wrap( -1 );
	bSizer31->Add( m_staticText54, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_button22 = new wxButton( this, wxID_ANY, wxT("File..."), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer31->Add( m_button22, 0, wxALL, 5 );
	
	m_button23 = new wxButton( this, wxID_ANY, wxT("Folder..."), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer31->Add( m_button23, 0, wxALL, 5 );
	
	
	bSizer30->Add( bSizer31, 0, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer17;
	sbSizer17 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Custom variables") ), wxVERTICAL );
	
	uiCustomVariables = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	sbSizer17->Add( uiCustomVariables, 1, wxALL|wxEXPAND, 5 );
	
	
	bSizer30->Add( sbSizer17, 1, wxEXPAND, 5 );
	
	m_sdbSizer10 = new wxStdDialogButtonSizer();
	m_sdbSizer10OK = new wxButton( this, wxID_OK );
	m_sdbSizer10->AddButton( m_sdbSizer10OK );
	m_sdbSizer10Cancel = new wxButton( this, wxID_CANCEL );
	m_sdbSizer10->AddButton( m_sdbSizer10Cancel );
	m_sdbSizer10->Realize();
	
	bSizer30->Add( m_sdbSizer10, 0, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer30 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	uiText->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( VariableEditor::OnTextChanged ), NULL, this );
	m_button22->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VariableEditor::OnFile ), NULL, this );
	m_button23->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VariableEditor::OnFolder ), NULL, this );
	uiCustomVariables->Connect( wxEVT_COMMAND_LISTBOX_DOUBLECLICKED, wxCommandEventHandler( VariableEditor::OnCustomDoubleClick ), NULL, this );
	m_sdbSizer10Cancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VariableEditor::OnCancel ), NULL, this );
	m_sdbSizer10OK->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VariableEditor::OnOk ), NULL, this );
}

VariableEditor::~VariableEditor()
{
	// Disconnect Events
	uiText->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( VariableEditor::OnTextChanged ), NULL, this );
	m_button22->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VariableEditor::OnFile ), NULL, this );
	m_button23->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VariableEditor::OnFolder ), NULL, this );
	uiCustomVariables->Disconnect( wxEVT_COMMAND_LISTBOX_DOUBLECLICKED, wxCommandEventHandler( VariableEditor::OnCustomDoubleClick ), NULL, this );
	m_sdbSizer10Cancel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VariableEditor::OnCancel ), NULL, this );
	m_sdbSizer10OK->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VariableEditor::OnOk ), NULL, this );
	
}
