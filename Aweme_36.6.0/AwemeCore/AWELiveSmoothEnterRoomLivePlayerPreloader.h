@class NSTimer, AWELiveSmoothEnterRoomLivePlayerPreloaderOptions, NSString;
@protocol IESLivePlayerProtocol;

@interface AWELiveSmoothEnterRoomLivePlayerPreloader : NSObject <AWELiveRoomMessage, AWELiveSmoothEnterRoomLivePlayerPreloaderService>

@property (nonatomic) BOOL enablePreload;
@property (nonatomic) double startTimeInterval;
@property (nonatomic) double preloadDuration;
@property (retain, nonatomic) NSTimer *preloaderTimer;
@property (nonatomic) unsigned long long tickCount;
@property (nonatomic) unsigned long long enterLiveRoomCount;
@property (retain, nonatomic) AWELiveSmoothEnterRoomLivePlayerPreloaderOptions *options;
@property (retain, nonatomic) id<IESLivePlayerProtocol> livePlayer;
@property (nonatomic) unsigned long long preloadStage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)audienceQuitAllRoomWithSlideVC:(id)a0 player:(id)a1 context:(id)a2;
- (id)obtainOptions;
- (void)mountLivePlayerPreloadeWithOptions:(id)a0 bizEnable:(BOOL)a1 callTrace:(id)a2;
- (void)unMountLivePlayerPreloaderWithCallTrace:(id)a0;
- (void)removeTimerWithCallTrace:(id)a0;
- (void)enqueuePlayerIfNeededWithCallTrace:(id)a0 targetRoomID:(id)a1;
- (void)resetPreloaderEnv;
- (void)configInnerConfigWithSettings:(id)a0;
- (BOOL)isFollowWithOptions:(id)a0;
- (void)unMountLivePlayerPreloaderWithCallTrace:(id)a0 needTrack:(BOOL)a1;
- (void)preloadLivePlayerAfterTickCount:(unsigned long long)a0;
- (void)checkNetWorkWithOptions:(id)a0 excecuteBlock:(id /* block */)a1;
- (void)trackPreloaderUnmount:(id)a0;
- (void)trackEnterRoomWithPlayerIsPreloaded:(BOOL)a0;
- (void)preparePlayerAndReloadStream;
- (void)trackPreloaderStart;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
