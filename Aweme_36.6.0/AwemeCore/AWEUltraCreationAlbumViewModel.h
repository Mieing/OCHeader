@class AUCDTOPageAlbum;

@interface AWEUltraCreationAlbumViewModel : AWEAlbumBaseViewModel

@property (retain, nonatomic) AUCDTOPageAlbum *pageConfig;
@property (copy, nonatomic) id /* block */ dismissBlock;

- (BOOL)shouldShowAssetsInReverseOrderForAlbumViewController:(id)a0;
- (id)initWithInputData:(id)a0;
- (BOOL)shouldSelectAlbumAsset:(id)a0;
- (void)goToNextWithMultiSelect:(BOOL)a0;
- (BOOL)needFetchAlbumAssetsWhenClickNext;
- (void)updateBottomNextButtonWithButton:(id)a0 fromPreview:(BOOL)a1;
- (BOOL)needDisplayGreyModeWithAsset:(id)a0;
- (BOOL)p_shouldSelectAlbumAsset:(id)a0;
- (void)showAlertWhenSelectAsset:(id)a0;
- (BOOL)availableMinCount:(id)a0;
- (void).cxx_destruct;
- (id)footerTitle;

@end
