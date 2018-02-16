// Fill out your copyright notice in the Description page of Project Settings.

#include "RWTextFile.h"

bool URWTextFile::LoadTxt(FString FileNameA, FString& SaveTextA)
{
    return FFileHelper::LoadFileToString(SaveTextA, *(FPaths::GameDir() + FileName));
}

bool URWTextFile::SaveTxt(FString SaveTextA, FString FileNameA)
{
    return FFileHelper::SaveStringToFile(SaveText, *(FPaths::GameDir() + FileName));
}

