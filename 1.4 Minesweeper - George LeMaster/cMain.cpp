#include "cMain.h"

wxBEGIN_EVENT_TABLE(cMain, wxFrame)
	EVT_BUTTON(2006, OnButtonClicked)
wxEND_EVENT_TABLE()

cMain::cMain() : wxFrame(nullptr, wxID_ANY, "George LeMaster - Minesweeper", wxPoint(30,30), wxSize(500, 500))
{
	m_btn1 = new wxButton(this, 2006, "Click Me", wxPoint(15,15), wxSize(150,50));
	m_txt1 = new wxTextCtrl(this, wxID_ANY, "", wxPoint(15, 70), wxSize(300, 30));
	m_list1 = new wxListBox(this, wxID_ANY, wxPoint(15, 110), wxSize(300, 300));


}

void cMain::OnButtonClicked(wxCommandEvent& evt)
{
	m_list1->AppendString(m_txt1->GetValue());
	evt.Skip();
}