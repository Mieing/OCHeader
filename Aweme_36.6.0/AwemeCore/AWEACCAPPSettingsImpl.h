@class NSString;

@interface AWEACCAPPSettingsImpl : NSObject <ACCAPPSettingsProtocol>

@property (readonly, nonatomic) BOOL disableExifPermission;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isAppVersionUpdated;
- (BOOL)enableBOE;
- (BOOL)enableNLETemplateForCutsame;
- (BOOL)enableFeatureBitsForCutsame;
- (id)oneClickFilmingMaxConcurrentOpSetting;
- (id)oneClickFilmingModelList;
- (BOOL)internal_publishEnabled;
- (id)cameraPositionDetailSchema;
- (id)cameraPositionCreateSchema;
- (id)cameraPositionNotice;
- (id)oneClickFilmingHalfLoadingConfig;
- (id)cameraPositionConfig;
- (void)removeVolumeViewWithVC:(id)a0;
- (BOOL)needShowErrorDescription:(id)a0;
- (id)acc_deviceID;
- (BOOL)isLowPublishActiveness;
- (long long)userPublishActiveness;
- (double)xmojiGeneratePollTimeoutDuration;
- (double)xmojiGenerateProgressLineMinTime;
- (id)xmojiGeneratePrivacyHintURLString;
- (id)takePhotoXmojiPictureURLString;
- (id)scanToLoginPathBlockList;

@end
