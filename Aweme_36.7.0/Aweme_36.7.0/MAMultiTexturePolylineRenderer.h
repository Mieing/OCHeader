@class MAMultiPolyline, NSArray;

@interface MAMultiTexturePolylineRenderer : MAPolylineRenderer

@property (readonly, nonatomic) MAMultiPolyline *multiPolyline;
@property (retain, nonatomic) NSArray *strokeTextureImages;

- (void)glRender;
- (void)initializeRendererBridge;
- (void)onDrawStyleUpdateNotification:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithMultiPolyline:(id)a0;

@end
