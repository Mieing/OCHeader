@class CAGradientLayer, NSString, UIImageView, UIView;

@interface AWENoxusPlayerBrightnessView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *animationImageView;
@property (retain, nonatomic) CAGradientLayer *progressGradientLayer;
@property (retain, nonatomic) UIView *progressBgView;
@property (retain, nonatomic) UIView *progressView;
@property (copy, nonatomic) NSString *lastIconName;
@property (nonatomic) BOOL isAnimating;
@property (retain, nonatomic) UIView *effectView;
@property (nonatomic) BOOL isShowing;

- (void)dismissWithAnimated:(BOOL)a0;
- (void)changeSystemBrightness:(double)a0;
- (void)handleToNoLightBrightnessChange;
- (void)handleToLessBrightnessChange;
- (void)showNewBrightness:(double)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (id)init;
- (double)currentBrightness;
- (void)initUI;

@end
