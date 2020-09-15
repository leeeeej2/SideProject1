// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ESCAPEROOM_EscapeRoomCharacter_generated_h
#error "EscapeRoomCharacter.generated.h already included, missing '#pragma once' in EscapeRoomCharacter.h"
#endif
#define ESCAPEROOM_EscapeRoomCharacter_generated_h

#define EscapeRoom_Source_EscapeRoom_EscapeRoomCharacter_h_14_SPARSE_DATA
#define EscapeRoom_Source_EscapeRoom_EscapeRoomCharacter_h_14_RPC_WRAPPERS
#define EscapeRoom_Source_EscapeRoom_EscapeRoomCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define EscapeRoom_Source_EscapeRoom_EscapeRoomCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEscapeRoomCharacter(); \
	friend struct Z_Construct_UClass_AEscapeRoomCharacter_Statics; \
public: \
	DECLARE_CLASS(AEscapeRoomCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EscapeRoom"), NO_API) \
	DECLARE_SERIALIZER(AEscapeRoomCharacter)


#define EscapeRoom_Source_EscapeRoom_EscapeRoomCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAEscapeRoomCharacter(); \
	friend struct Z_Construct_UClass_AEscapeRoomCharacter_Statics; \
public: \
	DECLARE_CLASS(AEscapeRoomCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EscapeRoom"), NO_API) \
	DECLARE_SERIALIZER(AEscapeRoomCharacter)


#define EscapeRoom_Source_EscapeRoom_EscapeRoomCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEscapeRoomCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEscapeRoomCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEscapeRoomCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEscapeRoomCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEscapeRoomCharacter(AEscapeRoomCharacter&&); \
	NO_API AEscapeRoomCharacter(const AEscapeRoomCharacter&); \
public:


#define EscapeRoom_Source_EscapeRoom_EscapeRoomCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEscapeRoomCharacter(AEscapeRoomCharacter&&); \
	NO_API AEscapeRoomCharacter(const AEscapeRoomCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEscapeRoomCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEscapeRoomCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEscapeRoomCharacter)


#define EscapeRoom_Source_EscapeRoom_EscapeRoomCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AEscapeRoomCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AEscapeRoomCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AEscapeRoomCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AEscapeRoomCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AEscapeRoomCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AEscapeRoomCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AEscapeRoomCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AEscapeRoomCharacter, L_MotionController); }


#define EscapeRoom_Source_EscapeRoom_EscapeRoomCharacter_h_11_PROLOG
#define EscapeRoom_Source_EscapeRoom_EscapeRoomCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EscapeRoom_Source_EscapeRoom_EscapeRoomCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	EscapeRoom_Source_EscapeRoom_EscapeRoomCharacter_h_14_SPARSE_DATA \
	EscapeRoom_Source_EscapeRoom_EscapeRoomCharacter_h_14_RPC_WRAPPERS \
	EscapeRoom_Source_EscapeRoom_EscapeRoomCharacter_h_14_INCLASS \
	EscapeRoom_Source_EscapeRoom_EscapeRoomCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EscapeRoom_Source_EscapeRoom_EscapeRoomCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EscapeRoom_Source_EscapeRoom_EscapeRoomCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	EscapeRoom_Source_EscapeRoom_EscapeRoomCharacter_h_14_SPARSE_DATA \
	EscapeRoom_Source_EscapeRoom_EscapeRoomCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	EscapeRoom_Source_EscapeRoom_EscapeRoomCharacter_h_14_INCLASS_NO_PURE_DECLS \
	EscapeRoom_Source_EscapeRoom_EscapeRoomCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ESCAPEROOM_API UClass* StaticClass<class AEscapeRoomCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EscapeRoom_Source_EscapeRoom_EscapeRoomCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
