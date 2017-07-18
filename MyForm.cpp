#include "MyForm1.h"

#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
int main(){
	Application::EnableVisualStyles();
	SimonGame::MyForm1 form;
	Application::Run(%form);
}