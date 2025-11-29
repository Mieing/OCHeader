@interface MAObjModelRendererBridge : MABaseRendererBridge

@property (nonatomic) BOOL fixedDisplaySizeEnabled;
@property (nonatomic) struct CGSize { double width; double height; } fixedDisplaySize;

- (void *)cppRenderer;
- (void)initializeCppRenderer;
- (void)glRender;
- (id)objModelOverlay;

@end
