#include "basic/app/pretty_echo.h"

namespace basic
{

    PrettyEcho::PrettyEcho()
    {
        printer_.SetSequencePrefix("argv[");
        printer_.SetSequenceSuffix("]: ");
    }
    void PrettyEcho::Run(int argc, char *argv[])
    {
        for (int i = 0; i < argc; ++i)
        {
            printer_.PrintLine(argv[i]);
        }
    }

} // namespace basic
