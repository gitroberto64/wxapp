#pragma once
#include <wx/app.h>

class MainFrame;

class MApp : public wxApp
{
public:
    bool OnInit();
	int OnExit();
private:
	MainFrame* main_frame;
};
