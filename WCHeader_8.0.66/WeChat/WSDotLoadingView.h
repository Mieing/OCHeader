@class NSMutableArray;

@interface WSDotLoadingView : UIView {
    NSMutableArray *_dots;
    BOOL _animating;
    struct CGSize { double width; double height; } _dotSize;
}

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)ensureDotsPathCreated;
- (void)resetPos;
- (void)setDetachDistance:(double)a0;
- (id)fadeInAnimation:(double)a0;
- (BOOL)isDotAnimationRemoved;
- (void)startLoading;
- (void)stopLoading;
- (void).cxx_destruct;

@end
