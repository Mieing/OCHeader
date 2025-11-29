@interface AWEAlbumPickUpViewModel : AWEAlbumBaseViewModel

- (BOOL)shouldShowAssetsInReverseOrderForAlbumViewController:(id)a0;
- (BOOL)shouldSelectAlbumAsset:(id)a0;
- (void)goToNextWithMultiSelect:(BOOL)a0;
- (BOOL)needFetchAlbumAssetsWhenClickNext;
- (void)updateBottomNextButtonWithButton:(id)a0 fromPreview:(BOOL)a1;
- (BOOL)needDisplayGreyModeWithAsset:(id)a0;
- (BOOL)shouldSelectAlbumAsset:(id)a0 enableToast:(BOOL)a1 isSelect:(BOOL)a2;
- (BOOL)isHandleFilterSelectedAsset:(id)a0;
- (id)handleFilterSelectedAssetResult:(id)a0 publishViewModel:(id)a1;

@end
