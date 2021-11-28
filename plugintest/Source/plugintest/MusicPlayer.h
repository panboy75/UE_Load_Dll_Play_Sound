// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MusicPlayer.generated.h"


UCLASS()
class PLUGINTEST_API AMusicPlayer : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMusicPlayer();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


// DLLÀ» À§ÇØ
public:
	UFUNCTION(BlueprintCallable, Category = "Dll Test")
		static void ImportDLL();

	UFUNCTION(BlueprintCallable, Category = "Dll Test")
		static void FreeDLL();

	UFUNCTION(BlueprintCallable, Category = "Dll Test")
		static int add(int a, int b);
};

static void* dllHandle;
static int (*addFromDLL)(int, int);