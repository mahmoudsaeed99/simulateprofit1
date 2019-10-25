#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cout<<"what do you want to make order"<<endl;
    cout<<"1- one order unit"<<endl;
    cout<<"2- two order unit"<<endl;
    cin>>x;
    srand(time(0));
    int shortest,profit,holding,demand,sales,s_price=450;
    float prop;
    if(x==1)
    {
        int available=1;
        double p1_average=0;
        for(int i=0; i<5; i++)
        {
            prop=(0 + .1) + (((float) rand()) / (float) RAND_MAX) * (1 - (0 + 0.1));
            if(0.0<prop<=0.2)
            {
                demand=0;
            }
            else if(0.2<prop<=0.6)
            {
                demand=1;
            }
            else if(0.6<prop<=0.8)
            {
                demand=2;
            }
            else if(0.8<prop<=0.9)
            {
                demand=3;
            }
            else if(0.9<prop<=1.0)
            {
                demand=4;
            }
            if(demand>available)
            {
                sales=available;
                shortest=(demand-available)*100;
                profit=(sales*s_price)-shortest;
            }
            else if(available>demand)
            {
                sales=demand;
                holding=(available-demand)*100;
                profit=(sales*s_price)-holding;
                available-=demand;
                available++;
            }
            else if(demand==available)
            {
                sales=demand;
                profit=(sales*s_price);
            }
            p1_average+=profit;
        }
        cout<<"average of profit = "<<p1_average<<"$"<<endl;



    }
    else if(x==2)
    {
        int available=2;
        double p1_average=0;
        for(int i=0; i<500; i++)
        {
            prop=(0 + .1) + (((float) rand()) / (float) RAND_MAX) * (1 - (0 + 0.1));
            if(0.0<prop<=0.2)
            {
                demand=0;
            }
            else if(0.2<prop<=0.6)
            {
                demand=1;
            }
            else if(0.6<prop<=0.8)
            {
                demand=2;
            }
            else if(0.8<prop<=0.9)
            {
                demand=3;
            }
            else if(0.9<prop<=1.0)
            {
                demand=4;
            }
            if(demand>available)
            {
                sales=available;
                shortest=(demand-available)*100;
                profit=(sales*s_price)-shortest;
            }
            else if(available>demand)
            {
                sales=demand;
                holding=(available-demand)*100;
                profit=(sales*s_price)-holding;
                available-=demand;
                available+=2;
            }
            else if(demand==available)
            {
                sales=demand;
                profit=(sales*s_price);
            }
            p1_average+=profit;
        }
        cout<<"average of profit =  "<<p1_average<<endl;



    }
    else
    {
        cout<<"not founded"<<endl;
    }
    return 0;
}
