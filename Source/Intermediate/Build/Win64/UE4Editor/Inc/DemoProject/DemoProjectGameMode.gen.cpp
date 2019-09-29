// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DemoProject/DemoProjectGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDemoProjectGameMode() {}
// Cross Module References
	DEMOPROJECT_API UClass* Z_Construct_UClass_ADemoProjectGameMode_NoRegister();
	DEMOPROJECT_API UClass* Z_Construct_UClass_ADemoProjectGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DemoProject();
// End Cross Module References
	void ADemoProjectGameMode::StaticRegisterNativesADemoProjectGameMode()
	{
	}
	UClass* Z_Construct_UClass_ADemoProjectGameMode_NoRegister()
	{
		return ADemoProjectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ADemoProjectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADemoProjectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DemoProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADemoProjectGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DemoProjectGameMode.h" },
		{ "ModuleRelativePath", "DemoProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADemoProjectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADemoProjectGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADemoProjectGameMode_Statics::ClassParams = {
		&ADemoProjectGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_ADemoProjectGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADemoProjectGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADemoProjectGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADemoProjectGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADemoProjectGameMode, 3589647291);
	template<> DEMOPROJECT_API UClass* StaticClass<ADemoProjectGameMode>()
	{
		return ADemoProjectGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADemoProjectGameMode(Z_Construct_UClass_ADemoProjectGameMode, &ADemoProjectGameMode::StaticClass, TEXT("/Script/DemoProject"), TEXT("ADemoProjectGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADemoProjectGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
