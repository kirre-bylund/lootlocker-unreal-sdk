// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEMOPROJECT_DemoMissions_generated_h
#error "DemoMissions.generated.h already included, missing '#pragma once' in DemoMissions.h"
#endif
#define DEMOPROJECT_DemoMissions_generated_h

#define DemoProject_Source_DemoProject_Public_Demo_DemoMissions_h_15_SPARSE_DATA
#define DemoProject_Source_DemoProject_Public_Demo_DemoMissions_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDemoFinishMission); \
	DECLARE_FUNCTION(execDemoStartMission); \
	DECLARE_FUNCTION(execDemoGetMission); \
	DECLARE_FUNCTION(execDemoGetAllMissions);


#define DemoProject_Source_DemoProject_Public_Demo_DemoMissions_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDemoFinishMission); \
	DECLARE_FUNCTION(execDemoStartMission); \
	DECLARE_FUNCTION(execDemoGetMission); \
	DECLARE_FUNCTION(execDemoGetAllMissions);


#define DemoProject_Source_DemoProject_Public_Demo_DemoMissions_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADemoMissions(); \
	friend struct Z_Construct_UClass_ADemoMissions_Statics; \
public: \
	DECLARE_CLASS(ADemoMissions, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DemoProject"), NO_API) \
	DECLARE_SERIALIZER(ADemoMissions)


#define DemoProject_Source_DemoProject_Public_Demo_DemoMissions_h_15_INCLASS \
private: \
	static void StaticRegisterNativesADemoMissions(); \
	friend struct Z_Construct_UClass_ADemoMissions_Statics; \
public: \
	DECLARE_CLASS(ADemoMissions, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DemoProject"), NO_API) \
	DECLARE_SERIALIZER(ADemoMissions)


#define DemoProject_Source_DemoProject_Public_Demo_DemoMissions_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADemoMissions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADemoMissions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADemoMissions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADemoMissions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADemoMissions(ADemoMissions&&); \
	NO_API ADemoMissions(const ADemoMissions&); \
public:


#define DemoProject_Source_DemoProject_Public_Demo_DemoMissions_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADemoMissions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADemoMissions(ADemoMissions&&); \
	NO_API ADemoMissions(const ADemoMissions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADemoMissions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADemoMissions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADemoMissions)


#define DemoProject_Source_DemoProject_Public_Demo_DemoMissions_h_15_PRIVATE_PROPERTY_OFFSET
#define DemoProject_Source_DemoProject_Public_Demo_DemoMissions_h_11_PROLOG
#define DemoProject_Source_DemoProject_Public_Demo_DemoMissions_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DemoProject_Source_DemoProject_Public_Demo_DemoMissions_h_15_PRIVATE_PROPERTY_OFFSET \
	DemoProject_Source_DemoProject_Public_Demo_DemoMissions_h_15_SPARSE_DATA \
	DemoProject_Source_DemoProject_Public_Demo_DemoMissions_h_15_RPC_WRAPPERS \
	DemoProject_Source_DemoProject_Public_Demo_DemoMissions_h_15_INCLASS \
	DemoProject_Source_DemoProject_Public_Demo_DemoMissions_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DemoProject_Source_DemoProject_Public_Demo_DemoMissions_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DemoProject_Source_DemoProject_Public_Demo_DemoMissions_h_15_PRIVATE_PROPERTY_OFFSET \
	DemoProject_Source_DemoProject_Public_Demo_DemoMissions_h_15_SPARSE_DATA \
	DemoProject_Source_DemoProject_Public_Demo_DemoMissions_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DemoProject_Source_DemoProject_Public_Demo_DemoMissions_h_15_INCLASS_NO_PURE_DECLS \
	DemoProject_Source_DemoProject_Public_Demo_DemoMissions_h_15_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMOPROJECT_API UClass* StaticClass<class ADemoMissions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DemoProject_Source_DemoProject_Public_Demo_DemoMissions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
