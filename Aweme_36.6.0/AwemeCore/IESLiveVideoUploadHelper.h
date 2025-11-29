@class UIImagePickerController, NSString;
@protocol IESLiveInternalRouter, IESLivePhotoLibraryService;

@interface IESLiveVideoUploadHelper : NSObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate>

@property (retain, nonatomic) id<IESLiveInternalRouter> router;
@property (retain, nonatomic) id<IESLivePhotoLibraryService> photoLibraryService;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (retain, nonatomic) UIImagePickerController *imagePicker;
@property (copy, nonatomic) NSString *certVideoFileURL;
@property (copy, nonatomic) NSString *firstFrameBase64;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startUploadVideoWithCompleteBlock:(id /* block */)a0 durationLimit:(unsigned long long)a1 actionType:(long long)a2 withAlbumPrivacyCert:(id)a3 withSettingPrivacyCert:(id)a4 withCameraPrivacyCert:(id)a5 withContext:(id)a6;
- (void)playCertVideo;
- (void)closeImagePickerController;
- (void)uploadVideoWithFileURL:(id)a0;
- (void)savedPhotoImage:(id)a0 didFinishSavingWithError:(id)a1 contextInfo:(void *)a2;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (void).cxx_destruct;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;

@end
