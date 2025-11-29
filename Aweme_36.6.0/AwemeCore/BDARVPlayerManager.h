@class BDARVPlayer, NSString, BDARVPlayerTrackerNew, BDARVPlayerMonitor, BDARVPlayerContext, BDARVADModel, BDARVSourceModel, BDARFirstFrameTime;
@protocol BDASDKVideoPlayerModel;

@interface BDARVPlayerManager : NSObject <BDARVPlayerDelegate, BDARVPlayerState, BDARLynxContext>

@property (retain, nonatomic) BDARVPlayer *player;
@property (retain, nonatomic) BDARVPlayerMonitor *videoMonitor;
@property (retain, nonatomic) BDARVPlayerTrackerNew *playTracker;
@property (retain, nonatomic) id<BDASDKVideoPlayerModel> playerModel;
@property (nonatomic) unsigned long long currentResolutionType;
@property (retain, nonatomic) BDARVPlayerContext *context;
@property (nonatomic) unsigned long long playStatus;
@property (retain, nonatomic) BDARVADModel *adModel;
@property (retain, nonatomic) BDARFirstFrameTime *firstFrameTime;
@property (retain, nonatomic) BDARVSourceModel *sourceModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double inspirePlayTime;

- (void)setOptionForKey:(long long)a0 value:(id)a1;
- (BOOL)isPlaybackEnded;
- (void)configSuperResolution;
- (double)playPercent;
- (void)configMonitor;
- (id)playerStatusInfo;
- (void)configPlayerWithAdModel:(id)a0 updatePlayerModel:(id /* block */)a1;
- (void)player:(id)a0 didFinishedWithType:(unsigned long long)a1 error:(id)a2;
- (void)playerReadyToDisPlay:(id)a0 params:(id)a1;
- (void)player:(id)a0 playbackType:(unsigned long long)a1;
- (BOOL)configPlayManagerWithSource:(id)a0 adModel:(id)a1 playerConfig:(id)a2;
- (void)bdarPlay;
- (void)bdarPause;
- (double)bdarDuration;
- (double)bdarTotalWatchTime;
- (unsigned long long)playDurationStatus;
- (void)configPlayerWithPlayerModel:(id)a0;
- (void)businessOptionsWithPlayerModel:(id)a0;
- (void)configPlayerTracker:(id)a0;
- (void)sendReplayTrack:(id)a0;
- (double)totalWatchTime;
- (void).cxx_destruct;
- (id)init;
- (double)duration;
- (double)currentPlaybackTime;
- (void)dealloc;
- (void)setPlaybackSpeed:(double)a0;
- (void)updateContext:(id /* block */)a0;
- (unsigned long long)currentResolution;

@end
