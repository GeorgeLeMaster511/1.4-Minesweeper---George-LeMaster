#include "cMain.h"

wxBEGIN_EVENT_TABLE(cMain, wxFrame)
	EVT_BUTTON(2006, OnButtonClicked)
wxEND_EVENT_TABLE()

cMain::cMain() : wxFrame(nullptr, wxID_ANY, "George LeMaster - Minesweeper", wxPoint(30,30), wxSize(500, 500))
{
	btns = new wxButton* [nFieldWidth * nFieldHeight];
	wxGridSizer* grid = new wxGridSizer(nFieldWidth, nFieldHeight, 0, 0);

	for (int x = 0; x < nFieldWidth; x++)
	{
		for (int y = 0; y < nFieldHeight; y++)
		{
			btns[y * nFieldWidth + x] = new wxButton(this, 10000 + (y * nFieldWidth + x));
			grid->Add(btns[y * nFieldWidth + x], 1, wxEXPAND | wxALL);
		}
	}

	this->SetSizer(grid);
	grid->Layout();
}

void cMain::OnButtonClicked(wxCommandEvent& evt)
{
		
	evt.Skip();
}