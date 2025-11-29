@class AWESearchHybridRefreshTipsView, NSString, AWESearchHomePageHybridViewController;
@protocol AWESearchServiceManagerProtocol, AWESearchResultVerticalBaseViewControllerProtocol;

@interface AWESearchHybridRefreshTipsModule : AWESearchBaseContainerService <AWESearchVerticalServiceProtocol, AWESearchHybridHomePageServiceProtocol>

@property (retain, nonatomic) AWESearchHybridRefreshTipsView *tipsView;
@property (weak, nonatomic) AWESearchHomePageHybridViewController *homepageVC;
@property (nonatomic) BOOL trackingSinceTop;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) double lastPanY;
@property (nonatomic) double lastProgress;
@property (nonatomic) double extraBuffer;
@property (nonatomic) double trigger;
@property (nonatomic) BOOL isAdjustingOffset;
@property (nonatomic) BOOL lockTopBounceDuringDecelerate;
@property (nonatomic) BOOL adjusting;
@property (nonatomic) unsigned long long status;
@property (weak, nonatomic) id<AWESearchResultVerticalBaseViewControllerProtocol> container;
@property (weak, nonatomic) id<AWESearchServiceManagerProtocol> serviceManager;
@property (copy, nonatomic) NSString *serviceID;
@property (copy, nonatomic) NSString *serviceName;
@property (nonatomic) long long priority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;
+ (id)moduleName;

- (void)feedDidScroll:(id)a0;
- (void)searchHybird_setupUI;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (void)customFeedWillBeginDragging:(id)a0;
- (void)customFeedDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)customFeedDidEndDecelerating:(id)a0;
- (void)customFeedDidEndScrollingAnimation:(id)a0;
- (void)customFeedWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (id)tipsContainer;
- (void)impactFeedback;
- (void)configScrollView;
- (void)stopInspirationGuide;
- (void)searchHome_willUpdateRefreshStatus:(unsigned long long)a0 alpha:(double)a1;
- (BOOL)searchHome_currentRefreshTipsShowing;
- (void)updateRealtimeUIWithProgress:(double)a0 extra:(double)a1;
- (void)triggerNewRefresh;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;

@end
