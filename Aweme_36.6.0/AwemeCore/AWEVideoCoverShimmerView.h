@class CAGradientLayer;

@interface AWEVideoCoverShimmerView : UIView

@property (retain, nonatomic) CAGradientLayer *maskLayer;
@property (nonatomic) BOOL shimmering;

- (void)startShimming;
- (void)beginShimmering;
- (void)updateMaskColors;
- (void)updateMaskLayout;
- (void)createMaskIfNeeded;
- (id)createSliderAnimation;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
