// WideMelon's native display settings.
// Copyright (C) 2026 WideMelon contributors
// SPDX-License-Identifier: GPL-3.0-or-later
#pragma once

#include "CLI.h"

class QWidget;

namespace WideMelon
{

// Applies the saved profile, or a profile supplied through WIDEMELON_* for
// automated/headless use. Startup never waits for a configuration dialog.
void Configure(CLI::CommandLineOptions& options);

// Opens the saved WideMelon profile from the regular melonDS window. Renderer
// dimensions are process-wide, so changes take effect on the next launch.
void OpenSettings(QWidget* parent);

// Applies a profile supplied through WIDEMELON_* environment variables.
void ApplyEnvironmentProfile();

}
