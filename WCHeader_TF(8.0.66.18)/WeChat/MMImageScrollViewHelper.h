@protocol MMImageScrollViewHelperDelegate;

@interface MMImageScrollViewHelper : NSObject

@property (nonatomic) BOOL dontCalcPreviewRect;
@property (nonatomic) double contentRatioY;
@property (nonatomic) BOOL noSingleTaps;
@property (nonatomic) BOOL noDoubleTaps;
@property (weak, nonatomic) id<MMImageScrollViewHelperDelegate> m_delegate;

- (id)init;
- (void)InitGestureRecognizer;
- (void)initHelper:(struct CGSize { double x0; double x1; })a0;
- (void)initHelper:(struct CGSize { double x0; double x1; })a0 orientation:(long long)a1 containSize:(struct CGSize { double x0; double x1; })a2;
- (void)initHelper:(struct CGSize { double x0; double x1; })a0 orientation:(long long)a1 containSize:(struct CGSize { double x0; double x1; })a2 allowFloat:(BOOL)a3;
- (void)initHelper:(struct CGSize { double x0; double x1; })a0 orientation:(long long)a1 containSize:(struct CGSize { double x0; double x1; })a2 rectImage:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)initHelper:(struct CGSize { double x0; double x1; })a0 orientation:(long long)a1;
- (void)dealloc;
- (void)onSingleTap:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })zoomRectForScale:(float)a0 withCenter:(struct CGPoint { double x0; double x1; })a1;
- (void)onDoubleTap:(id)a0;
- (void)ZoomForPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)scrollViewDidZoom:(id)a0;
- (void).cxx_destruct;

@end
