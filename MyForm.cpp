#include "MyForm.h"
#include "Header.h"

using namespace List;

[STAThreadAttribute]
int main(array<System::String^>^ args)
{
	// ��������� ���������� �������� Windows XP �� �������� �����-���� ��������� ����������
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// �������� �������� ���� � ��� ������
	Application::Run(gcnew MyForm());
	return 0;
}

