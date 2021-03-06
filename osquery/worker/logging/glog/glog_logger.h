/**
 *  Copyright (c) 2014-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed in accordance with the terms specified in
 *  the LICENSE file found in the root directory of this source tree.
 */

#pragma once

#include <string>

#include <osquery/worker/logging/logger.h>

namespace osquery {
class GLOGLogger final : public Logger {
 public:
  static GLOGLogger& instance();
  void log(int severity, const std::string& message) override;
  void vlog(int severity, const std::string& message) override;
};
} // namespace osquery
