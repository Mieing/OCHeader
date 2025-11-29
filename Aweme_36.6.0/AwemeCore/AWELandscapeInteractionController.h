@class AWEFeedLongPressRatePlayView, NSString, NSTimer, UILongPressGestureRecognizer;
@protocol AWEDPlayerGradientControllerProtocol;

@interface AWELandscapeInteractionController : AWELandscapeInteractionBaseController <AWELandscapeInteractionControllerProtocol>

@property (nonatomic) long long state;
@property (nonatomic) double topHeight;
@property (retain, nonatomic) NSTimer *quietTimer;
@property (nonatomic) BOOL isAutoEnterQuietState;
@property (nonatomic) BOOL isShowingReminder;
@property (weak, nonatomic) UILongPressGestureRecognizer *longPressGesture;
@property (weak, nonatomic) id<AWEDPlayerGradientControllerProtocol> gradientController;
@property (retain, nonatomic) AWEFeedLongPressRatePlayView *ratePlayView;
@property (nonatomic) BOOL disablePanGesture;
@property (nonatomic) BOOL disableDoubleTap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)activateType;
- (long long)interactionViewState;
- (void)afterSetData:(id)a0;
- (BOOL)shouldFailedGestureRecognizer:(id)a0;
- (BOOL)shouldResponseGestureRecognizer:(id)a0;
- (BOOL)handleResponseGestureRecognizer:(id)a0;
- (void)bindEvents;
- (void)showReminderTips:(BOOL)a0;
- (void)willExitLandscape;
- (void)changeAccessibilityStatus;
- (void)changeInteractionToState:(long long)a0 animated:(BOOL)a1;
- (void)changeInteractionToState:(long long)a0 animated:(BOOL)a1 layoutAnimated:(BOOL)a2 completion:(id /* block */)a3;
- (void)changeInteractionToState:(long long)a0;
- (void)triggerQuietTimerWithState:(long long)a0;
- (void)resetQuietTimer;
- (void)cancelLongPressGesture;
- (void)trackPlayTimeWithSpeedMethod:(id)a0;
- (void)handleResponseLongPressAction:(id)a0;
- (void)updateSubviewsForFeedShare;
- (void)updateLayoutWithState:(long long)a0;
- (void)traceSpeedValueSelected:(id)a0 enterMethod:(id)a1 extraDict:(id)a2;
- (void)trackSpeedModePlayTimeWithEnterMethod:(id)a0 extraDict:(id)a1;
- (void)handleResponseTapAction:(id)a0;
- (void)handleResponseDoubleTapAction:(id)a0;
- (void)updateState:(long long)a0;
- (void).cxx_destruct;
- (void)applicationWillResignActive;
- (void)reset;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidDisappear;
- (void)containerViewDidLoad;

@end
