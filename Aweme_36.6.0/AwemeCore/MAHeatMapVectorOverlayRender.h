@class MAHeatMapVectorOverlay;

@interface MAHeatMapVectorOverlayRender : MAOverlayRenderer

@property (readonly, nonatomic) MAHeatMapVectorOverlay *heatOverlay;

- (void)glRender;
- (void)initializeRendererBridge;
- (id)getHeatMapItem:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (id)initWithHeatOverlay:(id)a0;

@end
