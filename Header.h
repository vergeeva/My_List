#pragma once
//#include "MyForm.h"
using namespace System;

public ref class Node {
public:
	// Данные.   
	String^ First_name;
	Node^ next;
public:
	// Конструктор элемента (узла) должен распределять память и получать данные.
	Node()
	{
		First_name = gcnew String("");	// name
		next = nullptr;
	}
	Node(String^ A)
	{
		First_name = gcnew String(A);
		next = nullptr;
	}
	Node(Node^ Tmp)
	{
		First_name = gcnew String(Tmp->First_name);
		next = nullptr;  // Вот тоже важный момент.
	}
	// Перегрузить ToString, чтобы у Element'а был интерфейс. 
	virtual String^ ToString() override
	{
		return String::Format("{0}", First_name);
	}
	// Можно использовать свойства.
	property String^ Name {
		String^ get() {
			return First_name;
		}
	};

	bool operator == (Node^ &B) {
		return (this->First_name == B->First_name);
	}

	Node^ operator = (Node^ B) {
		this->First_name = B->First_name;

		return this;
	}

};
// А это список с добавлением в голову.
public ref class My_List
{
	Node^ head;         // Дескриптор головного элемента списка.
public:
	My_List(void)         // Конструктор списка создает пустой список.	
	{
		head = nullptr;
	}
	// Методы: добавить элемент.
	void Add(Node^ new_el);
	// Изъять элемент: возвращает элемент списка или nullptr.
	// Изъятие может быть разное: определяется задачей: первый, последний, указанный, по значению.
	Node^ Del();
	// Просмотреть элементы.
	void Look(System::Windows::Forms::DataGridView^);
	void Look(System::Windows::Forms::ListBox^);
	Node^ Find(Node^ a);
	bool Find_and_Del(Node^ What);
	My_List^  My_List::New_List(Node^ What);
	int My_List::FindWord(Node^ What);
	Node^ Del_first();
	Node^ Del_second();
	//My_List^ Find_and_replace(Node^ What, Node^ Who);
};
