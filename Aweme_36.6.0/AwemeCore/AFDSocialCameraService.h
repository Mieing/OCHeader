@class NSString;

@interface AFDSocialCameraService : HTSService <AFDSocialCameraService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)momentCameraDraftService;
- (BOOL)enableAutoMusicForSocialText;
- (BOOL)enableNewUIForStoryPublishPanel;
- (id)publishService;
- (id)contextService;
- (id)everCameraControllerWithType:(long long)a0;
- (Class)PolaroidUtilClass;
- (BOOL)isNotesMode:(id)a0;
- (Class)detailCameraComponentClass;
- (id)cameraAlbumHelper;
- (Class)downloadHandlerClass;
- (Class)momentCameraLayoutManagerClass;
- (id)momentCameraLayoutManagerWithContainerView:(id)a0;
- (Class)publishPrivacyUtilClass;
- (Class)textABHelperClass;

@end
