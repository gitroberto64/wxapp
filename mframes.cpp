#include "mframes.hpp"
#include <wx/app.h>

MainFrame::MainFrame() : MFrame(nullptr)
{
}

void MainFrame::OnMainFrameClose( wxCloseEvent& event )
{
    wxTheApp->ExitMainLoop();
}
