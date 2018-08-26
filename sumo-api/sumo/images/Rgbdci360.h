/*
Copyright (c) Facebook, Inc. and its affiliates.

This source code is licensed under the MIT license found in the
LICENSE file in the root directory of this source tree.
*/

#pragma once

#include <opencv2/core/core.hpp>

namespace sumo {

class PointCloud;

/**
 * Create point cloud from RGBD.
 *      rgb -- 3-channel uint8 RGB image
 *      depth -- 1-channel float32 depth image
 * Returns newly allocated PointCloud instance.
 */
PointCloud* createPointCloud(const cv::Mat3b& rgb, const cv::Mat1f& depth,
  bool all_points);



} // sumo
