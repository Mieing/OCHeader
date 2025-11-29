@class NSArray, AWESearchBaseContainerConfig;

@interface AWESearchImageTextVerticalViewController : AWESearchResultVerticalBaseViewController {
    AWESearchBaseContainerConfig *_containerConfig;
}

@property (copy, nonatomic) NSArray *previewdAwemeList;
@property (retain, nonatomic) NSArray *viewModels;

- (id)tabConfig;
- (id)containerConfig;
- (void)setContainerConfig:(id)a0;
- (void)customHandleNodeViewModelsReady:(id)a0 withResponseParams:(id)a1 isLoadmore:(BOOL)a2;
- (void)fetchDataWithKeyWord:(id)a0 enterFrom:(id)a1 extraLogParams:(id)a2 isSearchByUserClick:(BOOL)a3 animated:(BOOL)a4 completion:(id /* block */)a5;
- (BOOL)enableStableLog;
- (void)customFeedDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)endReloadData;
- (void)customAnylyseResponseDataModelsReadyBlock:(id)a0 withParams:(id)a1 isLoadMore:(BOOL)a2;
- (BOOL)isPreviewdAwemeListMatchedWithCurrentAwemeList:(id)a0;
- (void)showPreviewedToastWithOffset:(double)a0;
- (void)handleFilterSelectedData:(id)a0;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;

@end
