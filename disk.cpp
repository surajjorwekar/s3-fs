#include "disk.h"
#include <fstream>

disk::disk()
{
	sb = new super_block("50");
}

disk::~disk()
{
}
