@interface MAGltfOverlayRendererBridge : MABaseRendererBridge

- (void *)cppRenderer;
- (void)initializeCppRenderer;
- (void)glRender;
- (BOOL)hitTestWithScreenPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)shouldDecreaseFrame;
- (id)objModelOverlay;

@end
