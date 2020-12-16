/*!
 * @section LICENSE
 *
 * @copyright
 * Copyright (c) 2016-2017 Intel Corporation
 *
 * @copyright
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * @copyright
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * @copyright
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * @section DESCRIPTION
 *
 * @file command/pnc/get_zone_info.cpp
 *
 * @brief Pnc request get zone information implementation
 * */

#include "agent-framework/module/requests/pnc/get_zone_info.hpp"
#include "agent-framework/module/constants/pnc.hpp"
#include <json/json.h>

using namespace agent_framework::model::requests;
using namespace agent_framework::model::literals;

GetZoneInfo::GetZoneInfo(const std::string& zone): m_zone{zone} {}

Json::Value GetZoneInfo::to_json() const {
    Json::Value value;
    value[Zone::ZONE] = m_zone;
    return value;
}

GetZoneInfo GetZoneInfo::from_json(const Json::Value& json) {
    return GetZoneInfo{json[Zone::ZONE].asString()};
}
