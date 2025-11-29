@interface AWEDYSimpleDownloadShareChannel : AWEDownloadShareChannel

- (void)receiveShareChannelEvent:(id)a0 platform:(id)a1 liveShareModel:(id)a2 extraParams:(id)a3;
- (void)shareWithCompletion:(id /* block */)a0;
- (void)requestPhotoLibraryPermission:(id /* block */)a0;
- (BOOL)isShareItemEnabled;
- (BOOL)prepareToShare;
- (BOOL)isNeedSimpleDownloadWithContext:(id)a0;
- (void)gotoPhotoLibrarySetting;
- (id)getRoomModel;
- (void)beginSimpleDownloadImageWithCompletion:(id /* block */)a0;
- (void)beginSimpleDownloadVideoWithCompletion:(id /* block */)a0;
- (void)saveImageWithRoomModel:(id)a0 completion:(id /* block */)a1;
- (void)saveVideoWithRoomModel:(id)a0 completion:(id /* block */)a1;
- (void)prepareToShareWithCompletion:(id /* block */)a0;
- (BOOL)isNeedDownloadImage;
- (id)shareType;
- (id)shareTitle;
- (BOOL)prepareWithContext:(id)a0;

@end
