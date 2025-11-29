@interface IESLivePermissionManager : NSObject

+ (void)showGoToSettingsPageAlertWithContent:(id)a0 withContext:(id)a1 withPrivacyCert:(id)a2;
+ (void)checkForCameraPermissionWithCameraPrivacyCert:(id)a0 withCompleteBlock:(id /* block */)a1;

@end
