#pragma once

#ifndef COMMANDMODULE_H
#define COMMANDMODULE_H

#include <string>
#include "../clibr.interfaces.hpp"

namespace clibr
{
    class CommandModule : public ICommand
    {
    public:
        bool execute(const std::string& dirName, const std::string& fileName, 
            ICli* cli) override;
        ~CommandModule() override;
    private:
      bool _argGuardExist(const ICli* cli);
      std::string _generateGuardBody(const std::string& camelCaseName, const ICli* cli);
      std::string _generateGuardHeader(const std::string& camelCaseName, const ICli* cli);
    };
}

#endif // COMMANDMODULE_H
