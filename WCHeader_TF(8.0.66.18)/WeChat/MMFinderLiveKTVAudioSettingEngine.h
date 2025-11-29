@class MMFinderLiveTask, MMLiveTaskId, KTVAudioRouteUsageRecord;
@protocol MMFinderLiveKTVAudioSettingEngineDelegate;

@interface MMFinderLiveKTVAudioSettingEngine : NSObject

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
@property (nonatomic) BOOL isVoiceMuted;
@property (nonatomic) int volumeVoice;
@property (readonly, nonatomic) int actualVolumeVoice;
@property (nonatomic) BOOL voiceEarEnable;
@property (nonatomic) BOOL voiceEarUsable;
@property (nonatomic) long long audioRoute;
@property (nonatomic) BOOL isBluetoothHeadsetAvailable;
@property (retain, nonatomic) KTVAudioRouteUsageRecord *currAudioRouteSingUseRecord;
@property (nonatomic) BOOL isSingStart;
@property (nonatomic) BOOL isSingPause;
@property (weak, nonatomic) id<MMFinderLiveKTVAudioSettingEngineDelegate> logicDelegate;

+ (void)setVoiceEarMonitorEnabled:(BOOL)a0;
+ (void)notifyAudioRouteChanged:(long long)a0 fromRoute:(long long)a1;
+ (unsigned int)transferAudioRouteToAudioType:(long long)a0;
+ (BOOL)checkVoiceEarUsabled:(long long)a0;
+ (double)preferVolumeVoiceRatio;

- (id)initWithTaskId:(id)a0;
- (void)configAudioParamCacheSettings;
- (void)dealloc;
- (void)setHumanVoiceAbsVomlue:(int)a0;
- (int)humanVoiceAbsVomlue;
- (void)enableVoiceEarMonitor:(BOOL)a0;
- (BOOL)isVoiceEarMonitorEnabled;
- (BOOL)isVoiceEarMonitorUsabled;
- (BOOL)actualVoiceEarEnable;
- (BOOL)isHeadHeadsetUsabled;
- (void)handleForAudioRouteChanged;
- (void)updateVoiceMute:(BOOL)a0;
- (void)recoverAudioSetting:(id)a0;
- (void)continueCurrSettings;
- (void)checkAudioRouteIsChangedAtSingStart;
- (void)checkAudioRouteIsChanged;
- (void)onSingStart:(BOOL)a0;
- (void)onSingPause:(BOOL)a0;
- (unsigned int)getCurrAudioRouteSingingPersistTime;
- (BOOL)isCurrentSinging;
- (id)getAudioMgrInternal;
- (BOOL)updateAudioRoute;
- (void)onSingingAudioRouteChangedTo:(long long)a0 from:(long long)a1 lastUseRecord:(id)a2;
- (void)updateBluetoothHeadsetAvailable;
- (void)updateVoiceEarUsable:(BOOL)a0;
- (void)setVoiceEarMonitorVolume:(int)a0;
- (void)clearDatasForSingEnd;
- (void)updateAudioRouteRecordPlayingState;
- (id)audioSettingCache;
- (long long)currAudioRoute;
- (int)actualEarMonitorVolumeVoice;
- (double)volumeVoiceRatio;
- (int)volumeVoiceSum;
- (void).cxx_destruct;

@end
