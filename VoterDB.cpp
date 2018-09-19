#include <iostream>
#include <stdlib.h>
#include <string>
#include "VoterDB.h"
using namespace std;


static void cmd_new(std::string& lastname,std::string& firstname, int& age, int& stnum, std::string& streetname, std::string& town, std::string& zip, float& amtdonated){
   cout << "\nEnter First Name\n";
   cout << ">: ";
   getline (cin, firstname);
   cout << "\nEnter Last Name\n";
   cout << ">: ";
   getline (cin, lastname);
   cout << "\nEnter Age\n";
   cout << ">: ";
   stringstream(cin,age);
   cout << "\nEnter Street Number\n";
   cout << ">: ";
   stringstream(cin,stnum);
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
   cout << "\nEnter Y or N\n";
   cout << "Change First Name? (" << firstname << ")\n";
   cout << ">: ";
   getline(cin,input);
   if(std::tolower(input)=="y"){
      cout << "\n>: ";
      getline (cin, firstname);
      input="";
   }
   cout << "\nChange Last Name? (" << lastname << ")\n";
   cout << ">: ";
   getline(cin,input);
   if(std::tolower(input)=="y"){
      cout << "\n>: ";
      getline (cin, lastname);
      input="";
   }
   cout << "\nChange Age? (" << age << ")\n";
   cout << ">: ";
   getline(cin,input);
   if(std::tolower(input)=="y"){
	    cout << "\n>: ";
      stringstream(cin,age);
      input="";
   }
   cout << "\nChange Street Number? (" << stnum << ")\n";
   cout << ">: ";
   getline(cin,input);
   if(std::tolower(input)=="y"){
	    cout << "\n>: ";
      stringstream(cin,stnum);
      input="";
   }
   cout << "\nChange Street Name? (" << streetname << ")\n";
   cout << ">: ";
   getline(cin,input);
   if(std::tolower(input)=="y"){
	    cout << "\n>: ";
      getline (cin, streetname);
      input="";
   }
   cout << "\nChange Town? (" << town << ")\n";
   cout << ">: ";
   getline(cin,input);
   if(std::tolower(input)=="y"){
	    cout << "\n>: ";
      getline (cin, town);
      input="";
   }
   cout << "\nChange Zipcode? (" << zip << ")\n";
   cout << ">: ";
   getline(cin,input);
   if(std::tolower(input)=="y"){
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
