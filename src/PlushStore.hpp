#pragma once
#include <string>

using namespace std;

class PlushStore
{
    public:
        PlushStore(string nameShop)
        : name { nameShop }
        {

        }

        string get_name() const
        {
            return name;
        }
    
    private:
        const string name;
};