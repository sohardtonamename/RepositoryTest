// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiPlayerSession/Public/MutiplayerSessionsSystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMutiplayerSessionsSystem() {}
// Cross Module References
	MULTIPLAYERSESSION_API UClass* Z_Construct_UClass_UMutiplayerSessionsSystem_NoRegister();
	MULTIPLAYERSESSION_API UClass* Z_Construct_UClass_UMutiplayerSessionsSystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_MultiPlayerSession();
// End Cross Module References
	void UMutiplayerSessionsSystem::StaticRegisterNativesUMutiplayerSessionsSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMutiplayerSessionsSystem);
	UClass* Z_Construct_UClass_UMutiplayerSessionsSystem_NoRegister()
	{
		return UMutiplayerSessionsSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMutiplayerSessionsSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMutiplayerSessionsSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MultiPlayerSession,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMutiplayerSessionsSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MutiplayerSessionsSystem.h" },
		{ "ModuleRelativePath", "Public/MutiplayerSessionsSystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMutiplayerSessionsSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMutiplayerSessionsSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMutiplayerSessionsSystem_Statics::ClassParams = {
		&UMutiplayerSessionsSystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMutiplayerSessionsSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMutiplayerSessionsSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMutiplayerSessionsSystem()
	{
		if (!Z_Registration_Info_UClass_UMutiplayerSessionsSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMutiplayerSessionsSystem.OuterSingleton, Z_Construct_UClass_UMutiplayerSessionsSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMutiplayerSessionsSystem.OuterSingleton;
	}
	template<> MULTIPLAYERSESSION_API UClass* StaticClass<UMutiplayerSessionsSystem>()
	{
		return UMutiplayerSessionsSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMutiplayerSessionsSystem);
	struct Z_CompiledInDeferFile_FID_MPTesting_Plugins_MultiPlayerSession_Source_MultiPlayerSession_Public_MutiplayerSessionsSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPTesting_Plugins_MultiPlayerSession_Source_MultiPlayerSession_Public_MutiplayerSessionsSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMutiplayerSessionsSystem, UMutiplayerSessionsSystem::StaticClass, TEXT("UMutiplayerSessionsSystem"), &Z_Registration_Info_UClass_UMutiplayerSessionsSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMutiplayerSessionsSystem), 821332711U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MPTesting_Plugins_MultiPlayerSession_Source_MultiPlayerSession_Public_MutiplayerSessionsSystem_h_3382981610(TEXT("/Script/MultiPlayerSession"),
		Z_CompiledInDeferFile_FID_MPTesting_Plugins_MultiPlayerSession_Source_MultiPlayerSession_Public_MutiplayerSessionsSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MPTesting_Plugins_MultiPlayerSession_Source_MultiPlayerSession_Public_MutiplayerSessionsSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
