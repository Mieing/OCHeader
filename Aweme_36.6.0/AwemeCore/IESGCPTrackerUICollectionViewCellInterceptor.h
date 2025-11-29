@class UICollectionView;

@interface IESGCPTrackerUICollectionViewCellInterceptor : IESGCPTrackerUIViewInterceptor

@property (nonatomic) BOOL shouldHookCellClickEvent;
@property (weak, nonatomic) UICollectionView *collectionView;

- (void)startInterceptor;
- (void)stopInterceptor;
- (BOOL)couldInterceptTraceView;
- (void)hookCollectionViewCellShowTiming;
- (void)hookCollectionViewCellClickEventIfNeeded;
- (id)getCellContainer;
- (void).cxx_destruct;

@end
