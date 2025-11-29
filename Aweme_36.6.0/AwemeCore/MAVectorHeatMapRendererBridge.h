@interface MAVectorHeatMapRendererBridge : MABaseRendererBridge

- (void *)cppRenderer;
- (void)initializeCppRenderer;
- (void)glRender;
- (void)doUpdate;
- (void)tryUpdateIfNeeed;
- (id)vectorHeatMapOverlay;
- (id)getHeatMapItem:(struct CLLocationCoordinate2D { double x0; double x1; })a0;

@end
