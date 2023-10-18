#include "mapp.hpp"
#include <wx/msgdlg.h>
#include "mframes.hpp"
#ifdef __WXGTK__
#endif


IMPLEMENT_APP(MApp)

bool MApp::OnInit()
{
    try
    {
        setlocale(LC_ALL,"");
		main_frame = new MainFrame();
		SetTopWindow(main_frame);
		main_frame->Show();
        return true;
    }
    catch(const std::exception& e)
    {
        wxMessageBox(wxString(e.what(), wxConvLocal), GetAppName());
        return true;
    }
	catch(...)
	{
        wxMessageBox("Nieznany wyjatek", GetAppName());
        return true;
	}
}

int MApp::OnExit()
{
	try
	{
		main_frame->Destroy();
	}
	catch(const std::exception& e)
	{
		wxMessageBox(wxString(e.what(), wxConvLocal), GetAppName());
	}
	catch(...)
	{
        wxMessageBox("Nieznany wyjatek", GetAppName());
	}
	return wxApp::OnExit();
}


