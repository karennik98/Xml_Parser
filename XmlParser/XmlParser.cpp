#include "pch.h"
#include "Xml.h"
#include <iostream>
#include <string>

int main()
{
	Read xmlFile("Xml.txt");
	xmlFile.Parse();
	xmlFile.getAllTags();
	return 0;
}
