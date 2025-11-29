@class NSArray, NSString, NSMutableDictionary, AWEAwemeModel;

@interface AWEHomePageFeedPlayController : AWEBaseController <AWEHPFeedPlayControllerListenerProtocol, AWEHPHomeContainerViewControllerLifeCycle, AWEHPFeedPlayControllerProtocol>

@property (copy, nonatomic) NSArray *listeners;
@property (copy, nonatomic) NSString *preventPauseType;
@property (nonatomic) long long currentTabBarItemType;
@property (nonatomic) double changeTabBarTimestamp;
@property (retain, nonatomic) NSMutableDictionary *respondSelectorControllerCacheDict;
@property (nonatomic) BOOL isPlayingBeforePause;
@property (nonatomic) BOOL isLockScreen;
@property (readonly, nonatomic) AWEAwemeModel *currentAweme;
@property (nonatomic) BOOL enableIMDynamicLibraryLoadOpt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;

- (void)pauseWithAnimation;
- (void)seekPlayTimeWithItemID:(id)a0;
- (void)playIfActive;
- (void)addNotifications;
- (void)handleAppWillResignActiveNotification:(id)a0;
- (id)currentFeedVC;
- (BOOL)shouldBackgroundPlayAudio;
- (BOOL)shouldBackgroundPlay;
- (BOOL)shouldPreventPlayIfActive;
- (id)hpShouldPreventPauseWhenDisappear;
- (id)hpShouldPreventPlayIfActive;
- (id)hpShouldPreventInteractionWithInteractionType:(long long)a0;
- (id)hpShouldEnableInteractionWithPresentedViewController:(id)a0;
- (BOOL)shouldBackgroundSmallWindow;
- (BOOL)shouldPreventInteractionWithInteractionType:(long long)a0;
- (id)findListenersBySelector:(SEL)a0;
- (BOOL)shouldPreventPauseWhenDisappear;
- (void)trackPreventPauseEvent;
- (id)shouldNotAutoPlayResultFromChildViewControllers;
- (BOOL)shouldEnableInteractionWithPresentedViewController:(id)a0;
- (BOOL)enablePreventPauseTrack;
- (void)tryTrackPreventPauseInfo:(id)a0 currentVC:(id)a1 timestamp:(double)a2;
- (id)allowPreventPauseVCList;
- (BOOL)enablePreventPauseCompensate;
- (void)handleTabbarItemDidChangeNotification:(id)a0;
- (void)handleAppProtectedDataWillBecomeUnavailableNotification:(id)a0;
- (void)handleAppProtectedDataDidBecomeAvailableNotification:(id)a0;
- (void)handleAppDidBecomeActiveNotification:(id)a0;
- (void)holdStopPlayerWhenEnterBackground;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)viewDidLoad;
- (void)viewWillDisappear;

@end
