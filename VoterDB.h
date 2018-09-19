#ifndef VOTERDB_H
#define VOTERDB_H

#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
class VoterDB {
   public:
       static void cmd_new(std::string* lastname,std::string* firstname, int* age, int* stnum, std::string* streetname, std::string* town, std::string* zip, float* amtdonated);
       static void cmd_update(std::string &lastname,std::string &firstname, int &age, int &stnum, std::string &streetname, std::string &town, std::string &zip);
       static void cmd_view(std::string &lastname,std::string &firstname, int &age, int &stnum, std::string &streetname, std::string &town, std::string &zip, float &amtdonated);


   private:

};
#endif
