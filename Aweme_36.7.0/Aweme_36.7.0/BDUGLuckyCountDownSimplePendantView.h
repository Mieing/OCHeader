@class NSString, NSTimer, UILabel, UIView, BDUGLuckyCountDownPendantModel;

@interface BDUGLuckyCountDownSimplePendantView : UIView <BDUGLuckyCountDownPendantViewInternalProtocol>

@property (nonatomic) long long pendantStatus;
@property (retain, nonatomic) UIView *countDownView;
@property (retain, nonatomic) UIView *countDownTextView;
@property (retain, nonatomic) UIView *countDownTimeView;
@property (retain, nonatomic) UILabel *countDownTimeLabel;
@property (retain, nonatomic) UIView *completeView;
@property (retain, nonatomic) UIView *completeShortView;
@property (retain, nonatomic) BDUGLuckyCountDownPendantModel *model;
@property (retain, nonatomic) NSTimer *foldTimer;
@property (retain, nonatomic) NSTimer *dismissTimer;
@property (nonatomic) long long timeRemains;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL needPlacePendantBySelf;
@property (copy, nonatomic) NSString *observerKey;
@property (nonatomic) long long countTime;
@property (nonatomic) long long pauseExtendFrequency;
@property (copy, nonatomic) id /* block */ didTapPendantView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)manageTimer;
- (void)resetFoldTimer;
- (void)updateWithCountTime:(long long)a0;
- (BOOL)shouldUpdateToPause;
- (void)setupCountDownTimeViewWithPendantStatus:(long long)a0;
- (id)convertSecond:(long long)a0;
- (void)setupCountDownViewWithPendantStatus:(long long)a0;
- (void)cleanupCountdownView;
- (void)destroySelf;
- (id)createCornerRadiusLayerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)replacePlaceholderWithTime:(id)a0;
- (void)configCountDownTextViewWithStatus:(long long)a0;
- (id)textForStatus:(long long)a0;
- (void)disableFoldTimer;
- (void)disableDismissTimer;
- (void)foldAction;
- (void)setupFoldTimer;
- (void)setupDismissTimer;
- (long long)durationOfPauseHide;
- (void)updateFrameWithPosition:(id)a0 superviewWidth:(double)a1 superviewHeight:(double)a2;
- (void)startLuckyCountDownTimer;
- (void)stopLuckyCountDownTimer;
- (void)registerTapHandler:(id /* block */)a0;
- (void)registerCloseIconTapHandler:(id /* block */)a0;
- (void)updatePauseExtendFrequency:(long long)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (void)hide;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)show;
- (void)setupUI;
- (void)updateWithModel:(id)a0;
- (void)tapAction;
- (void)updateWithStatus:(unsigned long long)a0;

@end
