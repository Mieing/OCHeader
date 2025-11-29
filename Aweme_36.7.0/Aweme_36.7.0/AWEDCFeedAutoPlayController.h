@class NSString, AWEDCFeedAutoPlayHandler, AWEDCFeedPageContext, NSHashTable;

@interface AWEDCFeedAutoPlayController : AWEDCFeedBaseController <AWEDCFeedAutoPlayContainerProtocol, AWEDCFeedAutoPlayControllerProtocol>

@property (retain, nonatomic) NSHashTable *optVisibleCellsCache;
@property (retain, nonatomic) AWEDCFeedAutoPlayHandler *autoPlayHandler;
@property (readonly, weak, nonatomic) AWEDCFeedPageContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerScrollViewDidScroll:(id)a0;
- (void)containerScrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)containerScrollViewDidEndDecelerating:(id)a0;
- (void)containerScrollViewDidEndScrollingAnimation:(id)a0;
- (void)containerViewWillAppear:(BOOL)a0;
- (void)containerViewDidAppear:(BOOL)a0;
- (void)containerViewWillDisappear:(BOOL)a0;
- (void)containerCollectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)containerCollectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)containerScrollViewDidScrollToTop:(id)a0;
- (void)listDidReloadData;
- (void)listDidPerformBatchUpdates;
- (id)feedScrollView;
- (BOOL)disableFeedScrollViewDelegate;
- (void)becomeActiveNeedReset:(BOOL)a0;
- (BOOL)shouldPreventDCAutoPlayAction;
- (BOOL)p_enableVideoPlay;
- (void)becomeActive;
- (id)visibleCells;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive;
- (void)resignActive;
- (id)init;
- (void)applicationWillResignActive;
- (id)autoPlayConfig;

@end
