// Copyright (c) 2020, QuantStack and XVega Contributors
//
// Distributed under the terms of the BSD 3-Clause License.
//
// The full license is in the file LICENSE, distributed with this software.

#ifndef XVEGA_MARK_CIRCLE_HPP
#define XVEGA_MARK_CIRCLE_HPP

#include "../marks.hpp"

namespace xv
{
    struct mark_circle : public mark<mark_circle>
    {
        using base_type = mark<mark_circle>;

        // Circle Mark Properties
        XPROPERTY(xtl::xoptional<double>, mark_circle, size);

        mark_circle()
        {
            type = "circle";
        }

        void to_json(nl::json& j) const
        {
            base_type::to_json(j);
            // Fill in Circle Mark Properties
            serialize(j, size(), "size");
        }
    };
}

#endif