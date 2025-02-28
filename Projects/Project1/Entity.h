#pragma once
#include "Entity.cpp"
#include <String>

class Entity
{
private:
	std::string name;
	int hitPoints;

public:
	Entity();
	Entity(std::string, std::int);

};