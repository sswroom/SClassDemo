#include "Stdafx.h"
#include "Core/Core.h"
#include "IO/ConsoleWriter.h"

#include "Demo.h"

Int32 MyMain(Core::IProgControl *progCtrl)
{
    IO::ConsoleWriter writer;
    writer.WriteLine((const UTF8Char*)"Console Demo run successfully.");
    writer.WriteLine((const UTF8Char*)HEADERMESSAGE);
    return 0;
}
