@class NSString;
@protocol MusicService, AWEMusicMainFeedPlayServiceProtocolDelegate;

@interface AWEMusicMainFeedMusicService : NSObject <AWEMusicServiceDelegate, AWEMusicMainFeedPlayerProtocol>

@property (retain, nonatomic) id<MusicService> musicService;
@property (nonatomic) long long playStatus;
@property (copy, nonatomic) id /* block */ cancelableBlocl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEMusicMainFeedPlayServiceProtocolDelegate> delegate;
@property (nonatomic) unsigned long long loopMode;

- (void)musicService:(id)a0 playStatusChanged:(long long)a1;
- (void)musicService:(id)a0 didFinishedWithError:(id)a1;
- (void)musicServiceReadyToPlay:(id)a0;
- (void)musicServiceMusicChanged:(id)a0;
- (void)musicServiceDidGoPrevFromRemote:(id)a0;
- (void)musicServiceDidGoNextFromRemote:(id)a0;
- (id)initWithMusicService:(id)a0;
- (id)playingModel;
- (id)queueModel;
- (id /* block */)p_performBlock:(id /* block */)a0 onMainQueueAfterDelay:(double)a1;
- (double)playableTime;
- (void)seekToTime:(double)a0 complete:(id /* block */)a1 renderComplete:(id /* block */)a2;
- (void)changeCurrentModelTo:(id)a0;
- (void)playCurrentModel;
- (void)preparePlayCurrentModel;
- (id)identifierOf:(id)a0;
- (id)createCycleItem:(id)a0;
- (id)nextModelOfCurrent;
- (id)preModelOfCurrent;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (long long)playbackState;
- (BOOL)isPlaying;
- (double)duration;
- (id)playerView;
- (void)dealloc;
- (double)playbackTime;
- (void)prepareToPlay;
- (id)currentModel;
- (void)setScaleMode:(long long)a0;
- (long long)scaleMode;

@end
