@class UIColor, CAGradientLayer, UIImageView, NSTimer, UILabel, UIView;

@interface AWEGrouponLifeFeedsScrollGuideWidgetView : UIButton

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIView *countdownBarBgView;
@property (retain, nonatomic) UIView *countdownFillView;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) NSTimer *countdownTimer;
@property (retain, nonatomic) UIColor *countdownBarBgColor;
@property (retain, nonatomic) CAGradientLayer *barGradientLayer;
@property (retain, nonatomic) UIView *borderView;
@property (retain, nonatomic) CAGradientLayer *borderGradientLayer;
@property (nonatomic) float totalCountdownSeconds;
@property (nonatomic) float remainingSeconds;

- (void)setupDefaultConfig;
- (void)updateCountdownWithScrollTime:(double)a0;
- (void)updateCountdownFillProgress:(double)a0;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithDuration:(float)a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
