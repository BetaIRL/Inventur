#include "User.h"


User::User() {


}

void User::setName(String^ name)
{
	this->name = name;

}

void User::setId(int id)
{
	this->id = id;

}

String^ User::getName(void)
{
	return name;

}

int User::getId(void)
{
	return id;

}