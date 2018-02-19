// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "GameProgramming2GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameProgramming2GameMode() {}
// Cross Module References
	GAMEPROGRAMMING2_API UClass* Z_Construct_UClass_AGameProgramming2GameMode_NoRegister();
	GAMEPROGRAMMING2_API UClass* Z_Construct_UClass_AGameProgramming2GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GameProgramming2();
// End Cross Module References
	void AGameProgramming2GameMode::StaticRegisterNativesAGameProgramming2GameMode()
	{
	}
	UClass* Z_Construct_UClass_AGameProgramming2GameMode_NoRegister()
	{
		return AGameProgramming2GameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AGameProgramming2GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_GameProgramming2,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "GameProgramming2GameMode.h" },
				{ "ModuleRelativePath", "GameProgramming2GameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AGameProgramming2GameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AGameProgramming2GameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameProgramming2GameMode, 2042817766);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameProgramming2GameMode(Z_Construct_UClass_AGameProgramming2GameMode, &AGameProgramming2GameMode::StaticClass, TEXT("/Script/GameProgramming2"), TEXT("AGameProgramming2GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameProgramming2GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
