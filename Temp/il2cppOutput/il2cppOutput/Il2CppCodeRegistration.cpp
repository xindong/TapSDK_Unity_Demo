﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif








IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END




extern const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[];
extern const Il2CppMethodPointer g_Il2CppGenericMethodPointers[];
extern const InvokerMethod g_Il2CppInvokerPointers[];
extern const CustomAttributesCacheGenerator g_AttributeGenerators[];
extern const Il2CppMethodPointer g_UnresolvedVirtualMethodPointers[];
extern Il2CppInteropData g_Il2CppInteropData[];
IL2CPP_EXTERN_C_CONST Il2CppCodeGenModule g_mscorlibCodeGenModule;
IL2CPP_EXTERN_C_CONST Il2CppCodeGenModule g_System_ConfigurationCodeGenModule;
IL2CPP_EXTERN_C_CONST Il2CppCodeGenModule g_Mono_SecurityCodeGenModule;
IL2CPP_EXTERN_C_CONST Il2CppCodeGenModule g_System_XmlCodeGenModule;
IL2CPP_EXTERN_C_CONST Il2CppCodeGenModule g_SystemCodeGenModule;
IL2CPP_EXTERN_C_CONST Il2CppCodeGenModule g_System_CoreCodeGenModule;
IL2CPP_EXTERN_C_CONST Il2CppCodeGenModule g_UnityEngine_SharedInternalsModuleCodeGenModule;
IL2CPP_EXTERN_C_CONST Il2CppCodeGenModule g_UnityEngine_CoreModuleCodeGenModule;
IL2CPP_EXTERN_C_CONST Il2CppCodeGenModule g_UnityEngine_AndroidJNIModuleCodeGenModule;
IL2CPP_EXTERN_C_CONST Il2CppCodeGenModule g_UnityEngine_JSONSerializeModuleCodeGenModule;
IL2CPP_EXTERN_C_CONST Il2CppCodeGenModule g_TDSCommonCodeGenModule;
IL2CPP_EXTERN_C_CONST Il2CppCodeGenModule g_UnityEngine_InputLegacyModuleCodeGenModule;
IL2CPP_EXTERN_C_CONST Il2CppCodeGenModule g_UnityEngine_TextRenderingModuleCodeGenModule;
IL2CPP_EXTERN_C_CONST Il2CppCodeGenModule g_MS_NativeDialogCodeGenModule;
IL2CPP_EXTERN_C_CONST Il2CppCodeGenModule g_TDSLoginCodeGenModule;
IL2CPP_EXTERN_C_CONST Il2CppCodeGenModule g_TDSMomentCodeGenModule;
IL2CPP_EXTERN_C_CONST Il2CppCodeGenModule g_UnityEngine_AudioModuleCodeGenModule;
IL2CPP_EXTERN_C_CONST Il2CppCodeGenModule g_UnityEngine_GameCenterModuleCodeGenModule;
IL2CPP_EXTERN_C_CONST Il2CppCodeGenModule g_UnityEngine_IMGUIModuleCodeGenModule;
IL2CPP_EXTERN_C_CONST Il2CppCodeGenModule g_UnityNative_ToastsCodeGenModule;
IL2CPP_EXTERN_C_CONST Il2CppCodeGenModule g_UnityEngineCodeGenModule;
IL2CPP_EXTERN_C_CONST Il2CppCodeGenModule g_AssemblyU2DCSharpCodeGenModule;
extern const Il2CppCodeGenModule* g_CodeGenModules[];
const Il2CppCodeGenModule* g_CodeGenModules[22] = 
{
	(&g_mscorlibCodeGenModule),
	(&g_System_ConfigurationCodeGenModule),
	(&g_Mono_SecurityCodeGenModule),
	(&g_System_XmlCodeGenModule),
	(&g_SystemCodeGenModule),
	(&g_System_CoreCodeGenModule),
	(&g_UnityEngine_SharedInternalsModuleCodeGenModule),
	(&g_UnityEngine_CoreModuleCodeGenModule),
	(&g_UnityEngine_AndroidJNIModuleCodeGenModule),
	(&g_UnityEngine_JSONSerializeModuleCodeGenModule),
	(&g_TDSCommonCodeGenModule),
	(&g_UnityEngine_InputLegacyModuleCodeGenModule),
	(&g_UnityEngine_TextRenderingModuleCodeGenModule),
	(&g_MS_NativeDialogCodeGenModule),
	(&g_TDSLoginCodeGenModule),
	(&g_TDSMomentCodeGenModule),
	(&g_UnityEngine_AudioModuleCodeGenModule),
	(&g_UnityEngine_GameCenterModuleCodeGenModule),
	(&g_UnityEngine_IMGUIModuleCodeGenModule),
	(&g_UnityNative_ToastsCodeGenModule),
	(&g_UnityEngineCodeGenModule),
	(&g_AssemblyU2DCSharpCodeGenModule),
};
extern const Il2CppCodeRegistration g_CodeRegistration;
const Il2CppCodeRegistration g_CodeRegistration = 
{
	2,
	g_ReversePInvokeWrapperPointers,
	2887,
	g_Il2CppGenericMethodPointers,
	1509,
	g_Il2CppInvokerPointers,
	2386,
	g_AttributeGenerators,
	184,
	g_UnresolvedVirtualMethodPointers,
	139,
	g_Il2CppInteropData,
	0,
	NULL,
	22,
	g_CodeGenModules,
};
IL2CPP_EXTERN_C_CONST Il2CppMetadataRegistration g_MetadataRegistration;
static const Il2CppCodeGenOptions s_Il2CppCodeGenOptions = 
{
	true,
	7,
};
void s_Il2CppCodegenRegistration()
{
	il2cpp_codegen_register (&g_CodeRegistration, &g_MetadataRegistration, &s_Il2CppCodeGenOptions);
}
#if RUNTIME_IL2CPP
typedef void (*CodegenRegistrationFunction)();
CodegenRegistrationFunction g_CodegenRegistration = s_Il2CppCodegenRegistration;
#endif
