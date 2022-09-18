#include <iostream>
#include <string>

using namespace std;

int main(){
    int a = 5;
    int b[] = {3,4,6,3,2,5};
    string name = "SHYAM";

    cout<<a<<" "<<endl;
    
    for (int i=0; i<5;i++) {
        cout<<b[i]<<" ";
    }

    cout<<name<<endl;

    cout<<endl;
    cout<<"ENTER YOUR NAME"<<endl;
    string input;
    cin>>input;
    cout<<endl;
    cout<<"THE NAME IS "<<input;


    return 0;
}