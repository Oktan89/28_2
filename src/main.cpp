#include <iostream>
#include "train.h"

int main()
{
    Train test;


    test.setTravelTime(3);

    std::thread t(std::ref(test));


    t.join();

}