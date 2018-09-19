#include <iostream>
#include <stdlib.h>
#include <string>
#include <sstream>
#include "VoterDB.h"
using namespace std;


static void cmd_new(std::string& lastname,std::string& firstname, int& age, int& stnum, std::string& streetname, std::string& town, std::string& zip, float& amtdonated){
   int intin=0;
   cout << "\nEnter First Name\n";
   cout << ">: ";
   getline (cin, firstname);
   cout << "\nEnter Last Name\n";
   cout << ">: ";
   getline (cin, lastname);
   cout << "\nEnter Age\n";
   cout << ">: ";
   std::stringstream(cin,intin);
   age=intin;
   intin=0;
   cout << "\nEnter Street Number\n";
   cout << ">: ";
   std::stringstream(cin,intin);
   age=intin;
   intin=0;
   cout << "\nEnter Street Name\n";
   cout << ">: ";
   getline (cin, streetname);
   cout << "\nEnter Town\n";
   cout << ">: ";
   getline (cin, town);
   cout << "\nEnter Zipcode\n";
   cout << ">: ";
   getline (cin, zip);
   amtdonated=0.0;

   return;
}

static void cmd_update(std::string& lastname,std::string& firstname, int& age, int& stnum, std::string& streetname, std::string& town, std::string& zip){
   string input="";
   int intin=0;
   cout << "\nEnter Y or N\n";
   cout << "Change First Name? (" << firstname << ")\n";
   cout << ">: ";
   getline(cin,input);
  if((input)=="y"){
      cout << "\n>: ";
      getline (cin, firstname);
      input="";
   }
   cout << "\nChange Last Name? (" << lastname << ")\n";
   cout << ">: ";
   getline(cin,input);
   if((input)=="y"){
      cout << "\n>: ";
      getline (cin, lastname);
      input="";
   }
   cout << "\nChange Age? (" << age << ")\n";
   cout << ">: ";
   getline(cin,input);
  if((input)=="y"){
	    cout << "\n>: ";
      std::stringstream(cin,intin);
      age=intin;
      intin=0;
      input="";
   }
   cout << "\nChange Street Number? (" << stnum << ")\n";
   cout << ">: ";
   getline(cin,input);
  if((input)=="y"){
	    cout << "\n>: ";
      std::stringstream(cin,intin);
      age=intin;
      intin=0;
      input="";
   }
   cout << "\nChange Street Name? (" << streetname << ")\n";
   cout << ">: ";
   getline(cin,input);
   if((input)=="y"){
	    cout << "\n>: ";
      getline (cin, streetname);
      input="";
   }
   cout << "\nChange Town? (" << town << ")\n";
   cout << ">: ";
   getline(cin,input);
   if((input)=="y"){
	    cout << "\n>: ";
      getline (cin, town);
      input="";
   }
   cout << "\nChange Zipcode? (" << zip << ")\n";
   cout << ">: ";
   getline(cin,input);
   if((input)=="y"){
	    cout << "\n>: ";
      getline (cin, zip);
      input="";
   }

   return;
}

static void cmd_view(std::string& lastname,std::string& firstname, int& age, int& stnum, std::string& streetname, std::string& town, std::string& zip, float& amtdonated){
   cout << firstname << " " << lastname << ", " << age << "\n";
   cout << stnum << " " << streetname << "\n";
   cout << town << " " << zip << "\n";
   cout << "Amount Donated: $" << amtdonated;

   return;
}
