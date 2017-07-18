#pragma once

#include<time.h>
#include <cstdlib>
#include <Windows.h>
#include <iostream>
namespace SimonGame {
	int seq[10] = {};
	char user_seq[10] = {};
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		int nextlevel=3;
		int counter = 0;
		int label = 2;
	private: System::Windows::Forms::Label^  label2;
			 int score = 0;
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		void flash(void){
			srand(time(NULL));

			int x;
			for (int i = 0; i < nextlevel; i++){
				x = rand() % 4;

				if (x == 0){

					button1->BackColor = System::Drawing::Color::Blue;
					Sleep(500);
					Refresh();
					button1->BackColor = System::Drawing::Color::Red;

				seq[i] =  1 ;
				}

				else if (x == 1){
					button2->BackColor = System::Drawing::Color::Blue;
					Sleep(500);
					Refresh();
					button2->BackColor = System::Drawing::Color::Aqua;
					Sleep(500);
					Refresh();
					seq[i] =  2 ; 
				}
				else 	if (x == 2){
					button3->BackColor = System::Drawing::Color::Blue;
					Sleep(500);
					Refresh();
					button3->BackColor = System::Drawing::Color::LimeGreen;
					seq[i] =  3 ;
				}
				else 	if (x == 3){
					button4->BackColor = System::Drawing::Color::Blue;
					Sleep(500);
					Refresh();
					button4->BackColor = System::Drawing::Color::Yellow;
					seq[i] =  4;
				}
				Sleep(400);
				Refresh();

			}


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
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Label^  label1;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->Location = System::Drawing::Point(64, 65);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(135, 67);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Aqua;
			this->button2->Location = System::Drawing::Point(255, 65);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(132, 67);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::LimeGreen;
			this->button3->Location = System::Drawing::Point(64, 179);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(135, 72);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Yellow;
			this->button4->Location = System::Drawing::Point(255, 179);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(132, 72);
			this->button4->TabIndex = 3;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(64, 314);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(132, 58);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Start";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(287, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 5;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(269, 314);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(118, 58);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Close";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(59, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 26);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Level 1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(224, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 19);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Score";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(436, 422);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
#pragma endregion
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		counter = 0;
		flash();
		//textBox1->Text = System::Convert::ToString(seq[2]);
		
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		user_seq[counter] = 1;//btn 1 when clicked counter times
		counter++;
	//	textBox1->Text = System::Convert::ToString(counter);
		if (counter == nextlevel){
			compare();

			counter = 0;
		}

	
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		user_seq[counter] = 2;//btn 2 when clicked 
		counter++;
		//textBox1->Text = System::Convert::ToString(counter);
		if (counter == nextlevel){
			compare();
		
			counter = 0;

		}
	}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	user_seq[counter] = 3;
	counter++;
	//textBox1->Text = System::Convert::ToString(counter);
	if (counter == nextlevel){
				compare();
				counter = 0;
	}

}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	user_seq[counter] = 4;
	counter++;
	//textBox1->Text = System::Convert::ToString(counter);
	if (counter == nextlevel){
			compare();
			counter = 0;
	}
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	
}

		 void compare(void)
		 {
			 int check = 0;
			 for (int i = 0; i < nextlevel; i++)
			 {
				 if (seq[i] == user_seq[i])
				 {
					 check = 1;
					 score = score + 5;
					 textBox1->Text = System::Convert::ToString(score);

				 }
				 else if (seq[i] != user_seq[i])
				 {
					 check = 0;
					 break;
				 }
			 }
		 
			 if (check==1)
			 {
				 MessageBox::Show("Hurray!! You Won congratulation");
				 MessageBoxButtons::OKCancel,
					 MessageBoxIcon::Asterisk;
				 nextlevel++;
				 this->label1->Text = "Level "+ System::Convert::ToString(label);
				 label++;
				 //score = score + 20;
				 //textBox1->Text = System::Convert::ToString(score);
			 }
			 else {
				 MessageBox::Show("You loose!!Try again");


				 MessageBoxButtons::OKCancel,
					 MessageBoxIcon::Asterisk;

				 }
		 }
	
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
