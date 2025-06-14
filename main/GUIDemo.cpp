#include "Stdafx.h"
#include "MyMemory.h"
#include "Core/Core.h"
#include "UI/GUICore.h"
#include "UI/GUIForm.h"

Int32 MyMain(NotNullPtr<Core::ProgControl> progCtrl)
{
    NotNullPtr<UI::GUICore> core;
    if (progCtrl->CreateGUICore(progCtrl).SetTo(core))
    {
        UI::GUIForm *frm;
        NEW_CLASS(frm, UI::GUIForm(0, 640, 480, core));
        frm->SetExitOnClose(true);
        frm->SetText(CSTR("GUI Demo"));
        frm->Show();
        core->Run();
		core.Delete();
    }
    return 0;
}
