#define _GLIBCXX_USE_CXX11_ABI 0
#include <iostream>
#include <stdlib.h>
#include "VoterDB.h"
using namespace std;
void cmd_new(string& lastname,string& firstname, int& age, int& stnum, string& streetname, string& town, string& zip, float& amtdonated);
void cmd_update(string& lastname,string& firstname, int& age, int& stnum, string& streetname, string& town, string& zip);
void cmd_view(string& lastname,string& firstname, int& age, int& stnum, string& streetname, string& town, string& zip, float& amtdonated);
void cmd_report(string lastname, float amtdonated);
void cmd_donate(float& amtdonated);
class Voter {
   public:
     int main(int argc, char *argv[]);
   private:

};

int main(int argc, char *argv[]) {
   string lastname="[EMPTY]";
   string firstname="[EMPTY]";
   int age=0;
   int stnum=0;
   string street="[EMPTY]";
   string town="[EMPTY]";
   string zip="00000";
   float amtdonated=0;
   cout << "Enter a command(New,Update,View,Report,Donate, or Quit)";
   cout << ">: ";
   string command;
   cin>>command;
   int used=0;
   while(command != "Quit"){
	    if(command=="New"){
	       cmd_new(lastname,firstname,age,stnum,street,town,zip,amtdonated);
         int used=1;
	    } else if(command=="Update"){
	       cmd_update(lastname, firstname, age, stnum,street,town,zip);
         int used=1;
	    } else if(command=="View"){
		     cmd_view(lastname,firstname,age,stnum,street,town,zip,amtdonated);
         int used=1;
      } else if(command=="Donate"){
         cmd_donate(amtdonated);
         int used=1;
  	  } else if(command=="Report"){
         cmd_report(lastname,amtdonated);
         int used=1;
	    }else{
         cout << "\n Command '" << command << "' not Recognized";
      }
      cout << "\nCommand>: ";
      cin>>command;
   }


}
