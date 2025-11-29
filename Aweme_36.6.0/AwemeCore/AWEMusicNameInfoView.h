@class CAGradientLayer, NSString, UIImageView, UIView;

@interface AWEMusicNameInfoView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *loopContainerView;
@property (retain, nonatomic) UIView *musicContainerView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIImageView *musicLogoView;
@property (copy, nonatomic) NSString *musicLoopString;
@property (nonatomic) double containerViewWidth;
@property (nonatomic) double containerViewHeight;
@property (nonatomic) double subviewWidth;
@property (nonatomic) long long subviewCount;
@property (nonatomic) BOOL isDisableStyle;

- (double)widthWithLabelString:(id)a0;
- (id)subviewItemWithLabelString:(id)a0;
- (void)configRollingAnimationWithLabelString:(id)a0;
- (void)addViewTapTarget:(id)a0 action:(SEL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
