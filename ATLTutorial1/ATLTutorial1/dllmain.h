// dllmain.h : 模块类的声明。

class CATLTutorial1Module : public CAtlDllModuleT< CATLTutorial1Module >
{
public :
	DECLARE_LIBID(LIBID_ATLTutorial1Lib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_ATLTUTORIAL1, "{27DC962A-7C71-4FE7-8553-8FB624129616}")
};

extern class CATLTutorial1Module _AtlModule;
