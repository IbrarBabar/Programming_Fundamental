#include <iostream>
#include<vector>
using namespace std;
int main() {
    int item[]={12,34};
    int a=item[1];
    cout<<"The main difference between Array and Vector is Array is static and Vector's size is Dynamic"<<endl;
    cout<<"-------Array-------"<<endl;
    for(int i=0;i<2;i++)
    {
        cout<<"Array index "<<i<<" :: "<<item[i]<<endl;
    }
    cout<<"--------Vectors--------"<<endl;
    std::vector<int> items = {2,7};
    items.push_back(11);
    items.push_back(15);
    int abc=items.size();
    cout<<"--Using Loop Vector indexing"<<endl;
    for(int i=0;i<abc;i++)
    {
        cout<<"Vector index "<<i<<" :: "<<items.at(i)<<endl;
    }
    cout<<"--vector access using direct indexing--"<<endl;

    cout<<"Vector index 0 :: "<<items[0]<<endl;
    cout<<"Vector index 1 :: "<<items[1]<<endl;
    cout<<"Vector index 2 :: "<<items[2]<<endl;
    cout<<"Size of vector :: "<<abc<<endl;

    cout<<"Last index of Vector :: "<<items[items.size()-1]<<endl;

    cout<<"---- After poping last element from vector ----"<<endl;
    items.pop_back();
    int ab=items.size();
    for(int i=0;i<ab;i++)
    {
        cout<<"Vector index "<<i<<" :: "<<items.at(i)<<endl;
    }
    items.push_back(15);
    cout<<endl<<endl<<endl;
    int target =22;
    cout<<"["<<items[0]<<", "<<items[1]<<", "<<items[2]<<", "<<items[3]<<"]"<<endl;
    cout<<"Target = "<<target<<endl;
    for(int i=0;i<items.size();i++)
    {
        for(int j=i+1;j<items.size();j++)
        {
            if(items[i]+items[j] == target)
            {
                items.push_back((i));
                items.push_back((j));
                cout<<"["<<items[i]<<", "<<items[j]<<"]"<<endl;
            }
        }

    }

    
    return 0;
}