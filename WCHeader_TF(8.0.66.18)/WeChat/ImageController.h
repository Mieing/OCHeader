@class UINavigationController, NSString, CaptureVideoInfo, MMLoadingView;
@protocol ImageControllerDelegate;

@interface ImageController : MMObject <MMSightCameraViewControllerDelegate, WCActionSheetDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, ImagePreviewDelegate, ImageBrowseDelegate, MMImagePickerManagerDelegate> {
    MMLoadingView *m_loadingView;
}

@property (weak, nonatomic) id<ImageControllerDelegate> m_delegate;
@property (retain, nonatomic) CaptureVideoInfo *m_oVideoInfo;
@property (retain, nonatomic) UINavigationController *m_oVideoPicker;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) BOOL m_isJustReturnMMAsset;
@property (nonatomic) BOOL m_supportHeif;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)initLoadingView;
- (id)getViewController;
- (void)showImagePicker:(long long)a0;
- (void)showImagePicker:(long long)a0 useSightCamera:(BOOL)a1 sightCameraMode:(unsigned long long)a2;
- (void)OpenMediaBrowser;
- (void)OpenCameraController;
- (void)SendImageWithURL:(id)a0;
- (void)handleVideo:(id)a0 ImagePicker:(id)a1;
- (void)handleVideo:(id)a0;
- (void)alertCancelSendVideo;
- (void)alertDidSendVideo;
- (void)alertViewClickedWithIsSend:(BOOL)a0;
- (void)didSelectMMAsset:(id)a0 finish:(BOOL)a1 fromImagePicker:(id)a2;
- (long long)maxImageCount;
- (void)didSelectImage:(id)a0 Data:(id)a1 Finish:(BOOL)a2 ImageInfo:(id)a3 fromImagePicker:(id)a4;
- (void)didSelectImage:(id)a0 fromImagePicker:(id)a1;
- (void)didSelectImage:(id)a0 Data:(id)a1 fromImagePicker:(id)a2;
- (void)didSelectImage:(id)a0 Data:(id)a1 imageInfo:(id)a2 fromImagePicker:(id)a3;
- (void)didSelectImage:(id)a0 Data:(id)a1 Finish:(BOOL)a2 fromImagePicker:(id)a3;
- (id /* block */)willFinishPickingAsset;
- (void)didSelectAsset:(id)a0 Finish:(BOOL)a1 fromImagePicker:(id)a2;
- (void)MMImagePickerManager:(id)a0 didFinishPickingImageWithInfo:(id)a1;
- (id)processPickAssetInfo:(id)a0;
- (void)MMImagePickerManagerDidCancel:(id)a0;
- (void)MMImagePickerManager:(id)a0 didFinishPickingVideoWithInfo:(id)a1;
- (void)MMImagePickerManager:(id)a0 didFinishPickingSightWithInfo:(id)a1;
- (void)Reset;
- (void)downloadFailInImageBrowse;
- (id)assetPickerController:(id)a0 willFinishPickingAssets:(id)a1 withCurrentState:(id)a2;
- (id)chatUserNameForSightStatistics;
- (id /* block */)onShortVideoWillTaken;
- (void)onShortVideoTaken:(id)a0 thumbImg:(id)a1 editVideoAttr:(id)a2 paramModel:(id)a3;
- (id /* block */)onSightPictureWillTaken;
- (void)onSightPictureTaken:(id)a0 imageData:(id)a1 withFrontCamera:(BOOL)a2 editImageAttr:(id)a3;
- (void)dismissImagePicker;
- (void).cxx_destruct;

@end
