



#include <iostream>                                                                                        //name : Viren p rathod
#include <string>
#include "IsLogIn.h"
#include "choice.h"
#include "mchoice.h"
#include "fchoice.h"                                                                                            //no:-17162121022
//#include<fstream>                                                                                       //last update:8-3-2018  5:00 PM

using namespace std;

//class Login{
//private:




	                  //  default constructore that initialize username and password
	//bool IsLogIn();
	//void choice();         bool type function    (its and outlinr function
    //void male_choice();
    //void female_choice();
//};








//main method

int main() {

	Login l1;                                //created object for the class l1
	bool status = l1.IsLogIn();
	if(!status)
	{
		cout<<"\n\tLog in failed Register First\n"<<endl;

		return 1;
	}
	else
	{

		cout<<"\n\t Welcome "<<l1.username<<" !\n"<<endl;
		male_choice male1;
		female_choice female1;
		choice();
		male1.mchoic();
		female1.fchoice();
		return 0;
}
	return 0;
}

