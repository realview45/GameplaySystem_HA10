// RealView45

using UnrealBuildTool;
using System.Collections.Generic;

public class StepBy01Target : TargetRules
{
	public StepBy01Target(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "StepBy01" } );
	}
}
