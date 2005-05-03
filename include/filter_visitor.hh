/* This file is part of Mapnik (c++ mapping toolkit)
 * Copyright (C) 2005 Artem Pavlenko
 *
 * Mapnik is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */

#ifndef FILTER_VISITOR_HH
#define FILTER_VISITOR_HH

#include "filter.hh"
#include "expression.hh"

namespace mapnik
{
    template <typename FeatureT> class filter;
    template <typename FeatureT> class expression;
    template <typename FeatureT>
    struct filter_visitor
    {
	virtual void visit(filter<FeatureT>& filter)=0;
	virtual void visit(expression<FeatureT>&)=0;
	virtual ~filter_visitor() {}
    };    
}

#endif //FILTER_VISITOR_HH
