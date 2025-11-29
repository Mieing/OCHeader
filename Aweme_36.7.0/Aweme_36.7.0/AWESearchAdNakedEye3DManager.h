@class NSString, AWEPlayVideoViewController, IESLiveVideoGiftController;

@interface AWESearchAdNakedEye3DManager : HTSService <AWESearchAdNakedEye3DManager>

@property (copy, nonatomic) NSString *cacheDirectory;
@property (retain, nonatomic) IESLiveVideoGiftController *alphaVideoPlayerController;
@property (retain, nonatomic) AWEPlayVideoViewController *playerController;
@property (nonatomic) BOOL trackedShowBefore;
@property (nonatomic) BOOL trackedFailBefore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didChangePlaybackStateWithAction:(id)a0;
- (void)awemePlayerWillLoopPlayingWith:(id)a0;
- (void)didChangeStallState:(id)a0;
- (BOOL)canPlay3DVideoWithModel:(id)a0;
- (id)cacheDiractory;
- (void)playAlphaVideoWithModel:(id)a0 viewController:(id)a1 alphaVideo:(id)a2;
- (void)downloadNaked3DResourceWithModel:(id)a0 reload:(BOOL)a1;
- (void).cxx_destruct;
- (void)reset;

@end
