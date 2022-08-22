#pragma once
#pragma comment(lib, "Shell32.lib")

#include <iostream>
#include <windows.h>
#include <fstream>
#include <ShellAPI.h>
#include <msclr/marshal.h>
#include <msclr\marshal_cppstd.h>

static std::string toStandardString(System::String^ string);

namespace $safeprojectname$ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ passwordTextBox;
	protected:

	protected:


	private: System::Windows::Forms::Label^ nameLabel;
	private: System::Windows::Forms::Label^ passwordLabel;
	private: System::Windows::Forms::TextBox^ nameTextBox;



	private: System::Windows::Forms::Button^ loginButton;

	private: System::Windows::Forms::Button^ registerButton;
	private: System::Windows::Forms::CheckBox^ rememberMeCheckBox;


	private: System::Windows::Forms::Label^ statusLabel;
	private: System::Windows::Forms::LinkLabel^ creatorLabel;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->passwordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->nameLabel = (gcnew System::Windows::Forms::Label());
			this->passwordLabel = (gcnew System::Windows::Forms::Label());
			this->nameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->loginButton = (gcnew System::Windows::Forms::Button());
			this->registerButton = (gcnew System::Windows::Forms::Button());
			this->rememberMeCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->statusLabel = (gcnew System::Windows::Forms::Label());
			this->creatorLabel = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// passwordTextBox
			// 
			this->passwordTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->passwordTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->passwordTextBox->ForeColor = System::Drawing::Color::White;
			this->passwordTextBox->Location = System::Drawing::Point(116, 85);
			this->passwordTextBox->Name = L"passwordTextBox";
			this->passwordTextBox->Size = System::Drawing::Size(100, 13);
			this->passwordTextBox->TabIndex = 2;
			this->passwordTextBox->UseSystemPasswordChar = true;
			// 
			// nameLabel
			// 
			this->nameLabel->AutoSize = true;
			this->nameLabel->ForeColor = System::Drawing::Color::White;
			this->nameLabel->Location = System::Drawing::Point(54, 55);
			this->nameLabel->Name = L"nameLabel";
			this->nameLabel->Size = System::Drawing::Size(38, 13);
			this->nameLabel->TabIndex = 3;
			this->nameLabel->Text = L"Name:";
			// 
			// passwordLabel
			// 
			this->passwordLabel->AutoSize = true;
			this->passwordLabel->ForeColor = System::Drawing::Color::White;
			this->passwordLabel->Location = System::Drawing::Point(54, 85);
			this->passwordLabel->Name = L"passwordLabel";
			this->passwordLabel->Size = System::Drawing::Size(56, 13);
			this->passwordLabel->TabIndex = 4;
			this->passwordLabel->Text = L"Password:";
			// 
			// nameTextBox
			// 
			this->nameTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->nameTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->nameTextBox->ForeColor = System::Drawing::Color::White;
			this->nameTextBox->Location = System::Drawing::Point(116, 55);
			this->nameTextBox->Name = L"nameTextBox";
			this->nameTextBox->Size = System::Drawing::Size(100, 13);
			this->nameTextBox->TabIndex = 1;
			// 
			// loginButton
			// 
			this->loginButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->loginButton->Cursor = System::Windows::Forms::Cursors::Default;
			this->loginButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->loginButton->ForeColor = System::Drawing::Color::White;
			this->loginButton->Location = System::Drawing::Point(56, 173);
			this->loginButton->Name = L"loginButton";
			this->loginButton->Size = System::Drawing::Size(74, 23);
			this->loginButton->TabIndex = 4;
			this->loginButton->Text = L"Login";
			this->loginButton->UseVisualStyleBackColor = false;
			this->loginButton->Click += gcnew System::EventHandler(this, &MyForm::loginButton_Click);
			// 
			// registerButton
			// 
			this->registerButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->registerButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->registerButton->ForeColor = System::Drawing::Color::White;
			this->registerButton->Location = System::Drawing::Point(141, 173);
			this->registerButton->Name = L"registerButton";
			this->registerButton->Size = System::Drawing::Size(74, 23);
			this->registerButton->TabIndex = 5;
			this->registerButton->Text = L"Register";
			this->registerButton->UseVisualStyleBackColor = false;
			this->registerButton->Click += gcnew System::EventHandler(this, &MyForm::registerButton_Click);
			// 
			// rememberMeCheckBox
			// 
			this->rememberMeCheckBox->AutoSize = true;
			this->rememberMeCheckBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->rememberMeCheckBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->rememberMeCheckBox->ForeColor = System::Drawing::Color::White;
			this->rememberMeCheckBox->Location = System::Drawing::Point(59, 117);
			this->rememberMeCheckBox->Name = L"rememberMeCheckBox";
			this->rememberMeCheckBox->Size = System::Drawing::Size(91, 17);
			this->rememberMeCheckBox->TabIndex = 3;
			this->rememberMeCheckBox->Text = L"Remember me";
			this->rememberMeCheckBox->UseVisualStyleBackColor = false;
			// 
			// statusLabel
			// 
			this->statusLabel->AutoSize = true;
			this->statusLabel->ForeColor = System::Drawing::Color::White;
			this->statusLabel->Location = System::Drawing::Point(56, 147);
			this->statusLabel->Name = L"statusLabel";
			this->statusLabel->Size = System::Drawing::Size(10, 13);
			this->statusLabel->TabIndex = 9;
			this->statusLabel->Text = L"-";
			// 
			// creatorLabel
			// 
			this->creatorLabel->AutoSize = true;
			this->creatorLabel->LinkColor = System::Drawing::Color::Silver;
			this->creatorLabel->Location = System::Drawing::Point(155, 246);
			this->creatorLabel->Name = L"creatorLabel";
			this->creatorLabel->Size = System::Drawing::Size(116, 13);
			this->creatorLabel->TabIndex = 6;
			this->creatorLabel->TabStop = true;
			this->creatorLabel->Text = L"Developed by Complex";
			this->creatorLabel->VisitedLinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->creatorLabel->Click += gcnew System::EventHandler(this, &MyForm::linkLabel1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->ClientSize = System::Drawing::Size(283, 268);
			this->Controls->Add(this->creatorLabel);
			this->Controls->Add(this->statusLabel);
			this->Controls->Add(this->rememberMeCheckBox);
			this->Controls->Add(this->registerButton);
			this->Controls->Add(this->loginButton);
			this->Controls->Add(this->nameTextBox);
			this->Controls->Add(this->passwordLabel);
			this->Controls->Add(this->nameLabel);
			this->Controls->Add(this->passwordTextBox);
			this->HelpButton = true;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->Text = L"Inventur";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void linkLabel1_Click(System::Object^ sender, System::EventArgs^ e) {


		AllocConsole();
		freopen("CONIN$", "r", stdin);
		freopen("CONOUT$", "w", stdout);

		std::cout << "Value Printer: \n";

		//ShellExecute(NULL, L"open", L"https://github.com/BetaIRL", NULL, NULL, SW_SHOWNORMAL);
	}
private: System::Void registerButton_Click(System::Object^ sender, System::EventArgs^ e) {

	std::ofstream data;
	data.open("data.complex");
	String^ name = nameTextBox->Text;
	String^ password = passwordTextBox->Text;

	std::string cName = msclr::interop::marshal_as<std::string>(name);
	std::string cPassword = msclr::interop::marshal_as<std::string>(password);

	
	data << cName << std::endl;
	data << cPassword << std::endl;
	data.close();
	
	if (data.fail()) {
		statusLabel->Text = "Error!";
		statusLabel->ForeColor = Color::Red;
	}
	else {
		statusLabel->Text = "Success!";
		statusLabel->ForeColor = Color::Green;
	}

	nameTextBox->Clear();
	passwordTextBox->Clear();

}
private: System::Void loginButton_Click(System::Object^ sender, System::EventArgs^ e) {

	std::ifstream login("data.complex");

	if (login.good())
	{
		statusLabel->Text = "Available!";
		statusLabel->ForeColor = Color::Green;
		std::string name,password;

		std::getline(login, name);
		std::getline(login, password);



		std::cout << name << std::endl;
		std::cout << password << std::endl;


		String^ cName = gcnew String(name.c_str());
		nameTextBox->Text = cName;

		String^ cPassword = gcnew String(password.c_str());
		passwordTextBox->Text = cPassword;


	}
	else
	{
		statusLabel->Text = "Unavailable!";
		statusLabel->ForeColor = Color::Red;
	}

}
};
}
