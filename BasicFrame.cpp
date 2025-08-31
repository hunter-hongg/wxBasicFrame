#include <wx/wx.h>

class MyApp : public wxApp
{
public:
    virtual bool OnInit();
};

class MyFrame : public wxFrame
{
public:
    MyFrame(const wxString& title, const wxPoint& pos, const wxSize& size);
};

bool MyApp::OnInit()
{
    MyFrame *frame = new MyFrame("Basic wxWidgets Frame", wxDefaultPosition, wxSize(400, 300));
    frame->Show(true);
    return true;
}

MyFrame::MyFrame(const wxString& title, const wxPoint& pos, const wxSize& size)
    : wxFrame(nullptr, wxID_ANY, title, pos, size)
{
    new wxPanel(this, wxID_ANY);
}

IMPLEMENT_APP(MyApp)

// 2025年 08月 16日 星期六 08:33:01 CST
// 浙江台州
