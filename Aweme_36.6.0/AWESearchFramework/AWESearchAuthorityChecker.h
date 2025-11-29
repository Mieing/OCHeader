@interface AWESearchAuthorityChecker : NSObject

+ (void)checkAuthorityFromAlbumWithCompletion:(id /* block */)a0 requestIfNeed:(BOOL)a1;
+ (void)checkAuthorityFromCameraWithCompletion:(id /* block */)a0 requestIfNeed:(BOOL)a1;
+ (void)showAlbumAuthorityAlert;
+ (void)openSystemSetting;
+ (void)checkAuthorityFromAlbumWithSuccessCompletion:(id /* block */)a0;
+ (void)checkAuthorityFromCameraWithSuccessCompletion:(id /* block */)a0;
+ (void)showCameraAuthorityView;
+ (void)impCheckAuthorityFromAlbumWithCompletion:(id /* block */)a0 requestIfNeed:(BOOL)a1;
+ (void)impCheckAuthorityFromCameraWithCompletion:(id /* block */)a0 requestIfNeed:(BOOL)a1;
+ (BOOL)authorityCheckerUesBDPrivacyCertEntry;
+ (void)privacyCertEntryCheckAlbumWithCompletion:(id /* block */)a0 requestIfNeed:(BOOL)a1;
+ (void)deviceManagerCheckAlbumWithCompletion:(id /* block */)a0 requestIfNeed:(BOOL)a1;
+ (void)privacyCertEntryCheckCameraWithCompletion:(id /* block */)a0 requestIfNeed:(BOOL)a1;
+ (void)deviceManagerCheckCameraWithCompletion:(id /* block */)a0 requestIfNeed:(BOOL)a1;

@end
