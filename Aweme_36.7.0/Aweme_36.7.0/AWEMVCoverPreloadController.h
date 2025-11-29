@class NSString, AWEMVChannelPageContext, AWEMVChannelPreloadManager, NSMutableArray;

@interface AWEMVCoverPreloadController : AWEDCFeedBaseController <AWEMVDataPluginProtocol>

@property (retain, nonatomic) AWEMVChannelPreloadManager *preloadManager;
@property (retain, nonatomic) NSMutableArray *visibleSectionIndexPaths;
@property (weak, nonatomic) AWEMVChannelPageContext *mvContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerCollectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)containerCollectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)containerCollectionView:(id)a0 startDidSelectItemAtIndexPath:(id)a1;
- (void)onLoadMoreListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (void)tidyDidUpdateToFullModel:(id)a0 context:(id)a1 error:(id)a2;
- (void)preloadPlayerCover:(id)a0;
- (BOOL)shouldPreloadCoverWhenWillDisplay:(id)a0;
- (BOOL)shouldPreloadCoverOptimizeStrategy;
- (void)preloadCoverIfNeeded:(id)a0;
- (void)preparePlayerCover:(id)a0;
- (unsigned long long)modelIndexInAllModelWithIndexPath:(id)a0;
- (void).cxx_destruct;

@end
