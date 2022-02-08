/**
 * @file Assignment1_Q3_Vector.cpp
 * @author Akshunna Prakash (fastmixes291@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-01-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */
// header files
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main()
{
    
    vector<int> v1{12,13,14,15,16,17,18,19,20};
    int count=1;
    int total=0;
    
    cout<<"Vector elements are: "<<endl;
    for (int x : v1)
    {  
        cout << x << " ";
        count++;
    }
    cout << endl;

    float sum = std::accumulate(v1.begin(), v1.end(), 0.0);
    float mean;
    mean = sum/count;
    cout<<"Mean: "<<mean<<endl;

    cout<<"Vector elements less than mean value are: "<<endl;
    for (int y : v1)
    {   
        if(y <= mean)
        {
            cout << y << " ";
            total++;
        }
    }
    cout<<"\n";
    cout<<"Number of vector element that are lesser than than the mean: "<<total<<endl;
}