@interface MAParticleOverlayRendererBridge : MABaseRendererBridge

- (void *)cppRenderer;
- (void)initializeCppRenderer;
- (void)glRender;
- (void)doUpdate;
- (void)tryUpdateIfNeeed;
- (id)particleOverlay;

@end
