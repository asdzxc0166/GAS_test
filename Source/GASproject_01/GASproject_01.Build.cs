// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GASproject_01 : ModuleRules
{
	public GASproject_01(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
