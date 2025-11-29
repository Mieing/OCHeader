@class UIImageView;

@interface AWEDeliveryIndicatorView : UIView

@property (nonatomic) BOOL isAnimating;
@property (retain, nonatomic) UIImageView *indicatorImageView;

+ (void)stopAfterSecond:(double)a0 block:(id /* block */)a1;

- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
