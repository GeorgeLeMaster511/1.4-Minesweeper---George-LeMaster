#include "cApp.h"

wxIMPLEMENT_APP(cApp);

bool cApp::OnInit() 
{

	mFrame1 = new cMain();
	mFrame1->Show();

	return true;

}

