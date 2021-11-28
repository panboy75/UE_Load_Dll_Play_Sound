// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLUGINTEST_MusicPlayer_generated_h
#error "MusicPlayer.generated.h already included, missing '#pragma once' in MusicPlayer.h"
#endif
#define PLUGINTEST_MusicPlayer_generated_h

#define plugintest_Source_plugintest_MusicPlayer_h_16_SPARSE_DATA
#define plugintest_Source_plugintest_MusicPlayer_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execadd); \
	DECLARE_FUNCTION(execFreeDLL); \
	DECLARE_FUNCTION(execImportDLL);


#define plugintest_Source_plugintest_MusicPlayer_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execadd); \
	DECLARE_FUNCTION(execFreeDLL); \
	DECLARE_FUNCTION(execImportDLL);


#define plugintest_Source_plugintest_MusicPlayer_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMusicPlayer(); \
	friend struct Z_Construct_UClass_AMusicPlayer_Statics; \
public: \
	DECLARE_CLASS(AMusicPlayer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/plugintest"), NO_API) \
	DECLARE_SERIALIZER(AMusicPlayer)


#define plugintest_Source_plugintest_MusicPlayer_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAMusicPlayer(); \
	friend struct Z_Construct_UClass_AMusicPlayer_Statics; \
public: \
	DECLARE_CLASS(AMusicPlayer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/plugintest"), NO_API) \
	DECLARE_SERIALIZER(AMusicPlayer)


#define plugintest_Source_plugintest_MusicPlayer_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMusicPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMusicPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMusicPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMusicPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMusicPlayer(AMusicPlayer&&); \
	NO_API AMusicPlayer(const AMusicPlayer&); \
public:


#define plugintest_Source_plugintest_MusicPlayer_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMusicPlayer(AMusicPlayer&&); \
	NO_API AMusicPlayer(const AMusicPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMusicPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMusicPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMusicPlayer)


#define plugintest_Source_plugintest_MusicPlayer_h_16_PRIVATE_PROPERTY_OFFSET
#define plugintest_Source_plugintest_MusicPlayer_h_13_PROLOG
#define plugintest_Source_plugintest_MusicPlayer_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	plugintest_Source_plugintest_MusicPlayer_h_16_PRIVATE_PROPERTY_OFFSET \
	plugintest_Source_plugintest_MusicPlayer_h_16_SPARSE_DATA \
	plugintest_Source_plugintest_MusicPlayer_h_16_RPC_WRAPPERS \
	plugintest_Source_plugintest_MusicPlayer_h_16_INCLASS \
	plugintest_Source_plugintest_MusicPlayer_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define plugintest_Source_plugintest_MusicPlayer_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	plugintest_Source_plugintest_MusicPlayer_h_16_PRIVATE_PROPERTY_OFFSET \
	plugintest_Source_plugintest_MusicPlayer_h_16_SPARSE_DATA \
	plugintest_Source_plugintest_MusicPlayer_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	plugintest_Source_plugintest_MusicPlayer_h_16_INCLASS_NO_PURE_DECLS \
	plugintest_Source_plugintest_MusicPlayer_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLUGINTEST_API UClass* StaticClass<class AMusicPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID plugintest_Source_plugintest_MusicPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
