@interface ACCDeviceAuth : NSObject

+ (void)requestPhotoLibraryPermission:(id /* block */)a0;
+ (long long)acc_authorizationStatusForPhoto;
+ (BOOL)isCameraDenied;
+ (BOOL)isiOS14PhotoLimited;
+ (BOOL)isCameraNotDetermined;
+ (BOOL)isMicroPhoneAuth;
+ (BOOL)isMicroPhoneNotDetermined;
+ (BOOL)isMicroPhoneDenied;
+ (long long)acc_authorizationStatusForAddOnlyLevel;
+ (long long)acc_authorizationStatusForVideo;
+ (long long)acc_authorizationStatusForAudio;
+ (BOOL)hasCameraAndMicroPhoneAuth;
+ (BOOL)hasAlbumAddAuth;
+ (BOOL)isiOS14PhotoNotDetermined;
+ (BOOL)hasAlbumReadWriteAuth;
+ (unsigned long long)currentAuthType;
+ (BOOL)isCameraAuth;

@end
