
EXT_API_VERSION g_ExtApiVersion = { 1,0,EXT_API_VERSION_NUMBER,0 };
WINDBG_EXTENSION_APIS ExtensionApis = { 0 };

IDebugAdvanced2*  gAdvancedDebug2 = NULL;
IDebugControl4*   gDebugControl4 = NULL;
IDebugControl*    gExecuteCmd = NULL;
IDebugClient*     gDebugClient = NULL;
