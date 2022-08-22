#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


ref class User
{
private:
	String^ name;
	int id;


public:
	User();

	void setName(String^ name);
	void setId(int id);

	String^ getName(void);
	int getId(void);


};

