// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef VP8_PICTURE_H_
#define VP8_PICTURE_H_

#include "base/macros.h"
#include "base/memory/ref_counted.h"

namespace media {

class V4L2VP8Picture;

class VP8Picture : public base::RefCounted<VP8Picture> {
 public:
  VP8Picture();

  virtual V4L2VP8Picture* AsV4L2VP8Picture();

 protected:
  friend class base::RefCounted<VP8Picture>;
  virtual ~VP8Picture();

  DISALLOW_COPY_AND_ASSIGN(VP8Picture);
};

}  // namespace media

#endif  // VP8_PICTURE_H_
