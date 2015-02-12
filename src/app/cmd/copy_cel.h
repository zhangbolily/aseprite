// Aseprite
// Copyright (C) 2001-2015  David Capello
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation.

#ifndef APP_CMD_COPY_CEL_H_INCLUDED
#define APP_CMD_COPY_CEL_H_INCLUDED
#pragma once

#include "app/cmd/with_layer.h"
#include "app/cmd_sequence.h"
#include "doc/color.h"
#include "doc/frame.h"

namespace doc {
  class LayerImage;
}

namespace app {
namespace cmd {
  using namespace doc;

  class CopyCel : public CmdSequence {
  public:
    CopyCel(
      LayerImage* srcLayer, frame_t srcFrame,
      LayerImage* dstLayer, frame_t dstFrame);

  protected:
    void onExecute() override;
    void onFireNotifications() override;

  private:
    WithLayer m_srcLayer, m_dstLayer;
    frame_t m_srcFrame, m_dstFrame;
  };

} // namespace cmd
} // namespace app

#endif
