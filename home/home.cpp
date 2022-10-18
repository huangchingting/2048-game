// home.cpp: 主要專案檔。

#include "stdafx.h"
#include "MyForm.h"

using namespace System;
using namespace home;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	Application::Run(gcnew MyForm());
    return 0;
}
