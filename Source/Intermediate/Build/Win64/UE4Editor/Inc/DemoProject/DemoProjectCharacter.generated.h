// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEMOPROJECT_DemoProjectCharacter_generated_h
#error "DemoProjectCharacter.generated.h already included, missing '#pragma once' in DemoProjectCharacter.h"
#endif
#define DEMOPROJECT_DemoProjectCharacter_generated_h

#define DemoProject_Source_DemoProject_DemoProjectCharacter_h_12_RPC_WRAPPERS
#define DemoProject_Source_DemoProject_DemoProjectCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define DemoProject_Source_DemoProject_DemoProjectCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADemoProjectCharacter(); \
	friend struct Z_Construct_UClass_ADemoProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(ADemoProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DemoProject"), NO_API) \
	DECLARE_SERIALIZER(ADemoProjectCharacter)


#define DemoProject_Source_DemoProject_DemoProjectCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADemoProjectCharacter(); \
	friend struct Z_Construct_UClass_ADemoProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(ADemoProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DemoProject"), NO_API) \
	DECLARE_SERIALIZER(ADemoProjectCharacter)


#define DemoProject_Source_DemoProject_DemoProjectCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADemoProjectCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADemoProjectCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADemoProjectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADemoProjectCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADemoProjectCharacter(ADemoProjectCharacter&&); \
	NO_API ADemoProjectCharacter(const ADemoProjectCharacter&); \
public:


#define DemoProject_Source_DemoProject_DemoProjectCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADemoProjectCharacter(ADemoProjectCharacter&&); \
	NO_API ADemoProjectCharacter(const ADemoProjectCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADemoProjectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADemoProjectCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADemoProjectCharacter)


#define DemoProject_Source_DemoProject_DemoProjectCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ADemoProjectCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ADemoProjectCharacter, FollowCamera); }


#define DemoProject_Source_DemoProject_DemoProjectCharacter_h_9_PROLOG
#define DemoProject_Source_DemoProject_DemoProjectCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DemoProject_Source_DemoProject_DemoProjectCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	DemoProject_Source_DemoProject_DemoProjectCharacter_h_12_RPC_WRAPPERS \
	DemoProject_Source_DemoProject_DemoProjectCharacter_h_12_INCLASS \
	DemoProject_Source_DemoProject_DemoProjectCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DemoProject_Source_DemoProject_DemoProjectCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DemoProject_Source_DemoProject_DemoProjectCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	DemoProject_Source_DemoProject_DemoProjectCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DemoProject_Source_DemoProject_DemoProjectCharacter_h_12_INCLASS_NO_PURE_DECLS \
	DemoProject_Source_DemoProject_DemoProjectCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMOPROJECT_API UClass* StaticClass<class ADemoProjectCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DemoProject_Source_DemoProject_DemoProjectCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
