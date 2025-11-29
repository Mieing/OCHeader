@class CAGradientLayer, AWEDetailShimmerViewColor;

@interface AWEDetailShimmerView : UIView

@property (retain, nonatomic) CAGradientLayer *maskLayer;
@property (nonatomic) BOOL shimmering;
@property (nonatomic) long long preferredThemeStyle;
@property (nonatomic) long long shimmerDirection;
@property (retain, nonatomic) AWEDetailShimmerViewColor *color;

- (void)startShimming;
- (void)stopShimming;
- (void)beginShimmering;
- (void)endShimmering;
- (void)updateMaskColors;
- (void)updateMaskLayout;
- (void)createMaskIfNeeded;
- (id)createSliderAnimation;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
