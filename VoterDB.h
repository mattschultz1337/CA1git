#define _GLIBCXX_USE_CXX11_ABI 0
#ifndef VOTERDB_H
#define VOTERDB_H

#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
class VoterDB {
   public:
       static void cmd_new(string& lastname,string& firstname, int& age, int& stnum, string& streetname, string& town, string& zip, float& amtdonated);
       static void cmd_update(string& lastname,string& firstname, int& age, int& stnum, string& streetname, string& town, string& zip);
       static void cmd_view(string& lastname,string& firstname, int& age, int& stnum, string& streetname, string& town, string& zip, float& amtdonated);


   private:

};
#endif
