#include "FuelGauge.h"

FuelGauge::FuelGauge()
	: fuelLevel(5)
	, logger(std::make_unique<RedLogger>())
{
}

void FuelGauge::DecrementFuelLevel()
{
	--fuelLevel;
	if (fuelLevel < 2)
	{
		logger->Log("Low fuel!");
	}
}
