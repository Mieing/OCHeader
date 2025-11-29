@class UIView, NSString, BDARVPlayerTrackerNew, BDARVPlayerMonitor, BDARVADModel, BDARVPlayerContext, BDASDKVideoPlayerModel, BDARVSourceModel, BDARFirstFrameTime;
@protocol BDASDKVideoPlayerProtocol;

@interface BDARVSDKVideoService : NSObject <BDARVPlayerState, BDASDKVideoPlayerDelegate, BDARLynxContext>

@property (class, retain, nonatomic) BDARVSDKVideoService *prerenderService;

@property (retain, nonatomic) UIView<BDASDKVideoPlayerProtocol> *player;
@property (nonatomic) unsigned long long playStatus;
@property (retain, nonatomic) BDARVSourceModel *sourceModel;
@property (retain, nonatomic) BDASDKVideoPlayerModel *playerModel;
@property (retain, nonatomic) BDARVADModel *adModel;
@property (retain, nonatomic) BDARVPlayerMonitor *videoMonitor;
@property (retain, nonatomic) BDARVPlayerTrackerNew *playTracker;
@property (retain, nonatomic) BDARVPlayerContext *context;
@property (nonatomic) BOOL readyForDisplay;
@property (nonatomic) BOOL isPrerender;
@property (retain, nonatomic) BDARFirstFrameTime *firstFrameTime;
@property (nonatomic) double inspirePlayTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)prerenderWithSourceModel:(id)a0 adData:(id)a1;
+ (id)serviceWithPrerender:(BOOL)a0;
+ (void)removePrerenderService;

- (BOOL)isPlaybackEnded;
- (void)videoPlayerDidFinished:(id)a0 error:(id)a1;
- (void)videoPlayer:(id)a0 playTimingChange:(unsigned long long)a1;
- (void)videoPlayerReadyToDisPlay:(id)a0 params:(id)a1;
- (void)videoPlayerReadyToPlay:(id)a0;
- (void)videoPlayer:(id)a0 mdlKey:(id)a1 hitCacheSize:(long long)a2;
- (void)disableNotificationObserver:(BOOL)a0;
- (double)playPercent;
- (id)playerStatusInfo;
- (void)bdarPlay;
- (void)bdarPause;
- (double)bdarDuration;
- (double)bdarTotalWatchTime;
- (unsigned long long)playDurationStatus;
- (void)configPlayerTracker:(id)a0;
- (double)totalWatchTime;
- (void)updatePlayerContext:(id /* block */)a0;
- (BOOL)configureWithSourceModel:(id)a0 adModel:(id)a1;
- (BOOL)isEqualToSource:(id)a0 cid:(id)a1 videoId:(id)a2;
- (id)playerModelWithSourceModel:(id)a0 adModel:(id)a1;
- (void)setPlayerModel:(id)a0 adModel:(id)a1;
- (void)registerDelegate:(id)a0;
- (void).cxx_destruct;
- (double)duration;
- (void)unregisterDelegate:(id)a0;
- (double)currentPlaybackTime;
- (unsigned long long)currentResolution;

@end
