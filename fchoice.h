using namespace std;
class female_choice{
    public:

void fchoice()
   {
    string person;
    int female_age;
    string option;
    int pregnantf_weight;
    int normalf_weight;

     if(person=="female")
        {
            cout<<"Are you in a pregnancy period"<<endl;
            cin>>option;
            if (option=="yes" || option=="YES" || option=="Yes")
            {
                cout<<"your course is pregnancy one"<<endl;

                pregnantfage:

                cout<<"please eneter your age group"<<endl;
                cin>>female_age;
                if(female_age<=70)
                {
                    cout<<"You are 70 or less than that"<<endl;
                }
                else if(female_age>=50)
                {
                    cout<<"You are 50 or above"<<endl;
                }
                else if(female_age>=18)
                {
                    cout<<"you are 18 or above"<<endl;
                }

                else
                {
                    cout<<"your have entered wrong option"<<endl;
                    goto pregnantfage;
                }



                cout<<"please enter your weight"<<endl;
                        cin>>pregnantf_weight;


                        //logic for underweight and overweight for pregnant woman......

                        if((female_age>=18 && pregnantf_weight<=45) || (female_age>=50 && pregnantf_weight<=60) || (female_age<=70 && pregnantf_weight<=60 ))
                        {
                            cout<<"You are underweight"<<endl;
                        }
                        else if((female_age>=18 && pregnantf_weight>=55) || (female_age>=50 && pregnantf_weight>=67) || (female_age<=70 && normalf_weight>=67))
                        {
                            cout<<"you are overweight"<<endl;
                        }





            }
                else
                {
                    cout<<"you are a normal woman"<<endl;

                    normalfage:

                    cout<<"please eneter your age group"<<endl;
                    cin>>female_age;
                    if(female_age>=70)
                    {
                        cout<<"You are 70 or above"<<endl;
                    }
                    else if(female_age>=50)
                    {
                        cout<<"You are 50 or above"<<endl;
                    }
                    else if(female_age>=25)
                    {
                        cout<<"you are 25 or above"<<endl;
                    }
                     else if(female_age>=10)
                    {
                        cout<<"you are 10 or above"<<endl;
                    }

                    else
                    {
                        cout<<"your have entered wrong option"<<endl;
                        goto normalfage;
                    }


                        //here i am asking for the weight option for preganant female and logic for overweight,low weight and normal weight


                        cout<<"please enter your weight"<<endl;
                        cin>>normalf_weight;


                        //logic for underweight and overweight for normal woman......

                        if((female_age>=25 && normalf_weight<=55) || (female_age>=50 && normalf_weight<=60) || (female_age>=70 && normalf_weight<=60) || (female_age>=10 && normalf_weight<=30))
                        {
                            cout<<"You are underweight"<<endl;
                        }
                        else if((female_age>=25 && normalf_weight>=75) || (female_age>=50 && normalf_weight>=65) || (female_age>=70 && normalf_weight>=65) || (female_age>=10 && normalf_weight>=45) )
                        {
                            cout<<"you are overweight"<<endl;
                        }
                 }
            }
   }
};

