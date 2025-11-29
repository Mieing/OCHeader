@class NSString;

@interface __RTVVoipAuthChecker : NSObject <RTVAuthCheckerInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)__showToast:(id)a0;
- (BOOL)checkAuthWithOption:(unsigned long long)a0;
- (BOOL)isAuthDeniedWithOption:(unsigned long long)a0;
- (void)showAuthAlertWithOption:(unsigned long long)a0;
- (void)showAuthAlertWithOption:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)requestAuthWithOption:(unsigned long long)a0 andToast:(id)a1;
- (void)__jumpToApplicationSystemSetting;
- (long long)rtv_authorizationStatusForVideo;
- (long long)rtv_authorizationStatusForAudio;
- (BOOL)__isCameraNotDetermined;
- (BOOL)__checkCamAuth;
- (BOOL)__isMicroPhoneNotDetermined;
- (BOOL)__checkMicAuth;
- (BOOL)__checkAuthWithOption:(unsigned long long)a0;
- (id)__requestCamAuth;
- (id)__requestMicAuth;
- (id)__requestAuthWithOption:(unsigned long long)a0 andToast:(id)a1;
- (long long)rtv_authorizationStatusForPhoto;

@end
