@class NSString;

@interface AWEVideoRouterMusicService : NSObject <AWEStudioMusicService, AWEStudioMusicUtilService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)preloadHotMusic;
- (id)createVideoWithMusic:(id)a0 withInfo:(id)a1;
- (BOOL)isVideoMusicSelectRoute;
- (id)createVideoWithMusic:(id)a0 withInfo:(id)a1 commercialAnchorModel:(id)a2;
- (id)changeMusicWithSticker:(id)a0 inputData:(id)a1 originalMusicDownloadFailed:(BOOL)a2;
- (id)jsonObjectDecoded:(id)a0;

@end
