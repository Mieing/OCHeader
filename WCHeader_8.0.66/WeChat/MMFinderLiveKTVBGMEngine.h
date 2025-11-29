@class MMLiveAudioVolumeManageLogic, MMLiveTask, MMLiveTaskId, BGMAudioInfo;
@protocol MMFinderLiveKTVBGMEngineDelegate;

@interface MMFinderLiveKTVBGMEngine : NSObject

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (readonly, nonatomic) MMLiveTask *liveTask;
@property (retain, nonatomic) BGMAudioInfo *bgmAudioInfo;
@property (nonatomic) BOOL isStart;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL isStartPlaySucc;
@property (nonatomic) BOOL isPlayToSingingEndPosition;
@property (nonatomic) BOOL isEnd;
@property (nonatomic) long long bgmChnlId;
@property (nonatomic) int volumeBGM;
@property (readonly, nonatomic) int actualVolumeBGM;
@property (nonatomic) int pitchBGM;
@property (nonatomic) BOOL isBGMMuted;
@property (retain, nonatomic) MMLiveAudioVolumeManageLogic *playoutVolumeManageLogic;
@property (weak, nonatomic) id<MMFinderLiveKTVBGMEngineDelegate> logicDelegate;
@property (nonatomic) unsigned long long lastAdjustTimestamp;

+ (double)transferPitchValueToPitch:(int)a0;
+ (double)preferVolumeBGMRatio;

- (id)initWithTaskId:(id)a0;
- (void)initDefaultDatas;
- (void)configAudioParamCacheSettings;
- (void)dealloc;
- (BOOL)prepareWithAudioInfo:(id)a0;
- (BOOL)start;
- (BOOL)pause;
- (BOOL)resume;
- (BOOL)stop;
- (BOOL)finish;
- (void)updateBGMMute:(BOOL)a0;
- (long long)getMusicChannel;
- (long long)getSettingMusicChannel;
- (void)setMusicChannel:(long long)a0 cache:(BOOL)a1;
- (void)setBGMAbsVomlue:(int)a0;
- (int)bgmAbsVomlue;
- (void)setPlayoutVolume:(long long)a0 business:(long long)a1;
- (void)unSetPlayoutVolume:(long long)a0;
- (void)setBgmPitch:(int)a0;
- (int)bgmPitch;
- (int)minBgmPitch;
- (int)maxBgmPitch;
- (void)playBGM:(int)a0 path:(id)a1 isPublish:(BOOL)a2 startBlock:(id /* block */)a3 progressBlock:(id /* block */)a4 completionBlock:(id /* block */)a5;
- (void)seekToPosition:(int)a0;
- (void)continueCurrSettings;
- (void)clearPlayingState;
- (void)resetBGMVolumnForMuteChanged;
- (void)handlePlayMusicStart:(long long)a0 channel:(long long)a1;
- (void)handlePlayMusicProgress:(long long)a0 allDuration:(long long)a1 channel:(long long)a2;
- (void)checkIsPlayToSingEndPosition:(long long)a0;
- (void)onPlayToSingEndPosition;
- (void)handlePlayMusicEnd:(long long)a0 channel:(long long)a1;
- (void)endMusicPlay;
- (void)updateStateAfterPause;
- (void)updateStateAfterResume;
- (void)updateStateAfterStop;
- (unsigned int)playStatus;
- (id)currentLiveTask;
- (id)getAudioMgrInternal;
- (void)startPlayResultAutoCheck;
- (void)finishPlayResultAutoCheck;
- (void)autoCheckPlayResult;
- (void)cancelPlayResultAutoCheck;
- (id)audioSettingCache;
- (double)autoEndDuration;
- (double)volumeBGMRatio;
- (int)volumeBGMSum;
- (void).cxx_destruct;

@end
