@class MAObjModelOverlay;

@interface MAObjModelOverlayRenderer : MAOverlayRenderer

@property (readonly, nonatomic) MAObjModelOverlay *objModelOverlay;
@property (nonatomic) BOOL fixedDisplaySize;

- (void)glRender;
- (void)initializeRendererBridge;
- (id)initWithObjModelOverlay:(id)a0;

@end
