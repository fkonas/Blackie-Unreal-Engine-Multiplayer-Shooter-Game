// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Blackie : ModuleRules
{
	public Blackie(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput"});
	}
}
