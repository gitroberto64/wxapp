#pragma once
#include "frames.h"

class MainFrame : public MFrame
{
public:
    MainFrame();

private:
    void OnMainFrameClose(wxCloseEvent &event) override;
};
