@class NSString, UIActivityIndicatorView, IESLivePhotoTosUploadConfig, UIImagePickerController, IESLiveCreateCoverEditViewController;
@protocol IESLiveInternalRouter, IESLivePhotoLibraryService;

@interface IESLivePhotoTosUploadHelper : NSObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate>

@property (retain, nonatomic) id<IESLiveInternalRouter> router;
@property (retain, nonatomic) id<IESLivePhotoLibraryService> photoService;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (retain, nonatomic) IESLivePhotoTosUploadConfig *config;
@property (retain, nonatomic) UIImagePickerController *imagePicker;
@property (retain, nonatomic) UIActivityIndicatorView *loadingView;
@property (retain, nonatomic) IESLiveCreateCoverEditViewController *createCoverEditController;
@property (retain, nonatomic) id imageXUploadRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)uploadPhotoWithConfig:(id)a0 withAlbumPrivacyCert:(id)a1 withSettingPrivacyCert:(id)a2 withCameraPrivacyCert:(id)a3 withContext:(id)a4 completeBlock:(id /* block */)a5;
- (void)p_willEnterPickerView;
- (void)uploadPhotoWithImage:(id)a0 sourceType:(long long)a1;
- (void)closeImagePickerController;
- (BOOL)checkImageSuccess:(id)a0 sourceType:(long long)a1;
- (BOOL)checkImageSizeSuccess:(id)a0;
- (void)requestCallBackWithError:(id)a0 image:(id)a1 uri:(id)a2 url:(id)a3 data:(id)a4;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;
- (void)startLoading;
- (void)stopLoading;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;
- (void)image:(id)a0 didFinishSavingWithError:(id)a1 contextInfo:(void *)a2;

@end
