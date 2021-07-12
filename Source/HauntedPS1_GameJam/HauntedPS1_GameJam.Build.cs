// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class HauntedPS1_GameJam : ModuleRules
{
	public HauntedPS1_GameJam(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
