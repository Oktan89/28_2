#pragma once
#include <vector>
#include <iostream>
#include <thread>
#include <mutex>

class Train;

class RailwayStation
{
    int _sizeTrain;
    std::vector<Train *> _train;
    std::mutex station;
    void dispatcher(std::string message);
public:
    RailwayStation(int sizeTrain = 0);
    ~RailwayStation();
    void setTravelTime();
};