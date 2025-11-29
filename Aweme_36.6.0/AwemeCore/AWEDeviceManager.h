@interface AWEDeviceManager : NSObject

+ (void)requestPhotoLibraryPermission:(id /* block */)a0 withCert:(id)a1 forLevel:(long long)a2;
+ (void)requestPhotoLibraryPermission:(id /* block */)a0;
+ (BOOL)isCameraDenied;
+ (BOOL)isCameraNotDetermined;
+ (BOOL)isMicroPhoneAuth;
+ (BOOL)isMicroPhoneNotDetermined;
+ (BOOL)isMicroPhoneDenied;
+ (void)getIsNotificationEnabledWithCompletionHandler:(id /* block */)a0;
+ (void)requestPhotoLibraryPermission:(id /* block */)a0 withCert:(id)a1;
+ (BOOL)isWearingEarPhone;
+ (unsigned long long)defaultAudioSessionCategoryOptions;
+ (BOOL)isCameraAuth;

@end
