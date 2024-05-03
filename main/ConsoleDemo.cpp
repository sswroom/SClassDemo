#include "Stdafx.h"
#include "Core/Core.h"
#include "IO/ConsoleWriter.h"

#include "Demo.h"

Int32 MyMain(NotNullPtr<Core::IProgControl> progCtrl)
{
    IO::ConsoleWriter writer;
    writer.WriteLine(CSTR("Console Demo run successfully."));
    writer.WriteLine(CSTR(HEADERMESSAGE));
    return 0;
}
