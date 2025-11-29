@class MABaseOverlay;
@protocol MAOverlayRenderDelegate;

@interface MABaseRendererBridge : NSObject

@property (nonatomic) double rendererContentScale;
@property (retain, nonatomic) MABaseOverlay *overlay;
@property (nonatomic) double alpha;
@property (nonatomic) void *cppOverlayRenderer;
@property (weak, nonatomic) id<MAOverlayRenderDelegate> delegate;

- (union _GLKVector4 { struct { float x0; float x1; float x2; float x3; } x0; struct { float x0; float x1; float x2; float x3; } x1; struct { float x0; float x1; float x2; float x3; } x2; float x3[4]; })glColorFromUIColor:(id)a0;
- (void)initializeCppRenderer;
- (void)glRender;
- (id)initWithOverlay:(id)a0 renderer:(id)a1;
- (void)willRemove;
- (void)willAdd;
- (void).cxx_destruct;
- (void)dealloc;

@end
