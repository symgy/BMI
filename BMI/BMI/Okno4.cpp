#include "Okno4.h"




using namespace BMI; //nazwa projektu


[STAThreadAttribute]

int main(array<String ^> ^args){
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	BMI::Okno4 forma; //MyForm to okno ktore sie pojawi po uruchomieniu 
	Application::Run(%forma);
	return 0;
}
