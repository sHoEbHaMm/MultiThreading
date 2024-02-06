#pragma once
#include <iostream>
#include <string>
#include <map>
#include <thread>
#include <chrono>
using namespace std::chrono_literals;

void RefreshForecast(std::map<std::string, int> forecastData)
{
	while (true)
	{
		for (auto& data : forecastData)
		{
			data.second++;
			std::cout << data.first << " - " << data.second << std::endl;
		}
		std::this_thread::sleep_for(2000ms);
	}
}
