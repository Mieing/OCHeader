@class QGLOverlay;

@interface QGLOverlayView : QOverlayView

@property (readonly, nonatomic) QGLOverlay *overlay;

- (id)initWithOverlay:(id)a0;
- (void)setZIndex:(int)a0;
- (int)zIndex;
- (void)setDisplayLevel:(long long)a0;
- (long long)displayLevel;

@end
