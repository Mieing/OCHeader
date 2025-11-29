@class AWEAlbumBaseViewModel, AWEStudioComposerAlbumEditBottomView, CAKAlbumViewController, AWEStudioComposerAlbumPreviewEditBottomView;

@interface AWEStudioComposerAlbumEditExtension : ACCAlbumExtension

@property (weak, nonatomic) AWEAlbumBaseViewModel *viewModel;
@property (weak, nonatomic) CAKAlbumViewController *albumViewController;
@property (weak, nonatomic) AWEStudioComposerAlbumEditBottomView *listBottomView;
@property (weak, nonatomic) AWEStudioComposerAlbumPreviewEditBottomView *previewBottomView;
@property (nonatomic) BOOL isOriginalItem;

- (void)albumWillShowViewController:(id)a0;
- (void)albumViewControllerEndPreview:(id)a0;
- (void)albumDidClickSelectAssetsButtonWithSelectedAssetes:(id)a0 targetAsset:(id)a1 isSelected:(BOOL)a2;
- (void)albumDidLoadExtension:(id)a0 albumViewController:(id)a1;
- (void)albumDidSelectAssetes:(id)a0 targetAsset:(id)a1;
- (void)albumDidDeleteAssetFromBottomView:(id)a0;
- (void)albumDidLoadPreviewControllerBottomView:(id)a0 previewAsset:(id)a1;
- (void)albumDidLoadBottomView:(id)a0;
- (void)previewControllerScrollViewDidEndDeceleratingWithAlbumAsset:(id)a0;
- (void)albumViewControllerPreviewCellStatusDidChange;
- (void)albumViewControllerSelectedAssetsViewOrderDidChange;
- (void)listViewEditAction:(id)a0;
- (void)originalPhotoAction:(id)a0;
- (void)forceUpdateButtons;
- (void)previewViewEditAction:(id)a0;
- (void)selectedAlbumAssetsWillChange;
- (void)editAsset:(id)a0;
- (void).cxx_destruct;

@end
