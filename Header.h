#pragma once
//#include "MyForm.h"
using namespace System;

public ref class Node {
public:
	// ������.   
	String^ First_name;
	Node^ next;
public:
	// ����������� �������� (����) ������ ������������ ������ � �������� ������.
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
		next = nullptr;  // ��� ���� ������ ������.
	}
	// ����������� ToString, ����� � Element'� ��� ���������. 
	virtual String^ ToString() override
	{
		return String::Format("{0}", First_name);
	}
	// ����� ������������ ��������.
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
// � ��� ������ � ����������� � ������.
public ref class My_List
{
	Node^ head;         // ���������� ��������� �������� ������.
public:
	My_List(void)         // ����������� ������ ������� ������ ������.	
	{
		head = nullptr;
	}
	// ������: �������� �������.
	void Add(Node^ new_el);
	// ������ �������: ���������� ������� ������ ��� nullptr.
	// ������� ����� ���� ������: ������������ �������: ������, ���������, ���������, �� ��������.
	Node^ Del();
	// ����������� ��������.
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
