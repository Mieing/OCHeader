@class CAKModalTransitionDelegate, NSString, NSNumber, UIViewController;

@interface AWEXBridgeChooseMediaMethod : BDXBridgeChooseMediaMethod <UINavigationControllerDelegate, UIImagePickerControllerDelegate, AWESelectPhotoViewControllerDelegate, CAKAlbumViewControllerDelegate, CAKAlbumViewControllerDataSource, AWEXBridgeChooseMediaProtocol>

@property (copy, nonatomic) id /* block */ completionHandler;
@property (weak, nonatomic) UIViewController *photoViewController;
@property (nonatomic) BOOL shouldSaveToPhotoAlbum;
@property (nonatomic) BOOL shouldCompressImage;
@property (nonatomic) BOOL needBinaryData;
@property (nonatomic) unsigned long long maxSelectionCount;
@property (nonatomic) unsigned long long albumSelectionResourcetype;
@property (retain, nonatomic) CAKModalTransitionDelegate *transitionDelegate;
@property (retain, nonatomic) NSNumber *compressWidth;
@property (retain, nonatomic) NSNumber *compressHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;

- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)finishWithResultModel:(id)a0 status:(id)a1;
- (id)writeImageDataToDisk:(id)a0;
- (id)listViewConfigForAlbumViewController:(id)a0;
- (BOOL)albumViewControllerHiddenForFooter:(id)a0;
- (BOOL)albumViewControllerHiddenForSelectedAssetsView:(id)a0;
- (BOOL)albumViewControllerNeedFetchAlbumAssetsWhenClickNext:(id)a0;
- (BOOL)albumViewController:(id)a0 shouldSelectAlbumAsset:(id)a1;
- (void)albumViewControllerDidClickCancelButton:(id)a0;
- (void)albumViewController:(id)a0 didClickNextButtonWithSourceType:(long long)a1 fetchedAlbumAssets:(id)a2;
- (void)pickMediaFromAlbumWithParamModel:(id)a0;
- (void)takeMediaFromCameraWithParamModel:(id)a0;
- (void)p_goToNextWithSelectedAssets:(id)a0;
- (void)buildTempFileModelForImageAsset:(id)a0 completionHandler:(id /* block */)a1;
- (void)buildTempFileModelForVideoAsset:(id)a0 completionHandler:(id /* block */)a1;
- (void)selectPhotoViewControllerDidCancel;
- (void)selectPhotoViewControllerDidConfirmWithSelection:(id)a0;
- (void).cxx_destruct;
- (id)imageDataForImage:(id)a0;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;

@end
