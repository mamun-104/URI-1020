#include<iostream>
using namespace std;

int main()
{
    int N,years=0,months=0,days=0;
    cin>>N;

        if (N>=365)
        {

            years = N/365;
            N = N - (365*years);
        }
        if(N>=30)
        {

            months = N/30;
            N = N - (30*months);
        }

        days = N;

    cout << years<<" ano(s)"<<endl;
    cout << months<<" mes(es)"<<endl;
    cout << days<<" dia(s)"<<endl;


    return 0;
}

