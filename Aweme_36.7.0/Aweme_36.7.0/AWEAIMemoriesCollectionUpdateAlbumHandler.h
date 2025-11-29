@class CAKAlbumViewModel, NSArray, AWEAlbumBaseViewModel, NSDictionary, CAKAlbumViewController, NSString, ACCAlbumInputData;

@interface AWEAIMemoriesCollectionUpdateAlbumHandler : NSObject <CAKAlbumViewControllerDataSource, CAKAlbumViewControllerDelegate>

@property (copy, nonatomic) NSArray *initialSelectedAssets;
@property (retain, nonatomic) CAKAlbumViewController *albumViewController;
@property (retain, nonatomic) ACCAlbumInputData *inputData;
@property (retain, nonatomic) AWEAlbumBaseViewModel *viewModel;
@property (weak, nonatomic) CAKAlbumViewModel *originalAlbumViewModel;
@property (copy, nonatomic) NSDictionary *trackInfo;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) double timeNextButtonPress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)listViewConfigForAlbumViewController:(id)a0;
- (BOOL)albumViewControllerHiddenForFooter:(id)a0;
- (BOOL)albumViewControllerHiddenForSelectedAssetsView:(id)a0;
- (BOOL)albumViewController:(id)a0 shouldSelectAlbumAsset:(id)a1;
- (double)albumViewControllerHeightForFooter:(id)a0;
- (id)albumViewControllerConfigForFooter:(id)a0;
- (id)albumViewControllerConfigForSelectedAssetsView:(id)a0;
- (id)albumViewControllerViewForHeader:(id)a0;
- (id)albumViewControllerViewForFooter:(id)a0;
- (BOOL)albumViewControllerShouldShowSelectAssetBtnOnTopForPreviewPage:(id)a0;
- (id)albumViewControllerSelectAssetBtnOnTopForPreviewPage:(id)a0;
- (id)searchFeatureConfigForAlbumViewController:(id)a0;
- (id)albumViewControllerPreferDarkStyle:(id)a0;
- (void)albumViewController:(id)a0 selectedAssetsViewDidDeleteAsset:(id)a1 sourceType:(long long)a2;
- (void)albumViewController:(id)a0 didSelectAlbumAsset:(id)a1 sourceType:(long long)a2;
- (void)albumViewController:(id)a0 didClickNextButtonWithSourceType:(long long)a1 fetchedAlbumAssets:(id)a2;
- (void)albumViewController:(id)a0 updateBottomNextButtonWithButton:(id)a1 fromPreview:(BOOL)a2;
- (void)albumViewController:(id)a0 previewControllerDidLoadForAlbumAsset:(id)a1 bottomView:(id)a2;
- (void)p_openAlbumViewController;
- (void)p_showPhotoLibraryPermissionRequestAlert;
- (BOOL)validAssetModelForPhoto:(id)a0;
- (BOOL)validAssetModelForVideo:(id)a0;
- (id)commonAlbumListTabConfigWithInput:(id)a0;
- (id)p_buildAlbumViewController;
- (id)p_createAlbumViewModel;
- (BOOL)p_stringContainsExactlyTwoPlaceholders:(id)a0;
- (id)p_safeFormatString:(id)a0 withArguments:(id)a1;
- (id)p_containersInArray:(id)a0 withAssetIdentifier:(id)a1;
- (void)openAIMemoriesCollectionUpdateAlbumWithInitialAssets:(id)a0 originalAlbumViewModel:(id)a1 trackInfo:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
