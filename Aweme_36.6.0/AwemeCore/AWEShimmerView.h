@class CALayer, CAGradientLayer, UIView;

@interface AWEShimmerView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) CALayer *contentLayer;
@property (retain, nonatomic) CAGradientLayer *maskLayer;
@property (nonatomic) BOOL shimmering;
@property (nonatomic) double shimmerSpeed;
@property (nonatomic) unsigned long long shimmerDirection;
@property (nonatomic) double shimmerAnimationAlpha;

- (void)setUI;
- (void)beginShimmering;
- (void)endShimmering;
- (void)updateMaskColors;
- (void)updateMaskLayout;
- (void)createMaskIfNeeded;
- (id)createSliderAnimation;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)layoutSubviews;
- (id)initWithContentView:(id)a0;

@end
