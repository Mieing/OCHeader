@class NSString, IESLiveImageCropViewController, IESLiveImageCropApi, UIViewController;
@protocol IESLivePhotoLibraryService;

@interface IESLiveImageCropHandler : NSObject <UINavigationControllerDelegate, UIImagePickerControllerDelegate>

@property (retain, nonatomic) id<IESLivePhotoLibraryService> photoService;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ avatorCompletionBlock;
@property (copy, nonatomic) id /* block */ cameraCompletionBlock;
@property (copy, nonatomic) id /* block */ emojiTemplateCompletionBlock;
@property (copy, nonatomic) NSString *requestPage;
@property (copy, nonatomic) NSString *descriptionUrl;
@property (retain, nonatomic) IESLiveImageCropViewController *imageCropViewController;
@property (weak, nonatomic) UIViewController *originViewController;
@property (nonatomic) double cropSizeWidth;
@property (nonatomic) double cropSizeHeight;
@property (nonatomic) long long anchorImageMaxSize;
@property (nonatomic) long long imageCropType;
@property (copy, nonatomic) NSString *coverStatus;
@property (retain, nonatomic) IESLiveImageCropApi *imageCropApi;
@property (nonatomic) BOOL isEmojiTemplate;
@property (nonatomic) BOOL isCamera;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openCameraWithPrivacyCert:(id)a0 withPrivacyCert:(id)a1 requestPage:(id)a2 originViewController:(id)a3 completionBlock:(id /* block */)a4;
- (void)openImageCarpPgaeFromEmojiTemplateWithPrivacyCert:(id)a0 withPrivacyCert:(id)a1 requestPage:(id)a2 completionBlock:(id /* block */)a3;
- (void)initCropSize;
- (void)showPhotoPickerViewIfCanWithPrivacyCert:(id)a0 withPrivacyCert:(id)a1 withContext:(id)a2 authorId:(id)a3;
- (void)showCameraPickerViewIfCanWithPrivacyCert:(id)a0 withPrivacyCert:(id)a1 originViewController:(id)a2;
- (void)checkImageAndOpenCropVC:(id)a0 pickerVC:(id)a1 authorId:(id)a2;
- (void)endWithUploadResult:(BOOL)a0 code:(unsigned long long)a1;
- (void)openAnchorAvatorImageCropVC:(id)a0 withPickerController:(id)a1;
- (void)openImageCropVC:(id)a0 withPickerController:(id)a1 authorId:(id)a2;
- (id)compositeWithBase64:(id)a0;
- (void)openImageCarpPageWithPrivacyCert:(id)a0 withPrivacyCert:(id)a1 withCompletionBlock:(id /* block */)a2 requestPage:(id)a3 authorId:(id)a4 withContext:(id)a5;
- (void)openAnchorAvatorImageCarpPageWithPrivacyCert:(id)a0 withPrivacyCert:(id)a1 withCompletionBlock:(id /* block */)a2 requestPage:(id)a3 coverStatus:(id)a4 withContext:(id)a5;
- (void).cxx_destruct;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;
- (void)p_clearData;

@end
