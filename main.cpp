#include <iostream>
#include <string>
#include "Apple.h"
#include "Airpod.h"

using namespace std;

int main(){
    Apple a;
    Apple b("iphone", 132452, "X");
    
    cout<<"a: "<<endl;
    a.print();
    cout<<endl;
    a.set_model("iPad");
    a.set_gen("Generation 2");
    a.set_price(34567);
    cout<<"DISCOUNT PRICE ";
    a.set_price(60000);
    a.print();

    Airpod w;

    w.print();

    return 0;
}