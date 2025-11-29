@class ChatBotAnimatedWaveView, NSString, MMWebImageView, CABasicAnimation, ChatBotBrandCircularProgressBar;

@interface ChatBotBrandHeadImageView : UIView <CAAnimationDelegate>

@property (nonatomic) BOOL isAnimating;
@property (retain, nonatomic) CABasicAnimation *pulseAnimation;
@property (nonatomic) BOOL shouldStopAfterCurrentCycle;
@property (nonatomic) BOOL isInScaleDownPhase;
@property (retain, nonatomic) ChatBotBrandCircularProgressBar *progressBar;
@property (retain, nonatomic) ChatBotAnimatedWaveView *waveView;
@property (retain, nonatomic) MMWebImageView *headImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)setupUI;
- (void)startProgressBarAnimation;
- (void)stopProgressBarAnimation;
- (void)drawProgressWithContext:(struct CGContext { } *)a0 Radius:(double)a1 Progress:(double)a2;
- (void)setImageWithUrlStr:(id)a0;
- (void)startPulseAnimation;
- (void)stopPulseAnimation;
- (void).cxx_destruct;

@end
