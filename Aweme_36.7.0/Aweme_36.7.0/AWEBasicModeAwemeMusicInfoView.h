@class CAGradientLayer, NSString, UIImageView, AWEAwemeModel, UIView;

@interface AWEBasicModeAwemeMusicInfoView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *loopContainerView;
@property (retain, nonatomic) UIView *musicContainerView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) double containerViewWidth;
@property (nonatomic) double containerViewHeight;
@property (nonatomic) double subviewWidth;
@property (nonatomic) long long subviewCount;
@property (retain, nonatomic) UIImageView *musicLogoView;
@property (copy, nonatomic) NSString *musicLoopString;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;

- (double)widthWithLabelString:(id)a0;
- (id)subviewItemWithLabelString:(id)a0;
- (void)configRollingAnimationWithLabelString:(id)a0 awemeModel:(id)a1;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)resumeAnimation;
- (void)pauseAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
