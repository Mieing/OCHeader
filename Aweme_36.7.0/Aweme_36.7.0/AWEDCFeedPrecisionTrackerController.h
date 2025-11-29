@protocol AWEDCFeedTrackerServiceProtocol;

@interface AWEDCFeedPrecisionTrackerController : AWEDCFeedBaseController

@property (retain, nonatomic) id<AWEDCFeedTrackerServiceProtocol> tracker;
@property (nonatomic) BOOL isViewControllerShowing;
@property (nonatomic) long long throttleCount;
@property (nonatomic) long long throttleThreshold;
@property (nonatomic) double lastContentOffY;
@property (nonatomic) double yThreshold;

- (void)containerScrollViewDidScroll:(id)a0;
- (void)containerScrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)containerScrollViewDidEndDecelerating:(id)a0;
- (void)containerViewDidAppear:(BOOL)a0;
- (void)containerViewWillDisappear:(BOOL)a0;
- (void)containerViewDidDisappear:(BOOL)a0;
- (void)containerCollectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)onFetchListDataStartWithReason:(unsigned long long)a0;
- (void)listDidReloadData;
- (void)listDidPerformBatchUpdates;
- (void)controllerAppDidEnterBackground;
- (void)trackClientShowV2;
- (void)trackClientRealShowDuration;
- (void)trackAllClientRealShowDuration;
- (void)trackClientIncompleteShowIfNeededWithType:(id)a0;
- (void)trackClientShowV2WithFilter;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive;
- (void)containerViewDidLoad;

@end
