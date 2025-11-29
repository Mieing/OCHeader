@class QModelOverlay;

@interface QModelOverlayView : QGLOverlayView

@property (readonly, nonatomic) QModelOverlay *overlay;

- (id)initWithOverlay:(id)a0;

@end
