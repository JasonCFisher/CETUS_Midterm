#include <string>
#include "CETUS_Room.hpp"
#include "CETUS_World.hpp"

#ifndef CETUS_ITEM_HPP
#define CETUS_ITEM_HPP

class Item {
	
	private:
	
		string	Name;
		string	Description;
		int		Power;
		int		Healing;
		bool	weapon;
		bool	roomFeature;
		bool	collectible;
		
	public:
	
		Item(string Name, string Description, int Power, int Healing, bool weapon);
		~Item();
		int damageItem(int damage);
		string getName();
		string getDescription();
		int getPower();
		int getHealing();
		bool getWeapon();
		bool getRoomFeature();
		
	
};
#endif