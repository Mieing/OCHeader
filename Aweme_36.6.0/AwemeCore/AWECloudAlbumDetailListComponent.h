@class AWECloudAlbumDetailLoadingView, UICollectionView, AWECloudAlbumDetailListViewModel, NSString;
@protocol AWECloudAlbumDetailNavigationServiceProtocol, AWECloudAlbumDetailBottomServiceProtocol, AWECloudAlbumDetailPublishServiceProtocol, AWECloudAlbumDetailDownloadServiceProtocol, AWECloudAlbumDetailDataServiceProtocol;

@interface AWECloudAlbumDetailListComponent : AWECloudAlbumDetailBaseComponent <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, AWECloudAlbumDetailCellDelegate, AWECloudAlbumDetailNavigationServiceSubscriber, AWECloudAlbumDetailNavigationMoreServiceSubscriber, AWECloudAlbumDetailDataTaskServiceSubscriber, AWECloudAlbumDetailBottomServiceSubscriber, AWECloudAlbumDetailDownloadServiceSubscriber, AWECloudAlbumDetailPublishServiceSubscriber, AWECloudAlbumPreviewControllerDelegate, ACCZoomContextOutterProviderProtocol>

@property (weak, nonatomic) id<AWECloudAlbumDetailNavigationServiceProtocol> navigationService;
@property (weak, nonatomic) id<AWECloudAlbumDetailDataServiceProtocol> dataService;
@property (weak, nonatomic) id<AWECloudAlbumDetailBottomServiceProtocol> bottomService;
@property (weak, nonatomic) id<AWECloudAlbumDetailDownloadServiceProtocol> downloadService;
@property (weak, nonatomic) id<AWECloudAlbumDetailPublishServiceProtocol> publishService;
@property (retain, nonatomic) AWECloudAlbumDetailListViewModel *viewModel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWECloudAlbumDetailLoadingView *loadingView;
@property (nonatomic) long long selectedCellIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (id)serviceBinding;
- (void)p_loadMore;
- (void)p_addNotification;
- (void)componentDidLoad;
- (void)p_endRefreshing;
- (id)acc_zoomTransitionStartViewForItemOffset:(long long)a0;
- (void)detailCellDidTapAdd:(id)a0;
- (void)p_updateBottomStateAnimated:(BOOL)a0;
- (void)dataDidChangeTaskStatusWithService:(id)a0;
- (void)dataDidChangeTaskProgressWithService:(id)a0;
- (void)dataService:(id)a0 didChangeItems:(id)a1;
- (void)bottomDidCancelTaskWithService:(id)a0;
- (void)bottomDidDeleteSelectedItemsWithService:(id)a0;
- (void)downloadShouldExitSelectModeWithService:(id)a0;
- (void)p_updateLoadingView;
- (void)p_addMore;
- (void)p_deleteAssetsWithAssets:(id)a0;
- (void)p_resetDataSource;
- (void)p_onReceivedReloadData:(id)a0;
- (void)p_removeNotification;
- (void)detailCellDidTapRetry:(id)a0;
- (void)detailCellDidTapDelete:(id)a0;
- (void)detailCellDidTapSelect:(id)a0;
- (void)navigationDidClickSelectWithService:(id)a0;
- (void)navigationDidClickCancelWithService:(id)a0;
- (void)navigationDidClickAddContentWithService:(id)a0;
- (void)publishShouldExitSelectModeWithService:(id)a0;
- (void)previewController:(id)a0 didRemoveAsset:(id)a1;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)dealloc;

@end
