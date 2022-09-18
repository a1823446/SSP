#ifndef APPLE_H
#define APPLE_H

#include <iostream>
#include <string>
using namespace std;

class Apple{
    protected:
        string model;
        string generation;
        int price;
    public:
        Apple();
        Apple(string m, int p, string gen);
        void set_model(string m);
        void set_gen(string gen);
        void set_price(int p);
        string get_model();
        string get_generation();
        int get_price();
        void print();
};

#endif