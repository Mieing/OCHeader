@class UIColor, NSMutableArray;

@interface DotLoadingView : UIView {
    long long _dotStyle;
    UIColor *_dotColor;
    NSMutableArray *_dots;
    BOOL _animating;
}

@property (nonatomic) struct CGSize { double width; double height; } dotSize;
@property (nonatomic) double separatorDistance;
@property (nonatomic) BOOL hidesWhenStopped;

+ (id)getDotColor:(long long)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dotStyle:(long long)a1 dotColor:(long long)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dotStyle:(long long)a1 dotColor:(long long)a2 dotSize:(struct CGSize { double x0; double x1; })a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dotStyle:(long long)a1 dotUIColor:(id)a2 dotSize:(struct CGSize { double x0; double x1; })a3;
- (void)ensureDotsPathCreated;
- (void)resetPos;
- (id)createDotPath;
- (id)fadeInAnimation:(double)a0;
- (void)forceStartLoading;
- (void)startLoading;
- (void)stopLoading;
- (BOOL)isLoading;
- (void)setDetachDistance:(double)a0;
- (void).cxx_destruct;

@end
