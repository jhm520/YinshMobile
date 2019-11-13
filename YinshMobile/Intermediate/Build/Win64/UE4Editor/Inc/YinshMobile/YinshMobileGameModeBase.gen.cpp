// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YinshMobile/YinshMobileGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYinshMobileGameModeBase() {}
// Cross Module References
	YINSHMOBILE_API UClass* Z_Construct_UClass_AYinshMobileGameModeBase_NoRegister();
	YINSHMOBILE_API UClass* Z_Construct_UClass_AYinshMobileGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_YinshMobile();
// End Cross Module References
	void AYinshMobileGameModeBase::StaticRegisterNativesAYinshMobileGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AYinshMobileGameModeBase_NoRegister()
	{
		return AYinshMobileGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AYinshMobileGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AYinshMobileGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_YinshMobile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AYinshMobileGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "YinshMobileGameModeBase.h" },
		{ "ModuleRelativePath", "YinshMobileGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AYinshMobileGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AYinshMobileGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AYinshMobileGameModeBase_Statics::ClassParams = {
		&AYinshMobileGameModeBase::StaticClass,
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
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_AYinshMobileGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AYinshMobileGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AYinshMobileGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AYinshMobileGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AYinshMobileGameModeBase, 1420888891);
	template<> YINSHMOBILE_API UClass* StaticClass<AYinshMobileGameModeBase>()
	{
		return AYinshMobileGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AYinshMobileGameModeBase(Z_Construct_UClass_AYinshMobileGameModeBase, &AYinshMobileGameModeBase::StaticClass, TEXT("/Script/YinshMobile"), TEXT("AYinshMobileGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AYinshMobileGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
