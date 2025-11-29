@class CUsrInfo, NSString, UIImage, MMWebViewController, UIViewController;
@protocol settingMyAccountExtInfoLogicDelegate;

@interface SettingMyAccountExtInfoLogic : MMObject <SettingLastHeadImgViewControllerDelegate, MMSightCameraViewControllerDelegate, MMWebViewDelegate, MMImageCropperDelegate, WCActionSheetDelegate, MessageObserverDelegate, MMImagePickerManagerDelegate> {
    id<settingMyAccountExtInfoLogicDelegate> m_delegate;
    UIViewController *m_viewController;
    unsigned int m_uiUploadHeadEventID;
    MMWebViewController *m_webVC;
    UIImage *_lastImage;
}

@property (retain, nonatomic) CUsrInfo *m_usrInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getViewController;
- (id)getNavigationController;
- (void)showImagePicker:(long long)a0;
- (void)handleImage:(id)a0;
- (void)onCamera;
- (void)onPhotoLibrary;
- (void)onPhotoSave;
- (void)onMakePhoto;
- (void)onPhotoLast;
- (void)onSelectLastImage:(id)a0;
- (void)showChangeImg:(id)a0;
- (id)lastImagePath;
- (id)loadLastImage;
- (void)saveLastImage;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)MessageReturn:(unsigned int)a0 MessageInfo:(id)a1 Event:(unsigned int)a2;
- (id)initWithViewController:(id)a0 delegate:(id)a1;
- (void)resetViewControllerAndDelegate;
- (void)reload;
- (void)dealloc;
- (void)dismissPhotoPicker;
- (void)MMImagePickerManager:(id)a0 didFinishPickingImageWithInfo:(id)a1;
- (void)MMImagePickerManagerDidCancel:(id)a0;
- (void)onSightPictureTaken:(id)a0 imageData:(id)a1 withFrontCamera:(BOOL)a2 editImageAttr:(id)a3;
- (void)onWebViewWillClose:(id)a0;
- (void)imageCropper:(id)a0 didFinished:(id)a1;
- (void)imageCropperDidCancel:(id)a0;
- (void).cxx_destruct;

@end
