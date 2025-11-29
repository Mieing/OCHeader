@class NSDate, NSString, UIView, AWEFeedLongPressPinchHotAreaGuideView, UILongPressGestureRecognizer;
@protocol AFDFastSpeedViewProtocol;

@interface AFDPureModePageLongPressFastSpeedController : AWEBaseController <AFDPureModePageControllerProtocol, UIGestureRecognizerDelegate, AWEFastSpeedControllerProtocol>

@property (nonatomic) double speedBeforeLongPress;
@property (copy, nonatomic) NSString *enterMethodBeforeLongPress;
@property (retain, nonatomic) UIView<AFDFastSpeedViewProtocol> *longPressFastSpeedView;
@property (nonatomic) struct CGPoint { double x; double y; } tappedPointWhenLongPressStart;
@property (nonatomic) struct CGPoint { double x; double y; } tappedPointWhenLongPressEnd;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressFastSpeedGesture;
@property (retain, nonatomic) AWEFeedLongPressPinchHotAreaGuideView *pinchHotAreaGuideView;
@property (nonatomic) BOOL isShake;
@property (nonatomic) BOOL isCanLock;
@property (retain, nonatomic) NSDate *touchStartTime;
@property (nonatomic) BOOL isSwipeDown;
@property (nonatomic) BOOL isEnableLockSwipeUp;
@property (retain, nonatomic) NSString *richContentEnterMethodBeforeLongPress;
@property (weak, nonatomic) UILongPressGestureRecognizer *realGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long gestureFrom;

+ (Class)aAWEPadPureModeAdapterClass;

- (void)containerDidUpdateVideoController:(id)a0;
- (void)didOuterPinchTransitionFinish;
- (void)inner_pinchTransitionDidFinish;
- (void)setClearScreen:(BOOL)a0;
- (void)longPressSpeedControlDidChangeSpeed:(id)a0;
- (void)setUpEvent;
- (BOOL)shouldShowFastSpeed:(id)a0;
- (void)triggerForAlbumFastPlay;
- (void)hidePinchHotAreaGuideViewIfNeeded;
- (void)handleGestureBegin:(id)a0;
- (BOOL)canShowLockSpeed;
- (void)hideSwipeDownGuideViewIfNeeded;
- (void)handleLongPressLockedDoubleSpeedChanged:(struct CGPoint { double x0; double x1; })a0 gesture:(id)a1;
- (void)handleLongPressFastSpeedEnd:(struct CGPoint { double x0; double x1; })a0;
- (void)handleLongPressLockedDoubleSpeedEnded:(struct CGPoint { double x0; double x1; })a0;
- (id)aAWEPadPureModeAdapter;
- (void)trackSpeedModePlayTimeWithLongPressStart:(BOOL)a0;
- (void)trackLongPressChangeSpeedMode:(double)a0 model:(id)a1 params:(id)a2;
- (void)setLongPressSpeedShowText;
- (void)showSwipeDownGuideViewIfNeeded;
- (BOOL)shouldShowLockedDoubleSpeed;
- (long long)getLockSpeedGuideCount;
- (void)setLockSpeedGuideCount;
- (id)getBottomLockSpeedTriggerText;
- (id)lockingEnterMethod;
- (id)getLockSpeedGuideKey;
- (void)changeEnterMethodForLockSpeed;
- (id)changeModeEnterMethod;
- (BOOL)enableEdgeFastSpeedToastStyle;
- (void)handleLongPressFastSpeed:(id)a0;
- (void)handleLongPressFastSpeedStart:(struct CGPoint { double x0; double x1; })a0;
- (void)handleLongPressLockedSpeedBegan;
- (void)showPinchHotAreaGuideViewIfNeeded;
- (BOOL)enableToSpeedControl;
- (void)changeSpeed:(double)a0;
- (double)longPressFastSpeedValue;
- (id)model;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)viewDidLoad;
- (void)dealloc;

@end
