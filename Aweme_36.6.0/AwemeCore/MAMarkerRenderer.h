@class MAMarker;
@protocol MAMarkerRendererDelegate;

@interface MAMarkerRenderer : MAOverlayRenderer

@property (weak, nonatomic) id<MAMarkerRendererDelegate> delegate;
@property (readonly, nonatomic) MAMarker *marker;

- (void)glRender;
- (void)initializeRendererBridge;
- (void)onTappedWithPoint:(struct MAMapPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithOverlay:(id)a0;

@end
