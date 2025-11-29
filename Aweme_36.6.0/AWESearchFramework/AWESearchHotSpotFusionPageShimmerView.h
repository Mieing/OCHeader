@class CALayer, CAGradientLayer, UIView;

@interface AWESearchHotSpotFusionPageShimmerView : UIView

@property (nonatomic) double shimmerSpeed;
@property (nonatomic) unsigned long long shimmerDirection;
@property (nonatomic) double shimmerAnimationAlpha;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) CALayer *contentLayer;
@property (retain, nonatomic) CAGradientLayer *maskLayer;
@property (nonatomic) BOOL shimmering;

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
