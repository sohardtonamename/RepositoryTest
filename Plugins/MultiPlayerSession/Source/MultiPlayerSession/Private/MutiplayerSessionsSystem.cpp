// Fill out your copyright notice in the Description page of Project Settings.


#include "MutiplayerSessionsSystem.h"

#include "OnlineSessionSettings.h"
#include "OnlineSubsystem.h"


UMutiplayerSessionsSystem::UMutiplayerSessionsSystem():
	CreateSessionCompleteDelegate(FOnCreateSessionCompleteDelegate::CreateUObject(this,&ThisClass::OnCreateSessionComplete)),
	FindSessionsCompleteDelegate(FOnFindSessionsCompleteDelegate::CreateUObject(this,&ThisClass::OnFindSessionComplete)),
	JoinSessionCompleteDelegate(FOnJoinSessionCompleteDelegate::CreateUObject(this,&ThisClass::OnJoinSessionComplete)),
	DestroySessionCompleteDelegate(FOnDestroySessionCompleteDelegate::CreateUObject(this,&ThisClass::OnDestroySessionComplete)),
	StartSessionCompleteDelegate(FOnStartSessionCompleteDelegate::CreateUObject(this,&ThisClass::OnStartSessionComplete))
{
	IOnlineSubsystem* Subsystem=IOnlineSubsystem::Get();
	if(Subsystem)
	{
		SessionInterface=Subsystem->GetSessionInterface();
	}
}

void UMutiplayerSessionsSystem::CreateSession(int32 NumPublicConnections, FString MatchType)
{
	if(!SessionInterface) return;
	auto ExistingSession=SessionInterface->GetNamedSession(NAME_GameSession);
	if(ExistingSession!=nullptr)
	{
		SessionInterface->DestroySession(NAME_GameSession);
	}
	CreateSessionCompleteDelegateHandle= SessionInterface->AddOnCreateSessionCompleteDelegate_Handle(CreateSessionCompleteDelegate);
	LastSessionSettings=MakeShareable(new FOnlineSessionSettings());
	//若有steam连接则SubSystemName为Steam
	LastSessionSettings->bIsLANMatch=IOnlineSubsystem::Get()->GetSubsystemName()=="NULL"?true:false;
	LastSessionSettings->NumPublicConnections=NumPublicConnections;
	LastSessionSettings->bAllowJoinInProgress=true;
	LastSessionSettings->bAllowJoinViaPresence=true;
	LastSessionSettings->bShouldAdvertise=true;
}

void UMutiplayerSessionsSystem::FindSession(int32 MaxSearchResults)
{
}

void UMutiplayerSessionsSystem::JoinSession(const FOnlineSessionSearchResult& SessoinResult)
{
}

void UMutiplayerSessionsSystem::StartSession()
{
}

void UMutiplayerSessionsSystem::DestroySession()
{
}

void UMutiplayerSessionsSystem::OnCreateSessionComplete(FName SessionNamw, bool bWasSuccessful)
{
}

void UMutiplayerSessionsSystem::OnFindSessionComplete(bool bWasSuccessful)
{
}

void UMutiplayerSessionsSystem::OnJoinSessionComplete(FName SessionName, EOnJoinSessionCompleteResult::Type Result)
{
}

void UMutiplayerSessionsSystem::OnDestroySessionComplete(FName SessionName, bool bWasSuccessful)
{
}

void UMutiplayerSessionsSystem::OnStartSessionComplete(FName SessionName, bool bWasSuccessful)
{
}
