#pragma once
#include "windows.h"
#include "berry.h"
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

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
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;




	private: System::Windows::Forms::TextBox^  H;



	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  B;


	public: System::Windows::Forms::Label^  label4;
	private:




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->H = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->B = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(240, 364);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(103, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(213, 212);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"NAME:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(181, 255);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"PASSWORD:";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(260, 248);
			this->textBox1->Name = L"textBox1";
			this->textBox1->PasswordChar = '*';
			this->textBox1->Size = System::Drawing::Size(135, 20);
			this->textBox1->TabIndex = 4;
			// 
			// H
			// 
			this->H->Location = System::Drawing::Point(260, 209);
			this->H->Multiline = true;
			this->H->Name = L"H";
			this->H->Size = System::Drawing::Size(135, 18);
			this->H->TabIndex = 5;
			this->H->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->Location = System::Drawing::Point(193, 290);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 15);
			this->label3->TabIndex = 8;
			this->label3->Text = L"BUREAU:";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// B
			// 
			this->B->Location = System::Drawing::Point(260, 287);
			this->B->Name = L"B";
			this->B->Size = System::Drawing::Size(135, 20);
			this->B->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::MidnightBlue;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Bold", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->label4->Location = System::Drawing::Point(-1, 0);
			this->label4->Margin = System::Windows::Forms::Padding(0, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label4->Size = System::Drawing::Size(604, 105);
			this->label4->TabIndex = 12;
			this->label4->Text = L" MFA TIME LOGIN";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(599, 499);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->B);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->H);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Save";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 String^ constring = L"datasource=localhost;port=3306;username=root;password=babe;";
				 MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from lol.chic where name='" + this->H->Text + "' and password='" + this->textBox1->Text + "' and bureau ='" + this->B->Text + "';" , conDatabase);
				 MySqlCommand^ cmdDataBase1 = gcnew MySqlCommand("insert into  lol.clientlog (Client_Name,Log_Time) values('" + this->H->Text + "', now() ) ;", conDatabase);


				 
				 MySqlDataReader^ myReader;
			
				// MySqlDataReader^ myReader1;
				// MySqlConnection^ conDatabase1 = gcnew MySqlConnection(constring);

				 
				 
					
				

				 try{
					 conDatabase->Open();
					 // MySqlCommand("insert into  lol.clientlog (Client_Name,Log_Time) values('" + this->H->Text + "', now() ) ;", conDatabase);
					 myReader = cmdDataBase->ExecuteReader();
					 
					// myReader1 = cmdDataBase1->ExecuteReader();
					 
					// gcnew MySqlCommand("insert into  lol.clientlog (Client_Name,Log_Time) values('" + this->H->Text + "', now() ) ;", conDatabase);
					// myReader1;
					 int count = 0;
					  
					 while (myReader->Read())
					 {
						 
						 count = count + 1;
						 
					 }
					 if (count == 1)
					 {

						 MessageBox::Show("Login successful");






						 // MySqlCommand^ cmdDataBase1 = gcnew MySqlCommand("insert into  lol.clientlog (Client_Name,Log_Time) values('" + this->H->Text + "', now() ) ;", conDatabase);

						 myReader->Close();
						 conDatabase->Close();
						 MySqlDataReader^ myReader1;
						

							 conDatabase->Open();
							 myReader1 = cmdDataBase1->ExecuteReader();
							 // myReader1->Read();
						 

							 this->Hide();
							 berry^ f2 = gcnew berry();
							 f2->ShowDialog();
					 }

					 

					 else if (count > 1)
					 {
						 MessageBox::Show("Duplicate username or password......Access Denied ");
					 }
					 else
					 {
						 MessageBox::Show(" username or password is not correct ...Please Try Again");
					 }

					
					

				 }
				 catch (Exception^ex){
					 MessageBox::Show(ex->Message);
					
				 }

	}


	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	};

	private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
				
				 String^ constring = L"datasource=localhost;port=3306;username=root;password=babe;";
				 MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase = gcnew MySqlCommand("insert into  lol.clientlog (Client_Name,Log_Time) values('" + this->H->Text + "', now() ) ;", conDatabase);
				 MySqlDataReader^ myReader;
				 try{
					 conDatabase->Open();
					 myReader = cmdDataBase->ExecuteReader();


				 }
				 catch (Exception^ex){
					 MessageBox::Show(ex->Message);

				 }

	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
				  
	}
private: System::Void label1_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};


	

#include "MyForm.h"; 
	; using namespace System;
	using namespace System::Windows::Forms;


	[STAThread]
	void main(array<String^>^ args)
	{
		Application::EnableVisualStyles();
		Application::SetCompatibleTextRenderingDefault(false);

		Project1::MyForm form;
		Application::Run(%form);
	}

}