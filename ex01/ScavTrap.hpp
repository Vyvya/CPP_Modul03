#ifndef ScavTrap_HPP
# define ScavTrap_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"


class ScavTrap: public ClapTrap {

	public:

		ScavTrap();
		ScavTrap( std::string name );
		ScavTrap( const ScavTrap &other);
		~ScavTrap();
		ScavTrap &operator=( const ScavTrap &other );


		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		void guardGate();
};

#endif
