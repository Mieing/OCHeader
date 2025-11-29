@class MAHeatMapVectorGridOverlay;

@interface MAHeatMapVectorGridOverlayRenderer : MAOverlayRenderer

@property (readonly, nonatomic) MAHeatMapVectorGridOverlay *heatOverlay;

- (void)glRender;
- (void)initializeRendererBridge;
- (id)initWithHeatOverlay:(id)a0;

@end
