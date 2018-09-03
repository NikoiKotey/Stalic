#include <iostream>

using namespace std;

int main()
{
    double grade;
    cout <<"please enter your grade "<< endl;
    cin >> grade;
    if((grade >= 80) && (grade <=100))
    {
     cout<<" then grade you attained is an A"<<endl;
    }
    else if  ( (grade >= 75 ) && (grade <= 79) )

    {
     cout<<"then grade you attained is a B+"<<endl;
    }
    else if ( (grade >= 70) && (grade <=74) )
    {
        cout<< "then grade you attained is a B"<<endl;
    }
    else if ( (grade >=65) && (grade <=69) )
    {
        cout<< "the grade you attained is a C+"<<endl;
    }
    else if ( (grade >=60) && (grade <=64) )
    {
        cout<< "then grade you attained is a C"<<endl;
    }
    else if ( (grade >=55) && (grade <=59) )
    {
        cout<< "then grade you attained is a D+"<<endl;
    }
    else if ( (grade >=50) && (grade <=54) )
    {
        cout<< "then grade you attained is a D"<<endl;
    }
    else if ( (grade >=40) && (grade <=49) )
    {
        cout<< "then grade you attained is a E"<<endl;
    }
    else if ( (grade >=0) && (grade <=39) )
    {
        cout<< "then grade you attained is an F"<<endl;
    }

return 0;
}

