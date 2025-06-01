// Copyright Epic Games, Inc. All Rights Reserved.

#include "Modules/ModuleManager.h"

/**
 * FDemoGameModule
 */
class FDemoGameModule : public FDefaultGameModuleImpl
{
	virtual void StartupModule() override
	{
	}

	virtual void ShutdownModule() override
	{
	}
};


IMPLEMENT_PRIMARY_GAME_MODULE(FDemoGameModule, DemoGame, "DemoGame");
