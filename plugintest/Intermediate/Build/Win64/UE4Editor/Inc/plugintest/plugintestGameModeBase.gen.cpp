// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "plugintest/plugintestGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeplugintestGameModeBase() {}
// Cross Module References
	PLUGINTEST_API UClass* Z_Construct_UClass_AplugintestGameModeBase_NoRegister();
	PLUGINTEST_API UClass* Z_Construct_UClass_AplugintestGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_plugintest();
// End Cross Module References
	void AplugintestGameModeBase::StaticRegisterNativesAplugintestGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AplugintestGameModeBase_NoRegister()
	{
		return AplugintestGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AplugintestGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AplugintestGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_plugintest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AplugintestGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "plugintestGameModeBase.h" },
		{ "ModuleRelativePath", "plugintestGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AplugintestGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AplugintestGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AplugintestGameModeBase_Statics::ClassParams = {
		&AplugintestGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AplugintestGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AplugintestGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AplugintestGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AplugintestGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AplugintestGameModeBase, 749481063);
	template<> PLUGINTEST_API UClass* StaticClass<AplugintestGameModeBase>()
	{
		return AplugintestGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AplugintestGameModeBase(Z_Construct_UClass_AplugintestGameModeBase, &AplugintestGameModeBase::StaticClass, TEXT("/Script/plugintest"), TEXT("AplugintestGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AplugintestGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
