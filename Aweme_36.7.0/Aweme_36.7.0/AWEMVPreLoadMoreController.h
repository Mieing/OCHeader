@class AWEMVChannelPreloadManager;

@interface AWEMVPreLoadMoreController : AWEDCFeedBaseController

@property (retain, nonatomic) AWEMVChannelPreloadManager *preloadManager;

- (void)containerCollectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)loadMoreIfNeeded:(id)a0;
- (unsigned long long)modelIndexInAllModelWithIndexPath:(id)a0;
- (void).cxx_destruct;

@end
