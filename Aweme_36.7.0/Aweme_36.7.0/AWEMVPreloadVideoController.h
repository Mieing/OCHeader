@class NSString, NSMutableSet, AWEMVChannelPreloadManager, NSHashTable;

@interface AWEMVPreloadVideoController : AWEDCFeedBaseController <AWEMVPreloadVideoControllerProtocol>

@property (retain, nonatomic) NSHashTable *optVisibleCellsCache;
@property (retain, nonatomic) AWEMVChannelPreloadManager *preloadManager;
@property (nonatomic) BOOL hasScrolled;
@property (nonatomic) BOOL isViewDisappeared;
@property (nonatomic) BOOL alreadyCancelPreloadOnClick;
@property (retain, nonatomic) NSMutableSet *largeCardModelSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sectionControllerWillEnterWorkingRange:(id)a0;
- (void)detailTableViewControllerDidDisappear:(id)a0 currentAwemeModel:(id)a1;
- (void)containerScrollViewDidScroll:(id)a0;
- (void)containerScrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)containerScrollViewDidEndDecelerating:(id)a0;
- (void)containerScrollViewDidEndScrollingAnimation:(id)a0;
- (void)containerScrollViewWillBeginDragging:(id)a0;
- (void)containerViewWillAppear:(BOOL)a0;
- (void)containerViewWillDisappear:(BOOL)a0;
- (void)containerViewDidDisappear:(BOOL)a0;
- (void)containerCollectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)containerCollectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)containerCollectionView:(id)a0 startDidSelectItemAtIndexPath:(id)a1;
- (void)containerScrollViewDidScrollToTop:(id)a0;
- (void)onFetchListDataStartWithReason:(unsigned long long)a0;
- (void)onFetchListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (void)onGeneralActionTriggeredWithType:(unsigned long long)a0 sender:(id)a1 params:(id)a2 sectionViewModel:(id)a3;
- (void)channelVideoViewController:(id)a0 awemeModel:(id)a1 didChangePlaybackToAction:(long long)a2;
- (double)calculateJointPercentFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)tryPrefetchVideos:(id)a0;
- (void)cancelSmallCardVideoPreloadIfNeed;
- (void)clearLargeCardPreloadSet;
- (void)executePreloadSmallCardVideo;
- (BOOL)filterVisibleCell:(id)a0 visibleRatio:(double)a1;
- (void)preloadVisibleSmallCardVideoDelay:(unsigned long long)a0;
- (void)preloadSmallCardVideoImmediately:(id)a0;
- (void).cxx_destruct;
- (void)applicationWillResignActive;
- (void)appWillEnterForeground;

@end
