@class NSString;

@interface IESLiveGameCPPlayerServiceImpl : NSObject <IESGCPLivePlayerService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPowerSaveClearType:(unsigned long long)a0;
- (id)getLiveVideoPlayerController;
- (void)setLiveMute:(BOOL)a0;
- (void)setLivePlay;
- (void)setLivePause;
- (BOOL)liveIsPause;
- (id)currentLiveResolutionType;
- (id)currentLiveAudioStreamKey;
- (void)resumeCurrentMedia;
- (void)pauseCurrentMedia;
- (BOOL)isSceneClear;
- (BOOL)isMuted;

@end
