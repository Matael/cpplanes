/*
 * types.h
 *
 * This file is part of cpplanes, a software distributed under the MIT license.
 * For any question, please contact one of the authors cited below.
 *
 * Copyright (c) 2017
 * 	Olivier Dazel <olivier.dazel@univ-lemans.fr>
 * 	Mathieu Gaborit <gaborit@kth.se>
 * 	Peter Göransson <pege@kth.se>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 */

#pragma once

#include <complex>

#include <Eigen/Dense>

namespace cpplanes {
	using real_t = long double;
	using cplx_t = std::complex<real_t>;

	using VectorXr = Eigen::Matrix<real_t, Eigen::Dynamic, 1>;
	using Vector2r = Eigen::Matrix<real_t, 2, 1>;
	using VectorXc = Eigen::Matrix<cplx_t, Eigen::Dynamic, 1>;

	using MatrixXr = Eigen::Matrix<real_t, Eigen::Dynamic, Eigen::Dynamic>;
	using Matrix2r = Eigen::Matrix<real_t, 2,  2>;
	using MatrixXc = Eigen::Matrix<cplx_t, Eigen::Dynamic, Eigen::Dynamic>;
}

