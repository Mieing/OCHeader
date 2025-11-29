@class NSString, NSDictionary, ACCImageAlbumEditTagsUploadImageHelper, AWENewPublishImageAlbumTableViewCell, ACCImageAlbumThumbnailListDeleteView, UIView;

@interface AWEPostPageImageAlbumElement : AWEPostPageCellElement <AWEZoomTransitionOuterContextProvider, AWENewPublishImageAlbumTableViewCellActionDelegate>

@property (retain, nonatomic) AWENewPublishImageAlbumTableViewCell *orderableImageAlbumTableViewCell;
@property (retain, nonatomic) ACCImageAlbumThumbnailListDeleteView *imageAlbumDeleteView;
@property (retain, nonatomic) UIView *draggingCurrentView;
@property (nonatomic) BOOL showDeleteLimitToast;
@property (retain, nonatomic) ACCImageAlbumEditTagsUploadImageHelper *uploadImageHelper;
@property (nonatomic) long long initialPreviewIdx;
@property (copy, nonatomic) id /* block */ endTitleInputBlock;
@property (readonly, nonatomic) NSDictionary *zoomTransitionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterPostPage;
+ (id)type;

- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })focusViewPlaceholderFrame;
- (id)reedit;
- (id)p_commonTrackParams;
- (void)p_trackClickAddButton;
- (void)p_trackOpenAlbumViewController;
- (void)p_trackSelectAlbumAsset;
- (void)p_trackClickNextButtonAfterSelectAlbumAssetIfIsMultiContent:(BOOL)a0;
- (void)p_trackDeleteThumbnailListItem:(long long)a0;
- (void)p_trackMoveThumbnailListItemFromIndex:(long long)a0 toIndex:(long long)a1;
- (void)p_trackPreviewAlbumAssestWithIfIsSelected:(BOOL)a0;
- (void)uploadImageToCloudWithIndex:(long long)a0;
- (void)imageAlbumCell:(id)a0 didGetPreviewImageAtIndex:(long long)a1 preferredSize:(struct CGSize { double x0; double x1; })a2 processed:(BOOL)a3 completion:(id /* block */)a4;
- (void)didSelectCoverInImageAlbumCell:(id)a0;
- (void)imageAlbumCell:(id)a0 didSelectItemAtIndex:(long long)a1;
- (void)imageAlbumCell:(id)a0 willBeginDraggingItemAtIndex:(long long)a1;
- (void)imageAlbumCell:(id)a0 draggingCurrentView:(id)a1 fromCollectionView:(id)a2;
- (void)imageAlbumCell:(id)a0 willEndDraggingItemFromIndex:(long long)a1 toIndex:(long long)a2;
- (void)imageAlbumCell:(id)a0 didMoveItemFromIndex:(long long)a1 toIndex:(long long)a2 newCoverIndex:(long long)a3;
- (void)didClickAddButtonInImageAlbumCell:(id)a0;
- (void)didOpenAlbumViewControllerInImageAlbumCell:(id)a0;
- (void)didSelectAlbumAssetInImageAlbumCell:(id)a0;
- (void)imageAlbumCell:(id)a0 didClickNextButtonWithMultiContentStatus:(BOOL)a1;
- (void)imageAlbumCell:(id)a0 didEditWithNewData:(id)a1 selectedAssets:(id)a2;
- (void)imageAlbumCell:(id)a0 didPreviewAlbumAssetWithSelectedStatus:(BOOL)a1;
- (BOOL)enableReedit;
- (void)preloadResourceForNewImageAlbumCoverEditPage;
- (void)configMoveCacheThumbnailAction;
- (void)resetPreuploadTaskIfNeed;
- (void)p_updateCoverWithSelectedAssets:(id)a0;
- (BOOL)checkAssetsDidChanged:(id)a0;
- (void).cxx_destruct;
- (id)service;
- (BOOL)isVisible;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (id)cell;

@end
