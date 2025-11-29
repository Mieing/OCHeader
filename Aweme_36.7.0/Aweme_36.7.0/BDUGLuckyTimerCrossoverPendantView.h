@class NSString, NSTimer, UILabel, UIView;
@protocol BDUGLuckyPendantViewDelegate, BDUGLuckyTimerTaskContextProtocol;

@interface BDUGLuckyTimerCrossoverPendantView : UIView <BDUGLuckyPendantViewProtocol>

@property (retain, nonatomic) id<BDUGLuckyTimerTaskContextProtocol> context;
@property (weak, nonatomic) id<BDUGLuckyPendantViewDelegate> delegate;
@property (nonatomic) long long pendantStatus;
@property (retain, nonatomic) UIView *countDownView;
@property (retain, nonatomic) UIView *countDownTextView;
@property (retain, nonatomic) UIView *countDownTimeView;
@property (retain, nonatomic) UILabel *countDownTimeLabel;
@property (retain, nonatomic) UIView *completeView;
@property (retain, nonatomic) UIView *completeShortView;
@property (retain, nonatomic) UIView *loginView;
@property (retain, nonatomic) NSTimer *foldTimer;
@property (retain, nonatomic) NSTimer *dismissTimer;
@property (nonatomic) long long timeRemains;
@property (nonatomic) long long orien;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL needPlacePendantBySelf;
@property (copy, nonatomic) NSString *observerKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pendantStyle;
+ (void)registerPendantView;

- (void)__disableDismissTimer;
- (void)__dismiss;
- (void)__tapAction;
- (void)__disableFoldTimer;
- (void)__setupFoldTimer;
- (id)__createCornerRadiusLayerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)__foldAction;
- (void)updateTimerProgress:(double)a0;
- (void)updatePendantShowStatus:(BOOL)a0;
- (void)updateOrientation:(long long)a0;
- (void)__updatePendantStatusWithTimingStatus:(unsigned long long)a0;
- (void)__setupUI;
- (void)__onReceiveLoginEvent;
- (void)__onReceiveLogoutEvent;
- (BOOL)enableTimeFirst;
- (void)__resetFoldTimer;
- (id)__convertSecond:(long long)a0;
- (void)setupCountDownView;
- (void)__cleanupCountdownView;
- (void)__destroySelf;
- (void)__drawBorder;
- (void)__setupDismissTimer;
- (BOOL)__needLogin;
- (void)__manageTimer;
- (id)__createGradientLayerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithContext:(id)a0 delegate:(id)a1;

@end
