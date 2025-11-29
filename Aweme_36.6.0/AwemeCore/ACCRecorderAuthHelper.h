@interface ACCRecorderAuthHelper : NSObject

+ (void)showGoToSettingsAlertWithTitle:(id)a0 content:(id)a1 confirmText:(id)a2 cancelText:(id)a3 confirmBlock:(id /* block */)a4 cancelBlock:(id /* block */)a5;
+ (void)goToSettingsWithCertToken:(id)a0 permissionType:(long long)a1;
+ (BOOL)isAlbumAuthorized;
+ (BOOL)canStartVideoRecord:(BOOL)a0 context:(id)a1 complation:(id /* block */)a2;
+ (void)albumRequestAuthority:(id /* block */)a0 context:(id)a1;
+ (void)albumRequestAuthority:(id /* block */)a0 bpeaToken:(id)a1 context:(id)a2;
+ (void)albumRequestAuthority:(id /* block */)a0 bpeaCert:(id)a1 context:(id)a2;
+ (void)albumRequestAuthority:(id /* block */)a0 bpeaCert:(id)a1 context:(id)a2 alertEnabled:(BOOL)a3;
+ (void)trackPermissionToastShow:(id)a0 landingType:(id)a1 trackParams:(id)a2 context:(id)a3;
+ (void)permissionToastResult:(id)a0 result:(id)a1 trackParams:(id)a2;
+ (void)permissionToastClick:(id)a0 landingType:(id)a1 clickType:(id)a2 clickPosition:(id)a3 trackParams:(id)a4 context:(id)a5;
+ (void)requestMicroPhoneAuthWithCallback:(id /* block */)a0 trackParams:(id)a1 context:(id)a2;
+ (void)requestCameraAuthWithCallback:(id /* block */)a0 trackParams:(id)a1 context:(id)a2;
+ (void)requestMicroPhoneAuthWithToken:(id)a0 callback:(id /* block */)a1 context:(id)a2;
+ (void)requestMicroPhoneUesAlertToSettings:(id /* block */)a0 cancelBlock:(id /* block */)a1;
+ (void)albumRequestForAuditingWithCallback:(id /* block */)a0 context:(id)a1;
+ (void)requestCameraAndMicrophoneWithRequiredPermission:(unsigned long long)a0 trackParams:(id)a1 context:(id)a2 completion:(id /* block */)a3;
+ (void)trackPermissionStatusOnBoot;
+ (void)trackAudioVideoPermissionPageShowed:(id)a0 isClosed:(BOOL)a1;
+ (void)trackUploadPermissionPageShowed:(id)a0 isClosed:(BOOL)a1;
+ (void)trackAudioVideoPermissionPageClicked:(long long)a0 tabName:(id)a1 isGoingToSystemSettings:(BOOL)a2;
+ (void)trackUploadPermissionPageClickedWithIsGoingToSystemSettings:(BOOL)a0;

@end
