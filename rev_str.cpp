#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string* str=new string;
    cout<<"Kindly Enter a string:"<<endl;
    cin>>*str;
   reverse(str->begin(), str->end());
   cout<<"The reversed string is: "<<*str<<endl;
   delete str;
   return 0;
}
