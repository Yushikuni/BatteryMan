// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BateryMan : ModuleRules
{
	public BateryMan(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "UMG" });
	}
}
