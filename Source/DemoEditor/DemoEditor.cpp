// Copyright Epic Games, Inc. All Rights Reserved.

#include "DemoEditor.h"


#define LOCTEXT_NAMESPACE "DemoEditor"

DEFINE_LOG_CATEGORY(LogDemoEditor);

class FDemoEditorModule : public FDefaultGameModuleImpl
{
	typedef FDemoEditorModule ThisClass;

	virtual void StartupModule() override
	{
		
	}


	virtual void ShutdownModule() override
	{
		
	}
};

IMPLEMENT_MODULE(FDemoEditorModule, DemoEditor);

#undef LOCTEXT_NAMESPACE
