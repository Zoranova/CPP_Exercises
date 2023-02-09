#pragma once

class Plush
{
    public:
        Plush()
        {
            
        }

        Plush(int ogPrice)
        : price {ogPrice}
        {

        }

        int get_cost() const
        {
            return price;
        }

        void set_cost(int newPrice)
        {
            price = newPrice;
        }
    
    private:
        int price = 10;
};