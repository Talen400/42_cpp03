#include "ClapTrap.hpp"

ClapTrap::ClapTrap() 
{
	std::cout << "ClapTrap '" << name << "' is clap!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	name = other.name;
	hitPoint = other.hitPoint;
	energyPoint = other.energyPoint;
	attackDamage = other.attackDamage;
	std::cout << "Claptrap '" << name << "' is clap from other!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other) {
		name = other.name;
		hitPoint = other.hitPoint;
		energyPoint = other.energyPoint;
		attackDamage = other.attackDamage;
	}
	std::cout << "ClapTrap '" << name << "' is clapted!" << std::endl;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Claptrap '" << name << "' is trapped :<" << std::endl;
}
