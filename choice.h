#include <string>
using namespace std;


void choice()
{
    char gender;
    string person;


    gender:
    cout<<"please select your Gender (male or female)"<<endl;
    cin>>gender;

    switch (gender)
{	case 'm':
    person = "male" ;
    break;

    case 'M':
    person = "male";
    break;

    case 'F':
    person = "female";
    break;

    case 'f':
    person ="female";
        break;
        default:
        person = "unknown";
        cout<<"please enter correct gender"<<endl;
        goto gender;
}
cout << person << endl;
}


