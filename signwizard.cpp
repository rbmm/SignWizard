#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <Cryptuiapi.h>

void CALLBACK ep(void*)
{
	CRYPTUI_WIZ_DIGITAL_SIGN_INFO DigitalSignInfo = { sizeof(DigitalSignInfo)};
	ExitProcess(CryptUIWizDigitalSign(0, 0, 0, &DigitalSignInfo, 0));
}