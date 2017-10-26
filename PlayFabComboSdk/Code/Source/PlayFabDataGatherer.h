﻿#pragma once

// #THIRD_KIND_PLAYFAB_DATA_GATHERER: gwatson (2017/09/12) - Added PlayFab data gatherer to send system information events to PlayFab on login

#include <AzCore/std/containers/unordered_map.h>

#include <PlayFabComboSdk/PlayFabBaseModel.h>

namespace PlayFab
{
    class PlayFabDataGatherer
    {
    public:
        using DataMap = AZStd::unordered_map<AZStd::string, PlayFabComboSdk::MultitypeVar>;

        PlayFabDataGatherer() = default;
        ~PlayFabDataGatherer() = default;

        void GatherData(DataMap& dataMap);
        AZStd::string GenerateReport(DataMap& dataMap);
    };
}
