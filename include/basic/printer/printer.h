#ifndef BASIC_PRINTER_PRINTER_H_
#define BASIC_PRINTER_PRINTER_H_

#include <memory>
#include <string>

namespace basic
{
    class Printer
    {
    public:
        Printer();
        void SetSequencePrefix(const std::string &prefix);
        void SetSequenceSuffix(const std::string &suffix);
        bool PrintLine(const std::string &str);

    private:
        std::string prefix_;
        std::string suffix_;
        int sequence_;
    };

} // namespace basic
#endif // PRINTER_PRINTER_H_
