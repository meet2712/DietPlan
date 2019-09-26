#include <string>
using namespace std;
class Login{
    public:

	string username,password; //variable that holds username and password
	Login()
	{
		username = "\0";
		password = "\0";
	};
bool IsLogIn()
{
	string ch_username ="viren",ch_password = "viren1801";
	cout<<"ENTER YOUR user name ::\t"<<endl;
	cin>>username;
	cout<<"Enter your password :: \t"<<endl;
	cin>>password;

	if(username == ch_username && password == ch_password) //main logic
	{
		return true;
	}
	else
	{
		return false;
	}


}
};
