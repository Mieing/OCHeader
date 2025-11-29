@class IESLiveFullLinkMonitorImp, IESLiveVideoTosUploadConfig, UIActivityIndicatorView, NSString, UIImagePickerController;
@protocol IESLiveInternalRouter, IESLivePhotoLibraryService;

@interface IESLiveVideoTosUploadHelper : NSObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate>

@property (retain, nonatomic) id<IESLiveInternalRouter> router;
@property (retain, nonatomic) id<IESLivePhotoLibraryService> photoLibraryService;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (retain, nonatomic) UIImagePickerController *imagePicker;
@property (retain, nonatomic) UIActivityIndicatorView *loadingView;
@property (retain, nonatomic) IESLiveVideoTosUploadConfig *config;
@property (retain, nonatomic) IESLiveFullLinkMonitorImp *fullLink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)uploadVideoWithConfig:(id)a0 withAlbumPrivacyCert:(id)a1 withSettingPrivacyCert:(id)a2 withCameraPrivacyCert:(id)a3 withContext:(id)a4 completeBlock:(id /* block */)a5;
- (void)closeImagePickerController;
- (void)fetchVideoByCameraWithSettingPrivacyCert:(id)a0 withContext:(id)a1 withCameraPrivacyCert:(id)a2;
- (void)fetchVideoByPhotoLibraryWithAlbumPrivacyCert:(id)a0 withContext:(id)a1 withSettingPrivacyCert:(id)a2;
- (void)uploadVideoWithFileURL:(id)a0 firstFrameBase64:(id)a1;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;
- (void)startLoading;
- (void)stopLoading;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;
- (void)video:(id)a0 didFinishSavingWithError:(id)a1 contextInfo:(void *)a2;
- (void)playVideo:(id)a0;

@end
