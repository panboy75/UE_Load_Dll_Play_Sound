// Fill out your copyright notice in the Description page of Project Settings.


#include "MusicPlayer.h"




// Sets default values
AMusicPlayer::AMusicPlayer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMusicPlayer::BeginPlay()
{
	Super::BeginPlay();

	this->ImportDLL();

	int c = this->add(2, 8);
	UE_LOG(LogTemp, Warning, TEXT("result °á°ú : %d"), c );
}

// Called every frame
void AMusicPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void AMusicPlayer::ImportDLL()
{
	FString filepath = *FPaths::ProjectPluginsDir() + (FString)"Dll2.dll";

	if (FPaths::FileExists(filepath))
	{
		dllHandle = FPlatformProcess::GetDllHandle(*filepath);

		if (NULL != dllHandle)
		{
			UE_LOG(LogTemp, Warning, TEXT("dll2 import success"));
			
			FString procName1 = "add";
			addFromDLL = (int (*)(int, int))FPlatformProcess::GetDllExport(dllHandle, *procName1);
		}
	}

}


void AMusicPlayer::FreeDLL()
{
	if (NULL != dllHandle)
	{
		FPlatformProcess::FreeDllHandle(dllHandle);
		dllHandle = NULL;
		addFromDLL = NULL;
	}
}


int AMusicPlayer::add(int a, int b)
{
	return addFromDLL(a, b);
}