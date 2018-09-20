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
   string lastname="";
   string firstname="";
   int age=0;
   int stnum=0;
   string street="";
   string town="";
   string zip="";
   float amtdonated=0;
   cout << "Enter a command(New,Update,View,Report,Donate, or Quit)";
   cout << ">: ";
   string command;
   cin>>command;
   int used=0;
   while(command != "Quit"){
	    if(command=="New"){
         int used=1;
	       cmd_new(lastname,firstname,age,stnum,street,town,zip,amtdonated);
	    } else if(command=="Update"){
         int used=1;
	       cmd_update(lastname, firstname, age, stnum,street,town,zip);
	    } else if(command=="View"){
         int used=1;
		     cmd_view(lastname,firstname,age,stnum,street,town,zip,amtdonated);
      } else if(command=="Donate"){
         int used=1;
         cmd_donate(amtdonated);
  	  } else if(command=="Report"){
         int used=1;
         cmd_report(lastname,amtdonated);
	    }
      if(used==0){
         cout << "\n Command '" << command << "' not Recognized";
      }
      used=0;
      cout << "\nCommand>: ";
      cin>>command;
   }


}
