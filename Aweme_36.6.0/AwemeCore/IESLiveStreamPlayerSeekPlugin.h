@class NSNumber, NSString, IESLiveGCDTimer;

@interface IESLiveStreamPlayerSeekPlugin : IESLiveStreamPlayerBasePlugin <IESLiveStreamPlayerSeekPluginProtocol>

@property (retain, nonatomic) IESLiveGCDTimer *natureTimer;
@property (nonatomic) BOOL supportsTimeShift;
@property (nonatomic) long long delayTime;
@property (nonatomic) double maxWatchDuration;
@property (copy, nonatomic) id /* block */ seekEndComplete;
@property (nonatomic) double currentWatchTime;
@property (nonatomic) double latestLiveTime;
@property (nonatomic) double serverTime;
@property (retain, nonatomic) NSNumber *trackCurrentSEITS;
@property (nonatomic) double timeShift;
@property (nonatomic) BOOL frozenWatchTime;
@property (nonatomic) double liveStartTime;
@property (nonatomic) BOOL needCheckLatestTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActivatePlugin;

- (void)updateCurrentTime:(double)a0;
- (void)updateServerTime:(long long)a0;
- (void)player:(id)a0 loadStateDidChange:(unsigned long long)a1;
- (void)player:(id)a0 playbackStateDidChange:(unsigned long long)a1;
- (void)player:(id)a0 didReceiveMetaInfo:(id)a1 processed:(BOOL)a2;
- (void)playerFrozen:(id)a0;
- (void)playerResume:(id)a0;
- (void)stopAndSetTimeShiftToPlay:(double)a0 isSwitchQuality:(BOOL)a1 callTrace:(id)a2;
- (double)getCurrentDuration;
- (double)getWatchedDuration;
- (void)seekStreamProgress:(double)a0 callTrace:(id)a1 complete:(id /* block */)a2;
- (void)updateCurrentTime:(double)a0 callTrace:(id)a1;
- (void)startNatureTimerIfNeed;
- (void)handleTimeNaturalGrowth;
- (void)sendProgressaEventIfNeedWithCallTrace:(id)a0;
- (double)getSmallestTimeShiftSeconds;
- (unsigned long long)indexOfSupportedTSLKey;
- (void)handleFirstPlayByLocalTime;
- (void)pe_commonInit;
- (void)pe_closeWithCallTrace:(id)a0;
- (void)updateLiveStartTime;
- (void).cxx_destruct;
- (void)resetTimer;

@end
