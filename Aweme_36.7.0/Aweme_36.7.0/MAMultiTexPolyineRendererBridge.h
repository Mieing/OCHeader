@class NSArray;

@interface MAMultiTexPolyineRendererBridge : MAPolylineRendererBridge {
    NSArray *_normDrawStyleArr;
    NSArray *_normDrawStyleIndexArr;
}

@property (retain, nonatomic) NSArray *strokeTextureImages;

- (void *)cppRenderer;
- (void)initializeCppRenderer;
- (void)glRender;
- (void).cxx_destruct;
- (id)multiPolyline;

@end
