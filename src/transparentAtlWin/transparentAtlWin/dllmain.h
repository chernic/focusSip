// dllmain.h : 模块类的声明。

class CtransparentAtlWinModule : public CAtlDllModuleT< CtransparentAtlWinModule >
{
public :
	DECLARE_LIBID(LIBID_transparentAtlWinLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_TRANSPARENTATLWIN, "{50B004A2-E2E3-4A92-89F5-4E05D74B74D4}")
};

extern class CtransparentAtlWinModule _AtlModule;
