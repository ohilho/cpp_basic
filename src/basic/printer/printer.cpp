#include "basic/printer/printer.h"
#include <iostream>

namespace basic
{

    Printer::Printer() : prefix_(""), suffix_(""), sequence_(0)
    {
    }
    void Printer::SetSequencePrefix(const std::string &prefix)
    {
        prefix_ = prefix;
    }
    void Printer::SetSequenceSuffix(const std::string &suffix)
    {
        suffix_ = suffix;
    }
    bool Printer::PrintLine(const std::string &str)
    {
        std::cout << prefix_ << sequence_ << suffix_ << str << std::endl;
        sequence_++;
    }

} // namespace basic
