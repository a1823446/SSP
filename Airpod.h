#ifndef AIRPOD_H
#define AIRPOD_H

#include <iostream>
#include <string>
#include "Apple.h"
using namespace std;

class Airpod: public Apple{
    private:
        Apple airpod;

    public:
        void print(){
            cout<<airpod.get_model();
        }    

};
#endif