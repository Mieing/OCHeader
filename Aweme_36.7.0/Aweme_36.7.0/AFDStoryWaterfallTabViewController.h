@class NSString, UIViewController, NSDictionary;
@protocol AWEFeedTableViewControllerMixVideoProtocol, AWEFeedTabItemViewControllerProtocol, AFDFmiliarFeedOnTopTabLifeCycleProtocol, AFDContainerViewControllerDelegateProtocol, AWEFeedTableViewControllerProtocol, AWEFamiliarViewControllerProtocol;

@interface AFDStoryWaterfallTabViewController : AFDMultiTabBaseFeedViewController <AWEFamiliarViewControllerProtocol, AFDFmiliarFeedOnTopTabLifeCycleProtocol>

@property (retain, nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol, AWEFamiliarViewControllerProtocol, AFDContainerViewControllerDelegateProtocol, AFDFmiliarFeedOnTopTabLifeCycleProtocol> *storyListViewController;
@property (readonly, copy, nonatomic) NSString *referString;
@property (readonly, copy, nonatomic) NSString *enterFrom;
@property (readonly, nonatomic) long long currentIndex;
@property (retain, nonatomic) NSDictionary *insertRequestParams;
@property (readonly, nonatomic) UIViewController<AWEFeedTableViewControllerProtocol, AWEFeedTabItemViewControllerProtocol, AWEFeedTableViewControllerMixVideoProtocol> *feedTableVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pauseWithAnimation;
- (id)currentAweme;
- (void)animatedRefreshWithCompletion:(id /* block */)a0;
- (BOOL)currentTabIsTop;
- (void)insertVideosToFamiliarFeedWithAweme:(id)a0;
- (BOOL)currentTabIsFamiliarFeed;
- (long long)currentAwemeIndex;
- (BOOL)canShowAlert;
- (BOOL)isSomethingShowingAbove;
- (BOOL)currentTabIsPresentingLightTheme;
- (BOOL)currentTabCanChangeTheme;
- (void)refreshWhenYellowDotShowingWithCompletion:(id /* block */)a0;
- (void)preloadViewIfNeed;
- (void)toggleFamiliarFeedAllReadTip:(BOOL)a0 WithLastViewModel:(id)a1;
- (BOOL)isShowingMateOnboarding;
- (BOOL)isShowingStoryOnboarding;
- (BOOL)canRefresh;
- (void).cxx_destruct;
- (void)setScrollEnabled:(BOOL)a0;
- (void)play;
- (void)pause;
- (void)reload;
- (void)stop;
- (long long)type;
- (void)viewDidLoad;
- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)isActive;

@end
