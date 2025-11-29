@class NSTimer, NSHashTable, IESLivePlayerPullStreamDecisionCenter, NSMapTable, NSDictionary, NSMutableArray, IESLivePlayerWrapper, IESLivePlayerCrossTalkDetectManager, NSMutableSet, NSNumber;

@interface IESLivePlayerManager : NSObject

@property (retain, nonatomic) NSHashTable *playerTable;
@property (retain, nonatomic) NSMutableArray *reusePlayers;
@property (nonatomic) long long maxReusePlayerCount;
@property (nonatomic) BOOL enableEyesProtect;
@property (nonatomic) double eyesProtectFilterValue;
@property (retain, nonatomic) NSHashTable *inusePlayers;
@property (retain, nonatomic) IESLivePlayerWrapper *tempHoldPlayer;
@property (retain, nonatomic) IESLivePlayerCrossTalkDetectManager *detectCrossTalkManager;
@property (retain, nonatomic) IESLivePlayerPullStreamDecisionCenter *pullStreamDecisionCenter;
@property (copy, nonatomic) NSDictionary *backgroundPullingSetting;
@property (retain, nonatomic) NSTimer *unexpectedPullStreamMonitorTimer;
@property (retain, nonatomic) NSMutableSet *unexpectedPullStreamPlayerAddressSet;
@property (retain, nonatomic) NSNumber *threadResumeDelay;
@property (retain, nonatomic) NSMapTable *willResumeThreadPlayers;
@property (copy, nonatomic) id /* block */ trackBlock;
@property (copy, nonatomic) id /* block */ eyesProtectLutImageBlock;
@property (copy, nonatomic) id /* block */ assertBlock;
@property (copy, nonatomic) id /* block */ isInHouseBlock;
@property (readonly, nonatomic) long long playerCountInPool;

+ (id)sharedInstance;

- (void)updateLivePlayersEyesProtectState:(BOOL)a0 intensityValue:(double)a1;
- (id)configIESLivePlayerForReuse:(id)a0;
- (BOOL)isExistLivePlayerInPlayingState;
- (void)stopAllLivePlayerWithCallTrace:(id)a0 action:(id)a1 completion:(id /* block */)a2;
- (void)tryPlayWithEngineHash:(long long)a0 callTrace:(id)a1;
- (id)dequeueIESLivePlayerWithConfig:(id)a0;
- (void)enqueueIESLivePlayerWithPlayer:(id)a0;
- (void)appendManagedPlayer:(id)a0;
- (void)setGlobalDummyVoice:(BOOL)a0 scene:(id)a1;
- (void)enqueuePlayerIntoPool:(id)a0 callTrace:(id)a1 resetBlock:(id /* block */)a2;
- (BOOL)isExistTempHoldPlayer:(id)a0;
- (void)muteManagedPlayerWithPlayer:(id)a0;
- (void)triggerALogReport;
- (id)obtainInUsedPlayerWithEngineHash:(long long)a0;
- (id)createInternalPlayerWithConfig:(id)a0;
- (void)p_receivedPlayActionNotification:(id)a0;
- (void)receiveCrossTalkHappenNotification:(id)a0;
- (void)monitorUnexpectedPullStream;
- (id)p_createPlayerWithConfig:(id)a0;
- (id)obtionActiveReusePlayerWithConfig:(id)a0;
- (id)obtionNewPlayerWithConfig:(id)a0;
- (id)obtionUnactiveReusePlayerWithConfig:(id)a0;
- (id)targetPlayerFromOpaquePlayer:(id)a0;
- (void)holdPlayerInShortTime:(id)a0;
- (void)asyncClosePlayer:(id)a0 callTrace:(id)a1;
- (void)resumeThreadPriorityIfNeeded:(id)a0;
- (id)playerTypeChangeWithPlayer:(id)a0;
- (BOOL)p_stopInvisiblePlayerEnable;
- (double)p_getCheckTimerTimeInterval;
- (void)p_onTimer;
- (BOOL)p_shouldStopPlayer:(id)a0;
- (double)p_getMaxPreloadTimeInterval;
- (id)p_getUnexpectedPullStreamMonitorConfig;
- (id)createIESLivePlayerWithConfig:(id)a0;
- (id)dequeuePlayerFromPoolWithConfig:(id)a0 callTrace:(id)a1;
- (void)replenishPlayerIntoUnusedPool:(id)a0 callTrace:(id)a1;
- (void)tryEnqueueReusedPool:(id)a0 callTrace:(id)a1 resetBlock:(id /* block */)a2;
- (BOOL)needToCreateNewPlayerWithConfig:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)addObservers;
- (void)handleAppDidEnterBackground:(id)a0;

@end
