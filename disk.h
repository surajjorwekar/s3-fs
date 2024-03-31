#include<iostream>
#include <string>

#include "super_block.h"

class disk
{
	private:
		//super_block		*sb;
	public:
		std::string name;
		super_block *sb;	
		disk();
		~disk();
};
