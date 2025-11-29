@class MAGroundOverlay;

@interface MAGroundOverlayRenderer : MAOverlayRenderer

@property (readonly, nonatomic) MAGroundOverlay *groundOverlay;

- (void)glRender;
- (void)initializeRendererBridge;
- (id)initWithGroundOverlay:(id)a0;

@end
