// Copyright (c) 2020, QuantStack and XVega Contributors
//
// Distributed under the terms of the BSD 3-Clause License.
//
// The full license is in the file LICENSE, distributed with this software.

#include "xvega/grammar/transformations/transform_aggregate.hpp"
#include "../../utils/serialize.hpp"

namespace xv
{
    void to_json(nl::json& j, const aggregate_field_def& data)
    {
        serialize(j, data.as(), "as");
        serialize(j, data.field(), "field");
        serialize(j, data.op(), "op");
    }

    void to_json(nl::json& j, const transform_aggregate& data)
    {
        serialize(j, data.aggregate(), "aggregate");
        serialize(j, data.groupby(), "groupby");
    }
}