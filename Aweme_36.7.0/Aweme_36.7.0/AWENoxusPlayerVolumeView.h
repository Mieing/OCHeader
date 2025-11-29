@class CAGradientLayer, MPVolumeView, UIImageView, NSString, UIView;

@interface AWENoxusPlayerVolumeView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *animationImageView;
@property (retain, nonatomic) CAGradientLayer *progressGradientLayer;
@property (retain, nonatomic) UIView *progressBgView;
@property (retain, nonatomic) UIView *progressView;
@property (retain, nonatomic) MPVolumeView *systemVolumeView;
@property (copy, nonatomic) NSString *lastIconName;
@property (nonatomic) double preVolume;
@property (nonatomic) BOOL isAnimating;
@property (retain, nonatomic) UIView *effectView;
@property (nonatomic) double lastInterval;
@property (nonatomic) BOOL isShowing;

- (void)dismissWithAnimated:(BOOL)a0;
- (void)showNewVolume:(double)a0;
- (void)changeSystemVolume:(double)a0;
- (void)handleToMuteVolumeChange;
- (void)handleToLessVolumeChange;
- (id)systemVolumeSlider;
- (void)dismiss;
- (void).cxx_destruct;
- (id)init;
- (double)currentVolume;
- (void)initUI;

@end
