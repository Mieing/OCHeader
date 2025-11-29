@interface IESLiveMediaPermissionChecker : NSObject

+ (void)checkAudioPermissionWithMicCert:(id)a0 completion:(id /* block */)a1;
+ (void)checkVideoPermissionWithMicCert:(id)a0 cameraCert:(id)a1 completion:(id /* block */)a2;
+ (void)showNoMediaPermissionAlert:(id)a0 settingUrl:(id)a1;
+ (void)checkAudioPermissionWithMicCert:(id)a0 context:(id)a1 completion:(id /* block */)a2;

@end
