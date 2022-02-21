#include "Stdafx.h"
#include "Core/Core.h"
#include "IO/ConsoleWriter.h"

#include "Demo.h"

Int32 MyMain(Core::IProgControl *progCtrl)
{
    IO::ConsoleWriter writer;
    writer.WriteLineC(UTF8STRC("Console Demo run successfully."));
    writer.WriteLineC(UTF8STRC(HEADERMESSAGE));
    return 0;
}
