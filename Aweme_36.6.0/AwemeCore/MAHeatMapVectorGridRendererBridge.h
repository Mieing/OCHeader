@interface MAHeatMapVectorGridRendererBridge : MABaseRendererBridge

- (void *)cppRenderer;
- (void)initializeCppRenderer;
- (void)glRender;
- (void)doUpdate;
- (void)tryUpdateIfNeeed;
- (id)vectorHeatMapOverlay;

@end
