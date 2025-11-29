@interface IESLiveScreenRecordToolActionService : NSObject

@property (copy, nonatomic) id /* block */ savePhotoFinish;

+ (void)requestPhotoLibraryPermission:(id /* block */)a0;
+ (void)saveVideoWithURL:(id)a0 withPrivacyCert:(id)a1 withContext:(id)a2 start:(id /* block */)a3 finish:(id /* block */)a4;
+ (void)saveVideoWithURLAndCallbackLocalIdentifier:(id)a0 withPrivacyCert:(id)a1 withContext:(id)a2 start:(id /* block */)a3 finish:(id /* block */)a4;
+ (void)judgeVideoExistInPhotosWithLocalIdentifier:(id)a0 withPrivacyCert:(id)a1 withContext:(id)a2 finish:(id /* block */)a3;
+ (void)presentPhotoLibraryDeniedAlertAndReplyEnterWithPrivacyCert:(id)a0 withContext:(id)a1;
+ (void)requestPhotoLibraryPermissionForReadAndWriteAlbumWithPrivacyCert:(id)a0 context:(id)a1 completion:(id /* block */)a2;
+ (void)presentPhotoLibraryDeniedAlertWithPrivacyCert:(id)a0 withContext:(id)a1;
+ (void)saveImageWithImage:(id)a0 withPrivacyCert:(id)a1 withContext:(id)a2;

- (void)saveImageWithImage:(id)a0 withPrivacyCert:(id)a1 start:(id /* block */)a2 finish:(id /* block */)a3;
- (void).cxx_destruct;
- (void)image:(id)a0 didFinishSavingWithError:(id)a1 contextInfo:(void *)a2;

@end
