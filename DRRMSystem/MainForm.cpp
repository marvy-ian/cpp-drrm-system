#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Replace "DRRMSystem" with your actual project namespace if different
    DRRMSystem::MainForm form;
    Application::Run(% form);
    return 0;
}