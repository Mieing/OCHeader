@class NSArray;

@interface MAMultiColorPolylineRendererBridge : MAPolylineRendererBridge {
    NSArray *_normDrawStyleArr;
    NSArray *_normDrawStyleIndexArr;
}

@property (retain, nonatomic) NSArray *strokeColors;
@property (nonatomic, getter=isGradient) BOOL gradient;

- (void *)cppRenderer;
- (void)initializeCppRenderer;
- (void)glRender;
- (BOOL)checkStrokeColors:(id)a0;
- (void).cxx_destruct;
- (id)multiPolyline;

@end
