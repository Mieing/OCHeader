@class QGroundOverlay;

@interface QGroundOverlayView : QGLOverlayView

@property (readonly, nonatomic) QGroundOverlay *overlay;

- (id)initWithOverlay:(id)a0;

@end
