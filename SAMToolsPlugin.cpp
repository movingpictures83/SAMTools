#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "SAMToolsPlugin.h"

void SAMToolsPlugin::input(std::string file) {
 inputfile = file;
}

void SAMToolsPlugin::run() {
   
}

void SAMToolsPlugin::output(std::string file) {
 // alpha_diversity.py -i filtered_otu_table.biom -m observed_species,chao1,shannon,PD_whole_tree -t rep_set.tre -o alpha.txt
   //std::string command = "samtools sort " + inputfile + " > "+file;
	std::string command = "samtools index " + inputfile + " " + file;
	std::cout << command << std::endl;

 system(command.c_str());
}

PluginProxy<SAMToolsPlugin> SAMToolsPluginProxy = PluginProxy<SAMToolsPlugin>("SAMTools", PluginManager::getInstance());
