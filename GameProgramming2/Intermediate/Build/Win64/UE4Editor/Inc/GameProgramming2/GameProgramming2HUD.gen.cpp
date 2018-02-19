// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "GameProgramming2HUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameProgramming2HUD() {}
// Cross Module References
	GAMEPROGRAMMING2_API UClass* Z_Construct_UClass_AGameProgramming2HUD_NoRegister();
	GAMEPROGRAMMING2_API UClass* Z_Construct_UClass_AGameProgramming2HUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_GameProgramming2();
// End Cross Module References
	void AGameProgramming2HUD::StaticRegisterNativesAGameProgramming2HUD()
	{
	}
	UClass* Z_Construct_UClass_AGameProgramming2HUD_NoRegister()
	{
		return AGameProgramming2HUD::StaticClass();
	}
	UClass* Z_Construct_UClass_AGameProgramming2HUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AHUD,
				(UObject* (*)())Z_Construct_UPackage__Script_GameProgramming2,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Rendering Actor Input Replication" },
				{ "IncludePath", "GameProgramming2HUD.h" },
				{ "ModuleRelativePath", "GameProgramming2HUD.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AGameProgramming2HUD>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AGameProgramming2HUD::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0080028Cu,
				nullptr, 0,
				nullptr, 0,
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameProgramming2HUD, 2045977830);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameProgramming2HUD(Z_Construct_UClass_AGameProgramming2HUD, &AGameProgramming2HUD::StaticClass, TEXT("/Script/GameProgramming2"), TEXT("AGameProgramming2HUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameProgramming2HUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
