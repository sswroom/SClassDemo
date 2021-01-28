#include "Stdafx.h"
#include "MyMemory.h"
#include "Core/Core.h"
#include "UI/GUICore.h"
#include "UI/GUIForm.h"

Int32 MyMain(Core::IProgControl *progCtrl)
{
    UI::GUICore *core = progCtrl->CreateGUICore(progCtrl);
    if (core)
    {
        UI::GUIForm *frm;
        NEW_CLASS(frm, UI::GUIForm(0, 640, 480, core));
        frm->SetExitOnClose(true);
        frm->SetText((const UTF8Char*)"GUI Demo");
        frm->Show();
        core->Run();
        DEL_CLASS(core);
    }
    return 0;
}
