#pragma once
#include "Header.h"

namespace List {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			L = gcnew My_List();
			//
			//TODO: добавьте код конструктора
			//
		}
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button5;
	public:

	public:

	public:

	public:

	public:

	public:

	public:

	protected:
		My_List^ L;
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:




	private: System::Windows::Forms::Button^ button2;


	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button3;









	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::GroupBox^ groupBox1;

	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::GroupBox^ groupBox3;




	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(38, 53);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(206, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Найти";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(38, 25);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(206, 22);
			this->textBox3->TabIndex = 5;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(38, 21);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(206, 28);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Найти и удалить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(94, 296);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(206, 28);
			this->button6->TabIndex = 14;
			this->button6->Text = L"Удалить второй элемент";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(94, 330);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(206, 28);
			this->button7->TabIndex = 15;
			this->button7->Text = L"Удалить первый элемент";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(20, 44);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(148, 22);
			this->textBox6->TabIndex = 16;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(17, 24);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 17);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Заменить:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(17, 69);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(30, 17);
			this->label3->TabIndex = 18;
			this->label3->Text = L"На:";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(20, 88);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(148, 22);
			this->textBox7->TabIndex = 19;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(174, 59);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(95, 37);
			this->button8->TabIndex = 20;
			this->button8->Text = L"Заменить";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button8);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->groupBox3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Location = System::Drawing::Point(392, 14);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(287, 117);
			this->groupBox1->TabIndex = 21;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Замена";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->textBox8);
			this->groupBox3->Controls->Add(this->button3);
			this->groupBox3->Location = System::Drawing::Point(0, 116);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(287, 88);
			this->groupBox3->TabIndex = 24;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Найти и удалить";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(38, 53);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(206, 22);
			this->textBox8->TabIndex = 23;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(26, 14);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(332, 260);
			this->listBox1->TabIndex = 27;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(64, 33);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(167, 22);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(63, 61);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(168, 25);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->button1);
			this->groupBox4->Controls->Add(this->textBox1);
			this->groupBox4->Location = System::Drawing::Point(392, 151);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(287, 94);
			this->groupBox4->TabIndex = 25;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Добавление в список";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Location = System::Drawing::Point(392, 251);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(287, 124);
			this->groupBox2->TabIndex = 28;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Поиск";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(38, 82);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(206, 25);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Найти и удалить";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(711, 384);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Список";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion


private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	Node^ El;
	El = gcnew Node(this->textBox3->Text);

	if (L->Find(El) != nullptr)
	{
		MessageBox::Show("Элемент найден в списке", "Оповещение");
		this->textBox3->Text = L->Find(El)->ToString();
	}
	else 		MessageBox::Show("Элемент не найден в списке", "Оповещение");
	
}

private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {

	Node^ El;
	El = gcnew Node(this->textBox1->Text);

	L->Add(El);
	L->Look(listBox1);
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Node^ El;
	El = gcnew Node(this->textBox8->Text);
	if (L->Find_and_Del(El) == true)
	{
		L->Look(listBox1);
	}
}

private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {

	Node ^What = gcnew Node(this->textBox6->Text);
	Node^ Who = gcnew Node(this->textBox7->Text);
	//L = L->Find_and_replace(What, Who);
	if (L->Find_and_Del(What)) L->Add(Who);
	L->Look(listBox1);
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	L->Del_first();
	L->Look(listBox1);
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	L->Del_second();
	L->Look(listBox1);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

	if (textBox3->Text != "")
	{
		Node^ El;
		El = gcnew Node(this->textBox3->Text);
		if (L->Find_and_Del(El))
		{
			L->Look(listBox1);
		}
		else MessageBox::Show("Элемент не найден в списке", "Оповещение");
	}
	
}
};
}
