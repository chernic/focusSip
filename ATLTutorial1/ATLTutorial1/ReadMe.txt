========================================================================
    活动模板库 : ATLTutorial1 项目概述
========================================================================

应用程序向导已为您创建了此 ATLTutorial1 项目，作为编写动态链接库 (DLL) 的起点。

本文件概要介绍组成项目的每个文件的内容。

ATLTutorial1.vcproj
    这是使用应用程序向导生成的 VC++ 项目的主项目文件，
    其中包含生成该文件的 Visual C++ 的版本信息，以及有关使用应用程序向导选择的平台、配置和项目功能的信息。

ATLTutorial1.idl
    此文件包含项目中定义的类型库、接口和 co-class 的 IDL 定义。
    此文件将由 MIDL 编译器进行处理以生成：
        C++ 接口定义和 GUID 声明 (ATLTutorial1.h)
        GUID 定义                                (ATLTutorial1_i.c)
        类型库                                  (ATLTutorial1.tlb)
        封送处理代码                                 （ATLTutorial1_p.c 和 dlldata.c）

ATLTutorial1.h
    此文件包含 ATLTutorial1.idl 中定义的项目的 C++ 接口定义和 GUID 声明。它将在编译过程中由 MIDL 重新生成。

ATLTutorial1.cpp
    此文件包含对象映射和 DLL 导出的实现。

ATLTutorial1.rc
    这是程序使用的所有 Microsoft Windows 资源的列表。

ATLTutorial1.def
    此模块定义文件为链接器提供有关 DLL 所要求的导出的信息，其中包含用于以下内容的导出：
DllGetClassObject
DllCanUnloadNow
DllRegisterServer
DllUnregisterServer

/////////////////////////////////////////////////////////////////////////////
其他标准文件：

StdAfx.h, StdAfx.cpp
    这些文件用于生成名为 ATLTutorial1.pch 的预编译头 (PCH) 文件和名为 StdAfx.obj 的预编译类型文件。

Resource.h
    这是用于定义资源 ID 的标准头文件。


/////////////////////////////////////////////////////////////////////////////
其他注释：

	“COM+ 1.0 支持”选项可用于将 COM+ 1.0 库构建到您的主干应用程序中，
	从而让您能够使用 COM+ 1.0 类、对象和函数。

/////////////////////////////////////////////////////////////////////////////