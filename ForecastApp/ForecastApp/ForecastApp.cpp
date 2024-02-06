// ForecastApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "ForecastApp.h"

int main()
{
    std::map<std::string, int> foreCastData = {
        {"New York", 12},
        {"Salt Lake City", 21},
        {"Chandler", 24},
        {"Austin", 52},
        {"Philadelphia", 4},
        {"Mumbai", 27},
        {"Delhi", 52},
        {"San Diego", 12},
        {"Los Angeles", 78},
        {"Las Vegas", 89},
        {"Houston", 63},
        {"Phoenix", 7},
        {"Pune", 3},
        {"Bengaluru", 2},
        {"Seattle", 17},
        {"Chicago", 12},
        {"Denver", 16},
        {"Boston", 11},
        {"Miami", 10},
        {"Dallas", 18},
        {"Atlanta", 9},

    };

    std::thread newWorker(RefreshForecast, foreCastData);
    system("pause>nul");
    
}

