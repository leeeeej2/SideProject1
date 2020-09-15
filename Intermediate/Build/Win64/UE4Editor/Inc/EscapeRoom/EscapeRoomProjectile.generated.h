// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef ESCAPEROOM_EscapeRoomProjectile_generated_h
#error "EscapeRoomProjectile.generated.h already included, missing '#pragma once' in EscapeRoomProjectile.h"
#endif
#define ESCAPEROOM_EscapeRoomProjectile_generated_h

#define EscapeRoom_Source_EscapeRoom_EscapeRoomProjectile_h_12_SPARSE_DATA
#define EscapeRoom_Source_EscapeRoom_EscapeRoomProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define EscapeRoom_Source_EscapeRoom_EscapeRoomProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define EscapeRoom_Source_EscapeRoom_EscapeRoomProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEscapeRoomProjectile(); \
	friend struct Z_Construct_UClass_AEscapeRoomProjectile_Statics; \
public: \
	DECLARE_CLASS(AEscapeRoomProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EscapeRoom"), NO_API) \
	DECLARE_SERIALIZER(AEscapeRoomProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define EscapeRoom_Source_EscapeRoom_EscapeRoomProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAEscapeRoomProjectile(); \
	friend struct Z_Construct_UClass_AEscapeRoomProjectile_Statics; \
public: \
	DECLARE_CLASS(AEscapeRoomProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EscapeRoom"), NO_API) \
	DECLARE_SERIALIZER(AEscapeRoomProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define EscapeRoom_Source_EscapeRoom_EscapeRoomProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEscapeRoomProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEscapeRoomProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEscapeRoomProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEscapeRoomProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEscapeRoomProjectile(AEscapeRoomProjectile&&); \
	NO_API AEscapeRoomProjectile(const AEscapeRoomProjectile&); \
public:


#define EscapeRoom_Source_EscapeRoom_EscapeRoomProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEscapeRoomProjectile(AEscapeRoomProjectile&&); \
	NO_API AEscapeRoomProjectile(const AEscapeRoomProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEscapeRoomProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEscapeRoomProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEscapeRoomProjectile)


#define EscapeRoom_Source_EscapeRoom_EscapeRoomProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AEscapeRoomProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AEscapeRoomProjectile, ProjectileMovement); }


#define EscapeRoom_Source_EscapeRoom_EscapeRoomProjectile_h_9_PROLOG
#define EscapeRoom_Source_EscapeRoom_EscapeRoomProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EscapeRoom_Source_EscapeRoom_EscapeRoomProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	EscapeRoom_Source_EscapeRoom_EscapeRoomProjectile_h_12_SPARSE_DATA \
	EscapeRoom_Source_EscapeRoom_EscapeRoomProjectile_h_12_RPC_WRAPPERS \
	EscapeRoom_Source_EscapeRoom_EscapeRoomProjectile_h_12_INCLASS \
	EscapeRoom_Source_EscapeRoom_EscapeRoomProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EscapeRoom_Source_EscapeRoom_EscapeRoomProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EscapeRoom_Source_EscapeRoom_EscapeRoomProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	EscapeRoom_Source_EscapeRoom_EscapeRoomProjectile_h_12_SPARSE_DATA \
	EscapeRoom_Source_EscapeRoom_EscapeRoomProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	EscapeRoom_Source_EscapeRoom_EscapeRoomProjectile_h_12_INCLASS_NO_PURE_DECLS \
	EscapeRoom_Source_EscapeRoom_EscapeRoomProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ESCAPEROOM_API UClass* StaticClass<class AEscapeRoomProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EscapeRoom_Source_EscapeRoom_EscapeRoomProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
