@class NSString, AWEPOIAlbumCategoryInfoModel, AWEPOIAlbumRefreshFooter, UIImageView, AWEPOIAlbumDataProcessor, NSDictionary, UITableView, NSObject, AWEPOIAlbumSelectedStatus, UIViewController;
@protocol UIScrollViewDelegate, IESLLFusePOIDetailNGPageContextProtocol;

@interface AWEPOIAlbumPageViewItem : UIView <UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate, AWEPOIDetailPhotosDynamicPreviewViewControllerLoadMoreDelegate, AWEZoomTransitionOuterContextProvider, AWEPOIDetailPhotosPreviewViewControllerDelegate, AWEPOIVideoPlayerDelegate>

@property (nonatomic) double photoLength;
@property (nonatomic) long long selectIndex;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIImageView *zoomStartView;
@property (retain, nonatomic) AWEPOIAlbumRefreshFooter *footer;
@property (retain, nonatomic) AWEPOIAlbumSelectedStatus *selectedStatus;
@property (retain, nonatomic) AWEPOIAlbumDataProcessor *dataProcessor;
@property (retain, nonatomic) NSDictionary *logParams;
@property (retain, nonatomic) AWEPOIAlbumCategoryInfoModel *model;
@property (nonatomic) long long lastContentOffsetY;
@property (weak, nonatomic) id<IESLLFusePOIDetailNGPageContextProtocol> context;
@property (weak, nonatomic) NSObject<UIScrollViewDelegate> *delegate;
@property (weak, nonatomic) UIViewController *vc;
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
- (long long)bigCellCount;
- (BOOL)processSelectedStatusChange:(id)a0 finalSelectStatus:(BOOL)a1;
- (void)muteViewClicked:(BOOL)a0;
- (void)didClickPauseIcon:(long long)a0;
- (void)reloadDataWithCategoryInfo:(id)a0 extraParam:(id)a1 dataProcessor:(id)a2;
- (void)updateInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)endRefreshing;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didAppear;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)willDisappear;
- (void)setupUI;
- (void)setupTableView;
- (void)reloadTableView;

@end
