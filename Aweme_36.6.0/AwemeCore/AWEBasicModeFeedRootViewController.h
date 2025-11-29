@class AWEBasicModeTopQuitButtonElement, UILabel, UIView, NSString, AWEBasicModeHotFeedViewController, UIPanGestureRecognizer, AWEBasicModeTopButtonElement, AWEBasicModeSegmentElement;
@protocol AWEFeedRefreshAnimationProtocol;

@interface AWEBasicModeFeedRootViewController : UIViewController <UIGestureRecognizerDelegate, AWEViewControllerRefreshable>

@property (nonatomic) BOOL isAppear;
@property (nonatomic) long long refreshState;
@property (retain, nonatomic) id<AWEFeedRefreshAnimationProtocol> refreshAnimation;
@property (retain, nonatomic) UILabel *refreshLabel;
@property (retain, nonatomic) UIPanGestureRecognizer *verticalPan;
@property (nonatomic) unsigned long long verticalPanType;
@property (retain, nonatomic) UIView *tabBarContainer;
@property (retain, nonatomic) AWEBasicModeTopButtonElement *liveEntranceElement;
@property (retain, nonatomic) AWEBasicModeTopButtonElement *searchElement;
@property (retain, nonatomic) AWEBasicModeSegmentElement *nearbyElement;
@property (retain, nonatomic) AWEBasicModeSegmentElement *concernElement;
@property (retain, nonatomic) AWEBasicModeSegmentElement *forYouElement;
@property (retain, nonatomic) AWEBasicModeTopQuitButtonElement *quitBaseModeElement;
@property (retain, nonatomic) AWEBasicModeHotFeedViewController *hotFeedViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEBasicModeAdapterClass;

- (void)dragWithProgress:(double)a0;
- (void)dragCancellation;
- (id)transition_destinatedViewControllerForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (BOOL)transition_enableCustomActionForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (unsigned long long)transition_destinatedType;
- (unsigned long long)directionForPan:(id)a0;
- (void)p_addNotifications;
- (void)p_setupTabBar_v2;
- (BOOL)p_isActive;
- (void)p_refreshWithCompletion:(id /* block */)a0;
- (void)p_addPanGes;
- (void)p_setupContainerVC;
- (void)p_setupTabBar;
- (void)p_addRefreshLabel;
- (id)aAWEBasicModeAdapter;
- (void)p_appWillResignActive:(id)a0;
- (void)p_appDidBecomeActive:(id)a0;
- (void)p_windowDidBecomeKeyNotification:(id)a0;
- (id)p_mainAppWindow;
- (void)p_windowDidResignKeyNotification:(id)a0;
- (void)onDiscoverButtonClicked:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)viewDidLayoutSubviews;
- (long long)preferredStatusBarStyle;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (BOOL)refreshWithCompletion:(id /* block */)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)handlePanGesture:(id)a0;

@end
