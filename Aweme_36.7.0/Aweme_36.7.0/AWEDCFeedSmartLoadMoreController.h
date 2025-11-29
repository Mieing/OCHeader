@class NSString, NSMutableSet, AWEDCFeedSmartLoadMoreConfig, NSDate;

@interface AWEDCFeedSmartLoadMoreController : AWEDCFeedBaseController <AWEDCFeedSmartLoadMoreControllerProtocol>

@property (readonly, nonatomic) AWEDCFeedSmartLoadMoreConfig *loadMoreConfig;
@property (retain, nonatomic) NSDate *draggingBeginDate;
@property (nonatomic) double draggingBeginContentOffset;
@property (nonatomic) double velocity;
@property (retain, nonatomic) NSMutableSet *disableKeySet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerScrollViewWillBeginDragging:(id)a0;
- (void)containerViewDidAppear:(BOOL)a0;
- (void)containerViewDidDisappear:(BOOL)a0;
- (void)containerCollectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)containerScrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)listDidReloadData;
- (void)listDidPerformBatchUpdates;
- (void)updateViewModelDataState:(long long)a0;
- (void)disable:(BOOL)a0 forKey:(id)a1;
- (void)triggerSmartLoadMoreAfterDelay:(double)a0;
- (void)pTriggerSmartLoadMore;
- (void)pSmartLoadMoreIfNeeded:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isDisabled;

@end
