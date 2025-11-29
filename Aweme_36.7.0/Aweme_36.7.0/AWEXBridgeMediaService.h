@class UIViewController, NSString, BDXBridgeChooseMediaMethodParamModel, NSNumber, CAKModalTransitionDelegate;

@interface AWEXBridgeMediaService : NSObject <BDXBridgeChooseMediaPicker, AWESelectPhotoViewControllerDelegate, CAKAlbumViewControllerDataSource, CAKAlbumViewControllerDelegate, BDXBridgeMediaServiceProtocol>

@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) BDXBridgeChooseMediaMethodParamModel *currentParamModel;
@property (weak, nonatomic) UIViewController *photoViewController;
@property (nonatomic) BOOL shouldSaveToPhotoAlbum;
@property (nonatomic) BOOL shouldCompressImage;
@property (nonatomic) BOOL needBinaryData;
@property (nonatomic) unsigned long long maxSelectionCount;
@property (nonatomic) unsigned long long albumSelectionResourcetype;
@property (retain, nonatomic) CAKModalTransitionDelegate *transitionDelegate;
@property (retain, nonatomic) NSNumber *compressWidth;
@property (retain, nonatomic) NSNumber *compressHeight;
@property (nonatomic) BOOL needBase64Data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mediaPicker;
- (void)uploadImageWithParam:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)supportedWithParamModel:(id)a0;
- (id)mediaPickerWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)finishWithResultModel:(id)a0 status:(id)a1;
- (float)getCropRadio:(id)a0 sideWidth:(double)a1;
- (id)listViewConfigForAlbumViewController:(id)a0;
- (BOOL)albumViewControllerHiddenForFooter:(id)a0;
- (BOOL)albumViewControllerHiddenForSelectedAssetsView:(id)a0;
- (BOOL)albumViewControllerNeedFetchAlbumAssetsWhenClickNext:(id)a0;
- (BOOL)albumViewController:(id)a0 shouldSelectAlbumAsset:(id)a1;
- (void)albumViewControllerDidClickCancelButton:(id)a0;
- (void)albumViewController:(id)a0 didClickNextButtonWithSourceType:(long long)a1 fetchedAlbumAssets:(id)a2;
- (void)buildTempFileModelForImageAsset:(id)a0 completionHandler:(id /* block */)a1;
- (void)buildTempFileModelForVideoAsset:(id)a0 completionHandler:(id /* block */)a1;
- (void)selectPhotoViewControllerDidCancel;
- (void)selectPhotoViewControllerDidConfirmWithSelection:(id)a0;
- (unsigned long long)preferredMediaTypeWithModel:(id)a0;
- (void)goToNextWithSelectedAssets:(id)a0;
- (void)p_goToNextWithSortedSelectedAssets:(id)a0;
- (id)imageDataForImageRFC:(id)a0;
- (id)writeImageDataToDisk:(id)a0 extension:(id)a1;
- (void).cxx_destruct;
- (id)barTintColor;
- (id)tintColor;
- (id)imageDataForImage:(id)a0;

@end
