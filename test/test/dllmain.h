// dllmain.h : 模块类的声明。

class CtestModule : public CAtlDllModuleT< CtestModule >
{
public :
	DECLARE_LIBID(LIBID_testLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_TEST, "{CB2194A8-EBE8-40CB-A8DE-AFB6DBDA6AA3}")
};

extern class CtestModule _AtlModule;
