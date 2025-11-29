@class UIImagePickerController, NSString;
@protocol IESLiveInternalRouter, IESLivePhotoLibraryService;

@interface IESLivePhotoUploadHelper : NSObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate>

@property (retain, nonatomic) id<IESLiveInternalRouter> router;
@property (retain, nonatomic) id<IESLivePhotoLibraryService> photoService;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (retain, nonatomic) UIImagePickerController *imagePicker;
@property (copy, nonatomic) NSString *photoBase64;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startUploadPhotoWithAlbumPrivacyCert:(id)a0 withSettingPrivacyCert:(id)a1 withCameraPrivacyCert:(id)a2 withContext:(id)a3 withCompleteBlock:(id /* block */)a4 actionType:(long long)a5;
- (void)p_willEnterPickerView;
- (void)closeImagePickerController;
- (void)uploadPhotoWithImage:(id)a0;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (void).cxx_destruct;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;
- (void)image:(id)a0 didFinishSavingWithError:(id)a1 contextInfo:(void *)a2;

@end
