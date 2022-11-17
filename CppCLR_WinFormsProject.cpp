#include "pch.h"

using namespace System;
using namespace System::Windows::Forms;

#include "Form1.h"

[STAThread] 
int main() { 
	Application::EnableVisualStyles(); 
	Application::SetCompatibleTextRenderingDefault(false); 
	Application::Run(gcnew testWin::MyForm());
	return 0; 
}