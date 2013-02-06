#include "tinyxml.h"
#include "tinystr.h"

#include <iostream>

using namespace std;

int main()
{
	TiXmlDocument *myDocument = new TiXmlDocument("info.xml");
	myDocument->LoadFile();


	TiXmlElement *RootElement = myDocument->RootElement();
	cout<<RootElement->Value()<<endl;



	TiXmlElement *FirstPerson = RootElement->FirstChildElement();
	cout<<FirstPerson->Value()<<endl;


	TiXmlElement *NameElement = FirstPerson->FirstChildElement();
	TiXmlElement *AgeElement = NameElement->NextSiblingElement();

	TiXmlAttribute *IDAttribute = FirstPerson->FirstAttribute();


	cout<<NameElement->FirstChild()->Value()<<endl;
	cout<<AgeElement->FirstChild()->Value()<<endl;
	cout<<IDAttribute->Value()<<endl;


	return 0;
}

