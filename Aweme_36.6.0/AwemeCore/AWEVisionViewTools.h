@interface AWEVisionViewTools : NSObject

- (void)showAlbumAuthorityAlert;
- (void)openSystemSetting;
- (void)checkAlbumAuthority:(id /* block */)a0 requestIfNeed:(BOOL)a1;
- (void)checkCameraAuthority:(id /* block */)a0 requestIfNeed:(BOOL)a1;
- (void)openMyDYCodePageWithTrackParams:(id)a0;
- (void)fetchLatestAlbumPhoto:(id /* block */)a0;
- (void)showAlbumAuthorityAlertImp;
- (void)openSystemSettingImp;
- (void)fetchLatestAlbumPhotoImp:(id /* block */)a0;
- (id)init;

@end
