#pragma once
#include "report.h"



namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for berry
	/// </summary>

	public ref class berry: public System::Windows::Forms::Form
		
	{
	public:
		
		berry(void)
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
		~berry()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;

	protected:




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(berry::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label1->Location = System::Drawing::Point(116, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(241, 37);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Program Menu";
			// 
			// label2
			// 
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label2->Location = System::Drawing::Point(21, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(168, 53);
			this->label2->TabIndex = 2;
			this->label2->Visible = false;
			this->label2->Click += gcnew System::EventHandler(this, &berry::label2_Click);
			// 
			// label3
			// 
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label3.Image")));
			this->label3->Location = System::Drawing::Point(151, 90);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(167, 53);
			this->label3->TabIndex = 3;
			this->label3->Text = L"\r\n";
			this->label3->Click += gcnew System::EventHandler(this, &berry::label3_Click);
			// 
			// berry
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(465, 212);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"berry";
			this->Text = L"berry";
			this->Load += gcnew System::EventHandler(this, &berry::berry_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void berry_Load(System::Object^  sender, System::EventArgs^  e) {
				// this->reportViewer1->RefreshReport();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				/* String^ constring = L"datasource=localhost;port=3306;username=root;password=babe;";
				 MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase = gcnew MySqlCommand("insert into  lol.clientlog (Client_Name,Log_Time) values('" + this->H->Text + "', now() ) ;", conDatabase);
				 MySqlDataReader^ myReader;
				 try{
					 conDatabase->Open();
					 myReader = cmdDataBase->ExecuteReader();


					 // while (myReader->Read()) {}
				 }
				 catch (Exception^ex){
					 MessageBox::Show(ex->Message);

				 }*/
	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
				/* this->Hide();
				 report^ f3 = gcnew report();
				 f3->ShowDialog();*/
				  String^ constring = L"datasource=localhost;port=3306;username=root;password=babe;";
				 MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from lol.chic;" , conDatabase);
				 MySqlDataReader^ myReader;
				 
					
				

				 
					 conDatabase->Open();
					 // MySqlCommand("insert into  lol.clientlog (Client_Name,Log_Time) values('" + this->H->Text + "', now() ) ;", conDatabase);
					 myReader = cmdDataBase->ExecuteReader();
					 
					 SaveFileDialog;
	}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
}
};
}
