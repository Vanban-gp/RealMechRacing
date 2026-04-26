#pragma once

class car
{
    private:
        double x = 0;
        double y = 0;
        int points = 0;
    public:
        void set_coord()
        {
        }

        void get_coord()
        {
        }
    
};

class static_obj
{
    protected:
        double x;
        double y;
};

class chngng_pnts:static_obj
{
    public:
        void chng_pnts()
        {

        }
};

class ramps:static_obj
{
    public:
        void chng_coord()
        {
        }
};

namespace alg
{

}