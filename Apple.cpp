#include <iostream>
#include <string>
#include "Apple.h"

using namespace std;

Apple::Apple()
{
    model = "Apple Product";
    generation = "Gen 0";
    price = 80000;
}
Apple::Apple(string m, int p, string gen)
{
    model = m;
    price = p;
    generation = gen;
}

void Apple::set_model(string m)
{
    model = m;
}

void Apple::set_gen(string gen)
{
    generation = gen;
}

void Apple::set_price(int p)
{
    price = p;
}

string Apple::get_model()
{
    return model;
}

string Apple::get_generation()
{
    return generation;
}

int Apple::get_price()
{
    return price;
}

void Apple::print()
{
    cout << "Model - " << model << endl;
    cout << "Generation - " << generation << endl;
    cout << "Price - " << price << endl;
}
