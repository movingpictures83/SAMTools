#ifndef SAMToolsLUGIN_H
#define SAMToolsPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>
#include <vector>

class SAMToolsPlugin : public Plugin
{
public: 
 std::string toString() {return "SAMTools";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;
};

#endif
