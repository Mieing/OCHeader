@class BDASplashSemicircleButton, UIView, NSArray, BDASplashSemicircleNumView, CAReplicatorLayer, NSTimer, BDImageView, BDASplashButtonTouchModel, BDASplashSemicircleViewModel, UILabel;

@interface BDASplashSemicircleView : BDASplashComplianceBaseView

@property (retain, nonatomic) BDASplashSemicircleViewModel *viewModel;
@property (retain, nonatomic) UIView *squareView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (copy, nonatomic) NSArray *circleArray;
@property (retain, nonatomic) CAReplicatorLayer *breathReplicatorLayer;
@property (nonatomic) long long style;
@property (nonatomic) double beginTime;
@property (retain, nonatomic) BDASplashSemicircleButton *semicircleButton;
@property (nonatomic) BOOL needIgnoreDayLabel;
@property (copy, nonatomic) NSArray *circleColorArray;
@property (retain, nonatomic) BDImageView *atmosphereView;
@property (retain, nonatomic) UILabel *countdownTipsLabel;
@property (retain, nonatomic) UIView *countdownView;
@property (retain, nonatomic) BDASplashSemicircleNumView *dayView;
@property (retain, nonatomic) BDASplashSemicircleNumView *hourView;
@property (retain, nonatomic) BDASplashSemicircleNumView *minuteView;
@property (retain, nonatomic) BDASplashSemicircleNumView *secondView;
@property (retain, nonatomic) NSTimer *countDownTimer;
@property (nonatomic) long long deadline;
@property (retain, nonatomic) BDASplashButtonTouchModel *touchModel;

- (void)addGesture;
- (id)getSpecificControlsForAnimation;
- (void)addCustomView;
- (void)setupSensitivityInfo;
- (void)loadCountdownTimer;
- (void)updateSubviewLayout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewHolder:(id)a1 viewModel:(id)a2;
- (void)splashValidClickWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)loadCircleAnimation;
- (void)loadBreathAnimation;
- (void)setTipsText:(id)a0 textIndex:(long long)a1;
- (void)updateCountdownText;
- (void)setCountdownText;
- (void).cxx_destruct;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)stop;
- (void)updateConfig;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)cleanTimer;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)dealloc;

@end
