@class UIViewController, NSString, NSNumber, UITableView;
@protocol AWESwipeUpGuideViewControllerProtocol;

@interface AWESwipeUpGuideManager : NSObject <AWEShareMessage, AWESwipeUpGuideManagerProtocol>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSNumber *sceneNewUserCacheResult;
@property (nonatomic) BOOL enableNewUserSwipeUpGuide;
@property (nonatomic) unsigned long long swipeUpGuideInHotVideoPresentTimes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long status;
@property (nonatomic) BOOL finishedSwipeUpGestureInFeed;
@property (nonatomic) BOOL finishedSwipeUpGuidePresentInFeed;
@property (nonatomic) BOOL finishedSwipeUpGestureInDiscoveryV4;
@property (nonatomic) BOOL finishedSwipeUpGuidePresentInDiscoveryV4;
@property (nonatomic) BOOL finishedSwipeUpGestureInShootingTutorial;
@property (nonatomic) BOOL finishedSwipeUpGuidePresentInTodayHotVideo;
@property (nonatomic) BOOL finishedSwipeUpGuidePresentPOIWonderTravel;
@property (nonatomic) BOOL finishedSwipeUpGuidePresentRemotePlayNewUser;
@property (nonatomic) BOOL finishedSwipeUpGuidePresentLiveRemotePlayNewUser;
@property (nonatomic) BOOL finishedSwipeUpGuidePresentFamiliarColorCircle;
@property (nonatomic) BOOL finishedSwipeUpGuidePresentRelatedVideoInnerStream;
@property (nonatomic) BOOL finishedSwipeUpGuidePresentWidgetGuide;
@property (nonatomic) BOOL finishedSwipeUpGuidePresentPlayletInsertADGuide;
@property (nonatomic) BOOL finishedSwipeUpGuideShowInFeed;
@property (nonatomic) unsigned long long presentScene;
@property (nonatomic) unsigned long long dismissType;
@property (retain, nonatomic) UIViewController<AWESwipeUpGuideViewControllerProtocol> *swipeUpGuideViewController;

+ (Class)aAWEMainModuleCommonAdapterClass;
+ (id)sharedInstance;

- (void)presentSwipeUpGuide;
- (id)getCurrentTableViewForViewController:(id)a0;
- (void)showSwipeUpGuideIfNeeded:(unsigned long long)a0 onTableView:(id)a1;
- (BOOL)compareVersion:(id)a0 with:(id)a1;
- (double)durationForPresentScene;
- (void)dimissSwipeUpGuide;
- (id)presentSwipeUpGuideList;
- (void)finishedSwipeUpGestureForPresentScene:(unsigned long long)a0;
- (void)receiveGestureEvent:(unsigned long long)a0;
- (void)finishedSwipeUpPresentForPresentScene:(unsigned long long)a0;
- (void)didConfigureShareView:(id)a0 withContext:(id)a1;
- (id)topAlertViewOnKeyWindow;
- (id)aAWEMainModuleCommonAdapter;
- (void)feedChannelDidReload;
- (BOOL)hideForIpadAndSpringFestivalEve;
- (BOOL)_enableSwipeUpGuide:(unsigned long long)a0;
- (BOOL)enableTableViewFullVisible;
- (BOOL)enableSwipeUpGuide;
- (void)enableSwipeUpGuideForNewUser:(id /* block */)a0;
- (void)switchPresentScene:(unsigned long long)a0 tableView:(id)a1;
- (void)p_presntSwipeUpGuide:(BOOL)a0;
- (void)getSlideGuideValue:(id /* block */)a0;
- (void)enablePresentSwipeUpGuideForNewUser:(id /* block */)a0;
- (BOOL)enablePresentSwipeupGuide;
- (id)swipeUpGuideViewControllerForPresent;
- (void)logStoreKey:(id)a0 error:(id)a1;
- (unsigned long long)dismissTypeForPresentScene:(unsigned long long)a0;
- (unsigned long long)_dismissTypeForPresentScene:(unsigned long long)a0;
- (double)_durationForPresentScene:(unsigned long long)a0;
- (id)currentAwemeViewController;
- (BOOL)checkCommentListShowingOnViewController:(id)a0;
- (BOOL)checkSharePanelShowingOnViewController:(id)a0;
- (unsigned long long)swipeUpGuideOptimizationStrategy;
- (void).cxx_destruct;
- (id)init;

@end
