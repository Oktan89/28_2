#pragma once
#include <thread>
#include <iostream>


class Train
{
    static char s_route;
    char _route;
    std::size_t _travel_time{0};
public:
    Train()
    {
        _route = s_route++;
    }
    void setTravelTime(const std::size_t& travel_time)
    {
        _travel_time = travel_time;
    }
    void operator() ()
    {
        std::cout<<"Train "<<_route<<" is on its way arrival is expected in "<<_travel_time<<" seconds"<<std::endl;
        for(int i = 0; i < _travel_time; ++i)
        {
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }

    }

};

char Train::s_route = 'A';