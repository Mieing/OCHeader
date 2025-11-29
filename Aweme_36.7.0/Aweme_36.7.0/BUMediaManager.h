@class NSDictionary, NSString, BUPlayableAd;

@interface BUMediaManager : NSObject <UINavigationControllerDelegate, UIImagePickerControllerDelegate>

@property (copy, nonatomic) NSDictionary *photoParams;
@property (nonatomic) unsigned long long eventType;
@property (weak, nonatomic) BUPlayableAd *playableAd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isPhotosAuthorizationDeclared;
+ (BOOL)isCameraAuthorizationDeclared;
+ (BOOL)isMicrophoneAuthorizationDeclared;
+ (id)downloadDirPath;
+ (void)deleteTempFile:(id)a0;
+ (void)openCameraOrSettings;
+ (void)openPhotosOrSettingsWithParams:(id)a0;
+ (void)savePhotosOrOpenSettingsWithParams:(id)a0;
+ (BOOL)isMediaAuthorizationDeclaredWithType:(unsigned long long)a0;
+ (BOOL)isMediaAuthorizationEnableWithType:(unsigned long long)a0;
+ (void)applyMediaAuthorizationWithType:(unsigned long long)a0 completion:(id /* block */)a1;
+ (id)shareInstance;

- (void)__openCameraOrSettings;
- (void)__openPhotosOrSettings;
- (void)remindToSettingsPageWithTitle:(id)a0 message:(id)a1;
- (void)showPhotosLibraryPage;
- (id)handleImageWithMediaInfo:(id)a0;
- (void)handleCameraResultWithMediaInfo:(id)a0;
- (void)handlePhotosResultWithMediaInfo:(id)a0;
- (void).cxx_destruct;
- (id)viewController;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;

@end
