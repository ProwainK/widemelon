<!-- Copyright (C) 2026 WideMelon contributors -->
<!-- SPDX-License-Identifier: GPL-3.0-or-later -->

# WideMelon 1.0.4

## Added

- Smoother phone-screen streaming on higher-latency networks.
- More phone bridge diagnostics for latency, buffered frames, timeouts, and
  disconnect reasons.

## Fixed

- Delayed frame and heartbeat replies no longer disconnect healthy phone
  sessions or unnecessarily limit the stream frame rate.
- Stalled phone video connections keep a bounded backlog and recover or
  reconnect cleanly without accumulating stale frames.
- Remote buttons and touch release safely when input updates stop.
- Phone screen settings keep the network controls visible without awkward
  scrolling, including on smaller displays and Qt 5 builds.
