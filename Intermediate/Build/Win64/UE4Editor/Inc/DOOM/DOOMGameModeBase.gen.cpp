// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DOOM/DOOMGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDOOMGameModeBase() {}
// Cross Module References
	DOOM_API UClass* Z_Construct_UClass_ADOOMGameModeBase_NoRegister();
	DOOM_API UClass* Z_Construct_UClass_ADOOMGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DOOM();
// End Cross Module References
	void ADOOMGameModeBase::StaticRegisterNativesADOOMGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ADOOMGameModeBase_NoRegister()
	{
		return ADOOMGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ADOOMGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADOOMGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DOOM,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADOOMGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DOOMGameModeBase.h" },
		{ "ModuleRelativePath", "DOOMGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADOOMGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADOOMGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADOOMGameModeBase_Statics::ClassParams = {
		&ADOOMGameModeBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ADOOMGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADOOMGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADOOMGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADOOMGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADOOMGameModeBase, 2682063698);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADOOMGameModeBase(Z_Construct_UClass_ADOOMGameModeBase, &ADOOMGameModeBase::StaticClass, TEXT("/Script/DOOM"), TEXT("ADOOMGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADOOMGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
