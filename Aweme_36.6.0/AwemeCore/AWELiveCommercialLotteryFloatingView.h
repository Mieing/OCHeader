@class AWECommerceLiveComponentModel, UIImageView, NSTimer, UIView, UILabel, UIButton;

@interface AWELiveCommercialLotteryFloatingView : UIView <HTSLivePluginLayoutView>

@property (retain, nonatomic) UIButton *lotteryButton;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UILabel *countLabel;
@property (nonatomic) BOOL shouldActivate;
@property (retain, nonatomic) UIView *centerBgView;
@property (retain, nonatomic) UIView *bgImageSizeView;
@property (retain, nonatomic) NSTimer *countdownTimer;
@property (retain, nonatomic) AWECommerceLiveComponentModel *componentModel;
@property (nonatomic) long long countdownTime;
@property (copy, nonatomic) id /* block */ countdownCompletionBlock;

- (void)updateTime:(long long)a0;
- (void)configWithComponentModel:(id)a0;
- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (void)startShowAnimation:(id /* block */)a0;
- (void)showTimeCountdown;
- (void).cxx_destruct;
- (void)invalidateTimer;
- (id)viewType;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)fontDescriptor;
- (void)dealloc;
- (void)countdown;

@end
