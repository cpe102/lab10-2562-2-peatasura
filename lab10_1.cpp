// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;
int main()
{
    int i =1;
    int x;
    string press,gpa;
    cout << "Press Enter 3 times to reveal your future.";
    /*for ( i=0; i<=3; i++)
    {
        getline(cin,press);
       
        cin.ignore();
         i++;
        
    }*/
    while(i<=3)
    {
        getline(cin,press);
        i++;
        //cin.ignore();
        
    }
    if(i=3)
    {
        srand(time(0));

         x = rand()%10;
        if (x==0) gpa="A";
        else if (x==1) gpa ="B+";
        else if (x==2) gpa ="B";
        else if (x==3) gpa ="C+";
        else if (x==4) gpa ="C";
        else if (x==5) gpa ="D+";
        else if (x==6) gpa ="D";
        else if (x==7) gpa ="F";
        else if (x==8) gpa ="W";

    }
    cout << "You will get " << gpa <<" in this 261102";
    return 0;
}