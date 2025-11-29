@class AWEFeedLRUCache, NSString, AWEAwemeModel;

@interface AWEDoubleColumnSearchAfterClickController : AWEDCFeedBaseController <AWEDoubleColumnSearchAfterClickControllerProtocol>

@property (retain, nonatomic) AWEFeedLRUCache *showLRUCache;
@property (retain, nonatomic) AWEFeedLRUCache *clickLRUCache;
@property (retain, nonatomic) AWEAwemeModel *lastClickModel;
@property (nonatomic) unsigned long long lastClickTime;
@property (nonatomic) BOOL shouldSkipRemoveRecords;
@property (nonatomic) BOOL shouldRecordShowWillDisplay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)detailTableViewController:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2 model:(id)a3;
- (void)containerScrollViewDidScroll:(id)a0;
- (void)containerScrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)containerScrollViewDidEndDecelerating:(id)a0;
- (void)containerScrollViewDidEndScrollingAnimation:(id)a0;
- (id)getRecentClickAndShowItems;
- (void)containerViewDidAppear:(BOOL)a0;
- (void)containerViewDidDisappear:(BOOL)a0;
- (void)containerCollectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)containerCollectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)enterDetailVCAtIndexPath:(id)a0 withModel:(id)a1 referString:(id)a2 selectedCell:(id)a3;
- (void)enterGraphicsDetailAtIndexPath:(id)a0 withModel:(id)a1 referString:(id)a2 selectedCell:(id)a3;
- (void)enterInsAtIndexPath:(id)a0 withModel:(id)a1 referString:(id)a2 selectedCell:(id)a3;
- (void)onRefreshListDataStartWithRefreshReason:(unsigned long long)a0;
- (double)searchDoubleColumnShowPercentThreshold;
- (void)recordAwemeClickForSearchIfNeeded:(id)a0;
- (void)updateShowItems;
- (void)removeAllClickRecordsForSearchIfNeeded;
- (void)recordAwemeInfoForSearchIfNeeded:(id)a0;
- (BOOL)cellIsVisible:(id)a0 indexPath:(id)a1;
- (id)getLastClickInfoForSearch;
- (id)getLastShowInfoForSearch;
- (void).cxx_destruct;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;

@end
