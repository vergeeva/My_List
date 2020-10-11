#include "Header.h"

// Add - новый элемент в голове списка. Метод получает элемент (данные).
void My_List::Add(Node^ new_el)
{
	Node^ old_el;
	old_el = head;                // Запоминает голову.
	head = new_el;                // Делает новый головным.
	new_el->next = old_el;        // Перебрасывает указатель на предыдущий.
}

// Del - Извлечение из списка головного элемента.  
Node^ My_List::Del()		 // Извлекается головной элемент.
{
	Node^ el = nullptr;
	// Проверка: а вдруг там ничего нет?
	if (head == nullptr)
		return head;
	else
	{
		el = head;                // Запоминает элемент из головы списка.
		head = head->next;        // head показывает на следующий.
		return el;                // Там его присвоить чему-то.
	}
}

// Look - просмотр в Grid'е
void My_List::Look(System::Windows::Forms::DataGridView^ DGV)
{
	// Смысл - обновить Grid. Как-то нет необходимости писать интерфейс.
	DGV->RowCount = 1;
	Node^ el;      // Рабочий указатель для просмотра.
	array <String^>^ Str = gcnew array <String^>(2);
	for (el = head; el != nullptr; el = el->next)
	{
		Str[0] = el->Name;       // el->First_name;
		DGV->Rows->Add(Str);
	}
}

void My_List::Look(System::Windows::Forms::ListBox^ LB)
{
	LB->Items->Clear();
	Node^ el;      // Рабочий указатель для просмотра.
	array <String^>^ Str = gcnew array <String^>(2);

	for (el = head; el != nullptr; el = el->next)
	{
		LB->Items->Add(el->Name);
	}
}


Node^ My_List::Find(Node^ What)
{
	Node^ el;
	for (el = head; el != nullptr; el = el->next)
		if (el == What)
			return el;
	return nullptr;
}
bool My_List::Find_and_Del(Node^ What)
{
	Node^ S = Find(What);
	Node^ S1;
	if (S != nullptr)
	{
		if (head == What)
		{
			head = head->next;
			return true;
		}
		else
		{
			for (S1 = head; S1 != nullptr; S1 = S1->next)
			{
				if (S1->next == What)
				{
					S1->next = S1->next->next;
					return true;
				}
			}
		}
	}
	else return false;
}
My_List^ My_List::New_List(Node^ What) {
	My_List^ T = gcnew My_List();
	Node^ el;
	for (el = head; el != nullptr; el = el->next)
		if (el == What)
		{
			T->Add(el);
		};
	return  T;
}
int My_List::FindWord(Node^ What) {
	String^ a = gcnew String("");
	String^ b = gcnew String("");
	String^ c = gcnew String("");
	int k = 0;
	Node^ el;
	a = What->ToString();
	wchar_t Wc = a[0];

	for (el = head; el != nullptr; el = el->next)
	{
		b = el->Name->ToString();
		if (((Wc == b[0]) && (Wc == c[0])) || ((Wc == b[0]) || (Wc == c[0])))
			k = k + 1;
	}
	return k;
}

Node^ My_List::Del_first()
{
	Node^ el;
	for (el = head; el != nullptr; el = el->next)
	{
		if (el->next == nullptr)
		{
			this->Find_and_Del(el);
			return el;
		}
	}
	return nullptr;
}

Node^ My_List::Del_second()
{
	Node^ el;
	for (el = head; el != nullptr; el = el->next)
	{
		if (el->next->next == nullptr)
		{
			this->Find_and_Del(el);
			return el;
		}
	}
	return nullptr;
}

//My_List^ My_List::Find_and_replace(Node^ What, Node^ Who)
//{
//	Node^ el;
//	String^ b = gcnew String("");
//	String^ c = gcnew String("");
//	c = What->Name->ToString();
//	My_List^ Tmp = gcnew My_List();
//	if (What->operator==(Who))
//	{
//		return this;
//	}
//	for (el = head; el != nullptr; el = el->next)
//	{
//		b = el->Name->ToString();
//		if (b == c)
//		{
//			el->First_name = Who->First_name;
//			Tmp->Add(el);
//		}
//		else
//		{
//			Tmp->Add(el);
//		}
//	}
//	return Tmp;
//}
