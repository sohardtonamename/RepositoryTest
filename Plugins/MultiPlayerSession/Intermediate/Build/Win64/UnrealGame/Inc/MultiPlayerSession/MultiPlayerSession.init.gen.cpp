// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiPlayerSession_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MultiPlayerSession;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MultiPlayerSession()
	{
		if (!Z_Registration_Info_UPackage__Script_MultiPlayerSession.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MultiPlayerSession",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x102503C4,
				0xE5A7E895,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MultiPlayerSession.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MultiPlayerSession.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MultiPlayerSession(Z_Construct_UPackage__Script_MultiPlayerSession, TEXT("/Script/MultiPlayerSession"), Z_Registration_Info_UPackage__Script_MultiPlayerSession, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x102503C4, 0xE5A7E895));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
