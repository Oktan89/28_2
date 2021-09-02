#include "station.h"
#include "train.h"

RailwayStation::RailwayStation(int sizeTrain) : _sizeTrain(sizeTrain)
{
    for(int i = 0; i < _sizeTrain; ++i)
    {
        _train.push_back(new Train);
    }
}

RailwayStation::~RailwayStation()
{
    for(auto &train : _train)
        delete train;
}

void RailwayStation::setTravelTime()
{
    if(_train.empty())
    {
        std::cout<<"No train"<<std::endl;
        return;
    }
    int travel_time;
    for(auto train : _train)
    {
        std::cout<<"Enter the time of the train's "<<train->getRoute()<<" journey to the station: ";
        std::cin >> travel_time;
        train->setTravelTime(travel_time);
    }
}