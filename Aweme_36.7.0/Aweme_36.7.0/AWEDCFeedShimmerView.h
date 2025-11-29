@class AWEDCFeedShimmerViewUIConfig, CAGradientLayer;

@interface AWEDCFeedShimmerView : UIView

@property (retain, nonatomic) CAGradientLayer *maskLayer;
@property (nonatomic) BOOL shimmering;
@property (retain, nonatomic) AWEDCFeedShimmerViewUIConfig *uiConfig;
@property (nonatomic) long long shimmerDirection;

- (void)startShimming;
- (void)stopShimming;
- (void)beginShimmering;
- (void)endShimmering;
- (void)updateMaskColors;
- (void)updateMaskLayout;
- (void)createMaskIfNeeded;
- (id)createSliderAnimation;
- (void)configWithUIConfig:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;

@end
