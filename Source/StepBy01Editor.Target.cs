// RealView45

using UnrealBuildTool;
using System.Collections.Generic;

public class StepBy01EditorTarget : TargetRules
{
	public StepBy01EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "StepBy01" } );
	}
}
