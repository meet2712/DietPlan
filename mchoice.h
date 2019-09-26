using namespace std;
class male_choice{
    public:
int mchoic()
{
     string person;
     int male_age;
    int male_weight;



    agegroup:
if(person=="male")
{


    cout<<"please eneter your age group"<<endl;
    cin>>male_age;
    if(male_age>=70)
    {
        cout<<"You are 70 or above"<<endl;
    }
    else if(male_age>=50)
    {
        cout<<"You are 50 or above"<<endl;
    }
    else if(male_age>=25)
    {
        cout<<"you are 25 or above"<<endl;
    }
    else if(male_age>=10)
    {
        cout<<"you are 10 or above"<<endl;
    }
    else
    {
        cout<<"your have entered wrong option"<<endl;
        goto agegroup;
    }

}

            cout<<"please enter your weight"<<endl;
                        cin>>male_weight;


                        //logic for underweight and overweight for man of different ages......

                        if((male_age>=25 && male_weight<=60) || (male_age>=50 && male_weight<=65) || (male_age>=70 && male_weight<=70) || (male_age>=10 && male_weight<=30 ))
                        {
                            cout<<"You are underweight"<<endl;
                        }
                        else if((male_age>=25 && male_weight>=75) || (male_age>=50 && male_weight>=75) || (male_age>=70 && male_weight>=75) || (male_age>=10 && male_weight>=45 ))
                        {
                            cout<<"you are overweight"<<endl;
                        }
                        else
                        {
                            cout<<"your weight is normal but you need to stay fit"<<endl;
                        }






return 0;
}

};

