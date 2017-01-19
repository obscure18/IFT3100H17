// IFT3100H17_ImageImport/application.h
// Classe principale de l'application.

#pragma once

#include "ofMain.h"

#include "renderer.h"

class Application : public ofBaseApp
{
public:

  Renderer * renderer;

  Application();

  void setup();
  void draw();

  void windowResized(int w, int h);

  void dragEvent(ofDragInfo dragInfo);

  void exit();

  ~Application();
};
