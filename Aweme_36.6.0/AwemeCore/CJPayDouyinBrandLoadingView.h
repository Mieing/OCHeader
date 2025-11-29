@class CJPayLottieView, CAGradientLayer, UIColor, UILabel;

@interface CJPayDouyinBrandLoadingView : UIView

@property (retain, nonatomic) CJPayLottieView *currentLottieView;
@property (nonatomic) long long lottieViewSize;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic, getter=isShining) BOOL shining;
@property (nonatomic) long long viewType;
@property (retain, nonatomic) UIColor *titleColor;
@property (nonatomic) long long titleFont;
@property (nonatomic) double layerSideColorAlpha;
@property (nonatomic) double layerCenterColorAlpha;
@property (nonatomic) double animationStartTime;
@property (nonatomic) double animationTotalDuration;

- (void)p_initData;
- (double)getViewHeight;
- (double)currentAnimationProgress;
- (void)p_addShineAnimation;
- (void)p_startTitleAnimation;
- (void)p_setupUI;
- (void)startAnimation;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (void)setTitle:(id)a0;

@end
