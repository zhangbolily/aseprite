// Aseprite
// Copyright (C) 2001-2015  David Capello
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation.

#ifndef APP_CMD_BACKGROUND_FROM_LAYER_H_INCLUDED
#define APP_CMD_BACKGROUND_FROM_LAYER_H_INCLUDED
#pragma once

#include "app/cmd/with_layer.h"
#include "app/cmd_sequence.h"

namespace app {
namespace cmd {
  using namespace doc;

  class BackgroundFromLayer : public CmdSequence
                            , public WithLayer {
  public:
    BackgroundFromLayer(Layer* layer);

  protected:
    void onExecute() override;
  };

} // namespace cmd
} // namespace app

#endif
