@class MAMultiPolyline, NSArray;

@interface MAMultiColoredPolylineRenderer : MAPolylineRenderer

@property (readonly, nonatomic) MAMultiPolyline *multiPolyline;
@property (retain, nonatomic) NSArray *strokeColors;
@property (nonatomic, getter=isGradient) BOOL gradient;

- (void)glRender;
- (void)initializeRendererBridge;
- (BOOL)checkStrokeColors:(id)a0;
- (void)onDrawStyleUpdateNotification:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithMultiPolyline:(id)a0;

@end
