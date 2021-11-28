// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "plugintest/MusicPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMusicPlayer() {}
// Cross Module References
	PLUGINTEST_API UClass* Z_Construct_UClass_AMusicPlayer_NoRegister();
	PLUGINTEST_API UClass* Z_Construct_UClass_AMusicPlayer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_plugintest();
// End Cross Module References
	DEFINE_FUNCTION(AMusicPlayer::execadd)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_a);
		P_GET_PROPERTY(FIntProperty,Z_Param_b);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=AMusicPlayer::add(Z_Param_a,Z_Param_b);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMusicPlayer::execFreeDLL)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		AMusicPlayer::FreeDLL();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMusicPlayer::execImportDLL)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		AMusicPlayer::ImportDLL();
		P_NATIVE_END;
	}
	void AMusicPlayer::StaticRegisterNativesAMusicPlayer()
	{
		UClass* Class = AMusicPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "add", &AMusicPlayer::execadd },
			{ "FreeDLL", &AMusicPlayer::execFreeDLL },
			{ "ImportDLL", &AMusicPlayer::execImportDLL },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMusicPlayer_add_Statics
	{
		struct MusicPlayer_eventadd_Parms
		{
			int32 a;
			int32 b;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_a;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_b;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMusicPlayer_add_Statics::NewProp_a = { "a", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MusicPlayer_eventadd_Parms, a), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMusicPlayer_add_Statics::NewProp_b = { "b", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MusicPlayer_eventadd_Parms, b), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMusicPlayer_add_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MusicPlayer_eventadd_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMusicPlayer_add_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMusicPlayer_add_Statics::NewProp_a,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMusicPlayer_add_Statics::NewProp_b,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMusicPlayer_add_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMusicPlayer_add_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dll Test" },
		{ "ModuleRelativePath", "MusicPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMusicPlayer_add_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMusicPlayer, nullptr, "add", nullptr, nullptr, sizeof(MusicPlayer_eventadd_Parms), Z_Construct_UFunction_AMusicPlayer_add_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMusicPlayer_add_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMusicPlayer_add_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMusicPlayer_add_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMusicPlayer_add()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMusicPlayer_add_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMusicPlayer_FreeDLL_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMusicPlayer_FreeDLL_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dll Test" },
		{ "ModuleRelativePath", "MusicPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMusicPlayer_FreeDLL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMusicPlayer, nullptr, "FreeDLL", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMusicPlayer_FreeDLL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMusicPlayer_FreeDLL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMusicPlayer_FreeDLL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMusicPlayer_FreeDLL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMusicPlayer_ImportDLL_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMusicPlayer_ImportDLL_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dll Test" },
		{ "ModuleRelativePath", "MusicPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMusicPlayer_ImportDLL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMusicPlayer, nullptr, "ImportDLL", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMusicPlayer_ImportDLL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMusicPlayer_ImportDLL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMusicPlayer_ImportDLL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMusicPlayer_ImportDLL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMusicPlayer_NoRegister()
	{
		return AMusicPlayer::StaticClass();
	}
	struct Z_Construct_UClass_AMusicPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMusicPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_plugintest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMusicPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMusicPlayer_add, "add" }, // 4041329642
		{ &Z_Construct_UFunction_AMusicPlayer_FreeDLL, "FreeDLL" }, // 2260830067
		{ &Z_Construct_UFunction_AMusicPlayer_ImportDLL, "ImportDLL" }, // 572016654
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMusicPlayer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MusicPlayer.h" },
		{ "ModuleRelativePath", "MusicPlayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMusicPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMusicPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMusicPlayer_Statics::ClassParams = {
		&AMusicPlayer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMusicPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMusicPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMusicPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMusicPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMusicPlayer, 166601145);
	template<> PLUGINTEST_API UClass* StaticClass<AMusicPlayer>()
	{
		return AMusicPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMusicPlayer(Z_Construct_UClass_AMusicPlayer, &AMusicPlayer::StaticClass, TEXT("/Script/plugintest"), TEXT("AMusicPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMusicPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
