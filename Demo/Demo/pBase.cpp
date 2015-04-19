#include "pBase.h"
float pCalc::Sub(int x, int y)
{
	Memory = x - y;
	return Memory;
}
float pCalc::Add(int x, int y)
{
	Memory = x + y;
	return Memory;
}
float pCalc::Multi(int x, int y)
{
	Memory = x * y;
	return Memory;
}
float pCalc::Div(int x, int y)
{
	Memory = x / y;
	return Memory;
}