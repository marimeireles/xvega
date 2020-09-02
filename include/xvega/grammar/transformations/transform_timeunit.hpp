// Copyright (c) 2020, QuantStack and XVega Contributors
//
// Distributed under the terms of the BSD 3-Clause License.
//
// The full license is in the file LICENSE, distributed with this software.

#ifndef XVEGA_TRANSFORM_TIMEUNIT_HPP
#define XVEGA_TRANSFORM_TIMEUNIT_HPP

#include <xproperty/xobserved.hpp>
#include <xtl/xoptional.hpp>
#include <xtl/xvariant.hpp>
#include <xtl/xjson.hpp>
#include <nlohmann/json.hpp>

#include "../../xvega_config.hpp"
#include "../../utils/serialize.hpp"

namespace nl = nlohmann;

namespace xv
{
    struct transform_timeunit : public xp::xobserved<transform_timeunit>
    {
        XPROPERTY(xtl::xoptional<std::string>, transform_timeunit, field);
        XPROPERTY(xtl::xoptional<std::string>, transform_timeunit, as);
        XPROPERTY(xtl::xoptional<std::string>, transform_timeunit, timeUnit);
    };

    void to_json(nl::json& j, const transform_timeunit& data);
}

#endif