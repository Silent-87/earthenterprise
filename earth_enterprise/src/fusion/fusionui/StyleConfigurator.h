/*
 * Copyright 2017 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#ifndef KHSRC_FUSION_FUSIONUI_STYLECONFIGURATOR_H__
#define KHSRC_FUSION_FUSIONUI_STYLECONFIGURATOR_H__

#include <qscrollview.h>

class StyleConfigurator : public QScrollView {
  Q_OBJECT

 public:
  StyleConfigurator(QWidget* parent = 0, const char* name = 0, WFlags f = 0);
};

#endif  // !KHSRC_FUSION_FUSIONUI_STYLECONFIGURATOR_H__

