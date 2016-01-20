#include "stdafx.h"
#include "sosjs.h"

VOID WDBGAPI WinDbgExtensionDllInit(PWINDBG_EXTENSION_APIS lpExtensionApis, USHORT usMajorVersion, USHORT usMinorVersion)
{
	ExtensionApis = *lpExtensionApis;

	//HRESULT hResult = S_FALSE;

	//if (hResult = DebugCreate(__uuidof(IDebugClient), (void**)&gDebugClient) != S_OK)
	//{
	//	dprintf("Acuqiring IDebugClient* Failled\n\n");
	//	return;
	//}

	//if (hResult = gDebugClient->QueryInterface(__uuidof(IDebugControl), (void**)&gExecuteCmd) != S_OK)
	//{
	//	dprintf("Acuqiring IDebugControl* Failled\n\n");
	//	return;
	//}

	//if (hResult = gDebugClient->QueryInterface(__uuidof(IDebugAdvanced2), (void**)&gAdvancedDebug2) != S_OK)
	//{
	//	dprintf("Acuqiring IDebugAdvanced2* Failled\n\n");
	//	return;
	//}

	//if (hResult = gDebugClient->QueryInterface(__uuidof(IDebugControl4), (void**)&gDebugControl4) != S_OK)
	//{
	//	dprintf("Acuqiring IDebugControl4* Failled\n\n");
	//	return;
	//}
}

LPEXT_API_VERSION WDBGAPI ExtensionApiVersion(void)
{
	return &g_ExtApiVersion;
}

DECLARE_API(help)
{
	dprintf("Hello world\n\n");
}