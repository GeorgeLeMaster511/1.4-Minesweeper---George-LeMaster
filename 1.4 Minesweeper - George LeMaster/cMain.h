#pragma once

#include "wx/wx.h"

class cMain : public wxFrame
{

public:
	cMain();

public:
	int nFieldWidth = 10;
	int nFieldHeight = 10;
	wxButton** btns;

	void OnButtonClicked(wxCommandEvent& evt);

	wxDECLARE_EVENT_TABLE();

};

