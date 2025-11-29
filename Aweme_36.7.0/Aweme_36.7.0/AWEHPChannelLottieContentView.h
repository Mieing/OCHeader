@class NSArray, LOTAnimationView, AWEHPChannelLottieParams, AWEHPLottiePlayParams;

@interface AWEHPChannelLottieContentView : UIView

@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL isValid;
@property (nonatomic) BOOL hasExit;
@property (nonatomic) BOOL hasFinishAnimation;
@property (nonatomic) long long status;
@property (retain, nonatomic) AWEHPChannelLottieParams *lottieParams;
@property (retain, nonatomic) AWEHPLottiePlayParams *playParams;
@property (copy, nonatomic) id /* block */ exitBlock;
@property (nonatomic) unsigned long long callSessionID;
@property (nonatomic) unsigned long long showingSessionID;
@property (retain, nonatomic) LOTAnimationView *showingLottieView;
@property (retain, nonatomic) LOTAnimationView *selectedDarkView;
@property (retain, nonatomic) LOTAnimationView *selectedLightView;
@property (retain, nonatomic) LOTAnimationView *unselectedDarkView;
@property (retain, nonatomic) LOTAnimationView *unselectedLightView;
@property (retain, nonatomic) NSArray *lottieViews;
@property (readonly, nonatomic) double ratio;
@property (nonatomic) BOOL autoClipsAndHide;
@property (copy, nonatomic) id /* block */ lottieRectBlock;

- (void)hideLottie;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ratio:(double)a1;
- (void)updateRatio:(double)a0;
- (void)showLottieWithParams:(id)a0 playParams:(id)a1 showCallBack:(id /* block */)a2 exitCallBack:(id /* block */)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })lottieContentRect;
- (void)p_layoutContentView;
- (void)p_updateStatus:(long long)a0;
- (void)p_updateLottieWithParams:(id)a0 playParams:(id)a1 selectedDarkView:(id)a2 selectedLightView:(id)a3 unselectedDarkView:(id)a4 unselectedLightView:(id)a5 exitBlock:(id /* block */)a6;
- (void)p_downloadLottieWithURL:(id)a0 completion:(id /* block */)a1;
- (void)p_updateShowingLottieView:(id)a0;
- (void)p_updateShowing;
- (void)p_exitLottie;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })lottieRect;
- (void).cxx_destruct;
- (void)updateStatus:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)didMoveToWindow;

@end
