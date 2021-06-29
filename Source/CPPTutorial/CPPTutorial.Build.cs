// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CPPTutorial : ModuleRules
{
	public CPPTutorial(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "UMG"});
	}
}
