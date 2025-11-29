@interface MAMarkerRendererBridge : MABaseRendererBridge

- (void *)cppRenderer;
- (void)initializeCppRenderer;
- (void)glRender;
- (void)doUpdate;
- (void)onTappedWithPoint:(struct MAMapPoint { double x0; double x1; })a0 callback:(id /* block */)a1;
- (id)marker;

@end
