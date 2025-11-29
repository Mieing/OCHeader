@class NSDictionary, NSString;

@interface AWEECMallRootBaseViewController : UIViewController <AWETabMallVisibleDelegate>

@property (nonatomic) long long enterCount;
@property (nonatomic) double enterInterval;
@property (nonatomic) double lastEnterTimeInterval;
@property (nonatomic) double timeoutToRefresh;
@property (nonatomic) double leaveTimeInterval;
@property (copy, nonatomic) NSDictionary *lastEnterTrackParams;
@property (copy, nonatomic) NSDictionary *currentRouterParams;
@property (nonatomic) BOOL isViewVisible;
@property (copy, nonatomic) NSDictionary *transInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)referString;
- (void)appBecomeActive;
- (void)startTimingForTrack;
- (void)handleAppBecomeActive;
- (id)homepageTrackerParams:(id)a0;
- (id)currentSplicingEnterFrom;
- (id)btmPageBID;
- (void)refreshFirstScreen;
- (void)trackEnterWithParams:(id)a0;
- (id)defaultEnterFrom;
- (BOOL)isMallCategoryTab;
- (BOOL)isMallMultiTab;
- (BOOL)mallStayTimeTrackerRollback;
- (void)refreshFirstScreenIfNeeded;
- (void)trackStaytime;
- (void)mallBecomeVisible;
- (void)mallBecomeInvisible;
- (void)bottomTabChangedWithMallVisible:(BOOL)a0;
- (void)topTabChangedWithMallVisible:(BOOL)a0;
- (void)appActiveCauseMallVisible:(BOOL)a0;
- (id)currentTabViewController;
- (id)BTMAB;
- (void).cxx_destruct;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)handleAppWillResignActive;
- (void)addNotificationObserver;
- (void)appWillResignActive;
- (id)pageName;

@end
