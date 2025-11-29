@class IESECUniVideoPlayController, IESLiveVideoPlayerController, NSString;
@protocol IESECLiveReplayPlayerWrapperDelegate;

@interface IESECLiveReplayPlayerWrapper : NSObject <IESLiveVideoPlayerControllerDelegate, IESECUniVideoPlayDelegate>

@property (nonatomic) BOOL useMBRPlayer;
@property (retain, nonatomic) IESECUniVideoPlayController *mbrPlayController;
@property (retain, nonatomic) IESLiveVideoPlayerController *iesPlayer;
@property (weak, nonatomic) id<IESECLiveReplayPlayerWrapperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPlayerSubTag:(id)a0;
- (void)setPlayerTag:(id)a0;
- (void)setCurrentPlaybackTime:(double)a0 complete:(id /* block */)a1 renderComplete:(id /* block */)a2;
- (void)seekToProgress:(double)a0;
- (BOOL)isPause;
- (void)videoReadyToDisPlayOfPlayerController:(id)a0;
- (void)playerController:(id)a0 updateCacheProgress:(double)a1;
- (void)playerController:(id)a0 updateProgress:(double)a1 duration:(double)a2;
- (void)playerController:(id)a0 loadStateDidChange:(unsigned long long)a1;
- (void)playerController:(id)a0 playbackStateDidChange:(unsigned long long)a1;
- (void)playerController:(id)a0 playerDidFinishError:(id)a1;
- (void)playerController:(id)a0 userStop:(id)a1;
- (void)updateSubTitle:(id)a0;
- (BOOL)useNewPlayer;
- (void)reloadWithAwemeInfo:(id)a0;
- (void)reloadWithVideoId:(id)a0 urlList:(id)a1;
- (id)initMBRPlayerWithTag:(id)a0 subTag:(id)a1 awemeModel:(id)a2 extraInfo:(id)a3;
- (id)initMBRPlayerWithTag:(id)a0 subTag:(id)a1 videoId:(id)a2 urlList:(id)a3 extraInfo:(id)a4;
- (id)initIESLivePlayer;
- (void)reloadVideoURL:(id)a0;
- (void)reloadVideoId:(id)a0;
- (void)playerController:(id)a0 onSubtitleInfoCallBack:(id)a1 context:(id)a2;
- (id)createPlayerController;
- (void)videoReadyToDisplay:(id)a0;
- (void)playerController:(id)a0 updateProgress:(double)a1;
- (void)playerController:(id)a0 didChangePlayState:(unsigned long long)a1;
- (void)playerController:(id)a0 updateStallAction:(long long)a1;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (double)getDuration;
- (BOOL)isPlaying;
- (id)playerView;
- (void)setPlaybackSpeed:(double)a0;
- (double)durationWatched;

@end
