// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

[SupportedPlatforms(UnrealPlatformClass.Server)]
public class ActionRPGGameServerTarget : TargetRules
{
    public ActionRPGGameServerTarget(TargetInfo Target) : base(Target)
    {
        //LinkType = TargetLinkType.Modular;
        //LinkType = TargetLinkType.Monolithic;
        Type = TargetType.Server;
        //bUsesSlate = false;
        LaunchModuleName = "ActionRPGGame";

        
        ExtraModuleNames.Add("GameInterfaces");
        ExtraModuleNames.Add("GameTrace");
        ExtraModuleNames.Add("GameInventorySystem");
        ExtraModuleNames.Add("AbilityFramework");
        ExtraModuleNames.Add("GameSystem");
        ExtraModuleNames.Add("GameWidgets");
        ExtraModuleNames.Add("TimeOfDay");
        ExtraModuleNames.Add("ActionRPGGame");
    }
}
