@class NSString, IESLiveGCDTimer, NSNumber, IESLiveKTVCommonApi;
@protocol IESLiveInteractDynamicContainerProvider, IESLiveKTVStreaming;

@interface IESLiveKTVPlayerServiceImpl : NSObject <IESLiveKTVPlayerService>

@property (weak, nonatomic) id<IESLiveKTVStreaming> ktvStreaming;
@property (nonatomic) BOOL mixerEnable;
@property (weak, nonatomic) id<IESLiveInteractDynamicContainerProvider> dynamicProvider;
@property (nonatomic) unsigned long long ktvPlayState;
@property (nonatomic) BOOL isPaused;
@property (retain, nonatomic) IESLiveGCDTimer *playingTiemr;
@property (readonly, nonatomic) double currentPlayTime;
@property (nonatomic) double musicProgressUpdateIntervalMs;
@property (retain, nonatomic) IESLiveKTVCommonApi *ktvApi;
@property (retain, nonatomic) NSNumber *musicId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)a0;
- (void)setEnablePipelineMode:(long long)a0;
- (void)setEnableKTVAccurateProgress:(BOOL)a0;
- (void)setOriginEnable:(BOOL)a0;
- (void)pauseMusic;
- (void)playMusic;
- (BOOL)isOriginState;
- (void)startMusicModel:(id)a0 createPlayerCompletion:(id /* block */)a1 completionBlock:(id /* block */)a2;
- (void)stopMusic;
- (void)seekMusic:(double)a0;
- (void)stopObserverMusicPlayTimer;
- (void)startMusicWithConfig:(id)a0 musicId:(id)a1 createPlayerCompletion:(id /* block */)a2 completionBlock:(id /* block */)a3;
- (void)onMusicStatusChanged:(id)a0;
- (void)startObserverMusicPlayTimer:(id /* block */)a0;
- (id)originalCacheKey;
- (void).cxx_destruct;
- (BOOL)isPlaying;

@end
