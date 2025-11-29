@class NSString, NSMutableSet, AWEAwemeModel;
@protocol AWEDCFeedTrackerServiceProtocol;

@interface AWEDCFeedTrackerController : AWEDCFeedBaseController <AWEDCFeedTrackerControllerProtocol>

@property (retain, nonatomic) id<AWEDCFeedTrackerServiceProtocol> tracker;
@property (retain, nonatomic) NSMutableSet *unvisibleCellsSet;
@property (nonatomic) BOOL isViewControllerShowing;
@property (nonatomic) BOOL alreadyEnter;
@property (nonatomic) BOOL alreadyTrackCacheFMP;
@property (nonatomic) BOOL alreadyTrackNewLoadFMP;
@property (retain, nonatomic) AWEAwemeModel *delayedFMPModel;
@property (nonatomic) double originY;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerScrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)containerScrollViewWillBeginDragging:(id)a0;
- (void)exitContainerWithModel:(id)a0;
- (void)enterContainerWithModel:(id)a0;
- (void)containerViewDidAppear:(BOOL)a0;
- (void)containerViewDidDisappear:(BOOL)a0;
- (void)containerCollectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)containerCollectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)containerCollectionView:(id)a0 endDidSelectItemAtIndexPath:(id)a1;
- (void)onFetchListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (void)commonLynxCell:(id)a0 awemeModel:(id)a1 didClickWithParams:(id)a2;
- (void)commonLynxCell:(id)a0 awemeModel:(id)a1 didCloseWithParams:(id)a2;
- (void)commonLynxCell:(id)a0 awemeModel:(id)a1 didDislikeWithParams:(id)a2;
- (void)commonLynxCell:(id)a0 awemeModel:(id)a1 controlledWithParams:(id)a2;
- (void)trackMonitorFMPIfNeededWithAweme:(id)a0;
- (void)recheckUnvisibleCellIfNeeded;
- (void)trackClientShowByDelayIfNeededWithExtra:(id)a0;
- (void)clearSwitchPreviewClientShowArray;
- (void)trackVisibleCellClientShowWithIndexPath:(id)a0;
- (void)realTrackFMPWithAweme:(id)a0;
- (void)realTrackCoverFMPWithAweme:(id)a0;
- (void)trackClientWhenAppearIfNeeded;
- (BOOL)shouldDelayTrackShowByVisibleCheck:(id)a0 cell:(id)a1 indexPath:(id)a2;
- (BOOL)currentCellEnableExposureEvent:(id)a0 cell:(id)a1 indexPath:(id)a2;
- (void)addTrackTagWithIdentify:(id)a0;
- (id)trackConfig;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive;
- (void)applicationWillTerminate;
- (void)appDidEnterBackground;

@end
