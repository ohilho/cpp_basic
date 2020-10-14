#ifndef BASIC_APP_PRETTY_ECHO_H_
#define BASIC_APP_PRETTY_ECHO_H_
#include "basic/printer/printer.h"
#include <memory>

namespace basic
{
    class PrettyEcho
    {
    public:
        PrettyEcho();
        void Run(int argc, char *argv[]);

    private:
        basic::Printer printer_;
    };

} // namespace basic
#endif // APP_PRETTY_ECHO_H_
