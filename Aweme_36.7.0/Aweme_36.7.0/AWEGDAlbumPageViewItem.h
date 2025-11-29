@class NSString, AWEGDAlbumDataProcessor, AWEGDAlbumCategoryInfoModel, UIImageView, NSDictionary, UITableView, AWEGoodsDetailPageContext, UICollectionView, AWEGDAlbumRefreshFooter;

@interface AWEGDAlbumPageViewItem : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UIScrollViewDelegate, AWEPOIDetailPhotosDynamicPreviewViewControllerLoadMoreDelegate, AWEZoomTransitionOuterContextProvider, AWEPOIDetailPhotosPreviewViewControllerDelegate>

@property (nonatomic) double photoLength;
@property (nonatomic) long long selectIndex;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIImageView *zoomStartView;
@property (retain, nonatomic) AWEGDAlbumRefreshFooter *footer;
@property (retain, nonatomic) AWEGDAlbumDataProcessor *dataProcessor;
@property (retain, nonatomic) NSDictionary *logParams;
@property (retain, nonatomic) AWEGDAlbumCategoryInfoModel *model;
@property (weak, nonatomic) AWEGoodsDetailPageContext *context;
@property (copy, nonatomic) NSString *sessionID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *zoomTransitionContext;

- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (BOOL)zoomTransitionWantsFromVCScale;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })focusViewPlaceholderFrame;
- (void)userDidPerformOperationOnPhotosPreviewViewController:(id)a0;
- (void)loadMore;
- (void)scrollViewDidEndScroll:(id)a0;
- (void)loadDataWithCategoryInfo:(id)a0 extraParam:(id)a1 dataProcessor:(id)a2;
- (void)reloadAlbumPageItem;
- (void)anchorTargetIndex:(long long)a0;
- (void)trackShowPOIPicOperation;
- (void)appendData;
- (void)didTapAlbumItemView:(long long)a0;
- (void)trackPoiPicOperation:(id)a0 enterMethod:(id)a1 extraParams:(id)a2;
- (void)trackShowPOIPicOperation:(id)a0 enterFrom:(id)a1 extraParams:(id)a2;
- (BOOL)hasMoreInPhotosPreviewVC;
- (long long)thresholdForLoadMoreInPhotosPreviewVC;
- (void)photosPreviewVCLoadMorePhotosWithCompletion:(id /* block */)a0;
- (void)photosPreviewVCDidFinishloadMore:(BOOL)a0;
- (void)photosPreviewViewControllerWillDismiss:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)endRefreshing;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)setupUI;

@end
