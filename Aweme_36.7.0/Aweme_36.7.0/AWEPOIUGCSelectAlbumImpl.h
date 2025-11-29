@class NSString, NSDictionary, AWEPOIUGCAlbumViewModel, CAKAlbumViewController, CAKModalTransitionDelegate;

@interface AWEPOIUGCSelectAlbumImpl : NSObject <CAKAlbumViewControllerDataSource, CAKAlbumViewControllerDelegate>

@property (retain, nonatomic) AWEPOIUGCAlbumViewModel *viewModel;
@property (nonatomic) long long maxPickCount;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (retain, nonatomic) CAKModalTransitionDelegate *transitionDelegate;
@property (nonatomic) BOOL hasTrackedEnterAlbum;
@property (nonatomic) BOOL hasEnterNext;
@property (copy, nonatomic) NSDictionary *logParams;
@property (retain, nonatomic) CAKAlbumViewController *albumViewController;
@property (nonatomic) BOOL isSupportCamera;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultInputData;

- (id)enterFrom;
- (id)listViewConfigForAlbumViewController:(id)a0;
- (BOOL)albumViewController:(id)a0 shouldSelectAlbumAsset:(id)a1;
- (void)albumViewControllerDidClickCancelButton:(id)a0;
- (id)albumViewControllerConfigForHeader:(id)a0;
- (id)albumViewControllerConfigForFooter:(id)a0;
- (id)albumViewControllerConfigForSelectedAssetsView:(id)a0;
- (id)albumViewControllerViewForiOS14RequestAccessView:(id)a0;
- (id)albumViewControllerViewForiOS14DenyAccessView:(id)a0;
- (void)albumViewControllerDidAppear:(id)a0;
- (void)albumViewController:(id)a0 selectedAssetsViewDidDeleteAsset:(id)a1 sourceType:(long long)a2;
- (void)albumViewController:(id)a0 selectedAssetsViewDidClickAsset:(id)a1 sourceType:(long long)a2;
- (void)albumViewController:(id)a0 didSelectAlbumAsset:(id)a1 sourceType:(long long)a2;
- (void)albumViewController:(id)a0 didDeselectAlbumAsset:(id)a1 sourceType:(long long)a2;
- (void)albumViewController:(id)a0 didClickNextButtonWithSourceType:(long long)a1 fetchedAlbumAssets:(id)a2;
- (void)albumViewController:(id)a0 didDismissWithPanProgress:(double)a1;
- (void)albumViewController:(id)a0 didSelectTabListViewController:(id)a1 index:(long long)a2;
- (void)albumViewController:(id)a0 updateBottomNextButtonWithButton:(id)a1 fromPreview:(BOOL)a2;
- (void)albumViewController:(id)a0 didClickRequestAccessStartSettingButton:(id)a1 currentStatus:(long long)a2;
- (void)albumViewController:(id)a0 didClickDenyAccessStartSettingButton:(id)a1;
- (BOOL)isPhotoAuthorized;
- (id)initWithInputData:(id)a0;
- (void)closeAlbum;
- (id)editPageEnterFrom;
- (id)editPageEnterMethod;
- (id)albumCommonTrackParams;
- (void)trackUploadContent;
- (void)trackEnterAlbum;
- (void)trackCloseAlbum;
- (void)p_presentAlbumViewController;
- (void)p_openPhotoPrivacyAuth;
- (void)showAlbumWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
