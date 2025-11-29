@class NSString, TXAudioEffectManager, MMFinderLiveTaskId, MMLiveMusicDataItem;
@protocol MMLiveMusicPlayLogicDelegate;

@interface MMLiveMusicPlayLogic : NSObject <ILiveTaskMgrExt>

@property (retain, nonatomic) MMLiveMusicDataItem *currentMusicItem;
@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (nonatomic) int volumn;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) unsigned long long lastSyncVolumeTime;
@property (nonatomic) BOOL hasCreatedTXAudioEffectMgr;
@property (weak, nonatomic) TXAudioEffectManager *audioEffectMgr;
@property (weak, nonatomic) id<MMLiveMusicPlayLogicDelegate> logicDelegate;
@property (nonatomic) unsigned long long lastAdjustTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)dealloc;
- (void)playMusic:(id)a0;
- (void)playMusic:(id)a0 isPublish:(BOOL)a1;
- (void)updateStateBeforePlayWithItem:(id)a0;
- (void)stopPlayCurrentMusic;
- (void)syncBGMInfoForMiniGame:(BOOL)a0;
- (void)pausePlayCurrentMusic;
- (void)updateStateAfterPause;
- (id)currentLiveTask;
- (void)resumePlayCurrentMusic;
- (void)updateStateAfterResume;
- (void)setCurrentMusicAllVolumn:(int)a0;
- (void)setCurrentMusicAllVolumn:(int)a0 forceUpdate:(BOOL)a1;
- (void)setCurrentMusicAllVolumnWithoutSync:(int)a0;
- (void)syncBGMWithsuccessBlock:(id /* block */)a0 failBlock:(id /* block */)a1 action:(int)a2;
- (void)syncBGMOnStartWithsuccessBlock:(id /* block */)a0 failBlock:(id /* block */)a1;
- (BOOL)checkIfRequiredUpdateWithSongOptVersion:(unsigned long long)a0;
- (BOOL)requirmentToUpdateSong:(id)a0;
- (BOOL)requirmentToUpdateStatus:(unsigned int)a0;
- (BOOL)requirmentToUpdateVolume:(int)a0;
- (unsigned int)playStatus;
- (void)handlePlayMusicItemWillStart:(id)a0;
- (void)handlePlayMusicItem:(id)a0 started:(long long)a1;
- (void)handlePlayMusicItem:(id)a0 progress:(long long)a1 allDuration:(long long)a2;
- (void)handlePlayMusicItem:(id)a0 completed:(long long)a1;
- (void)clearPlayingState;
- (void)playMusic:(id)a0 publish:(BOOL)a1 startBlock:(id /* block */)a2 progressBlock:(id /* block */)a3 completionBlock:(id /* block */)a4;
- (void)internalPlayMusic:(id)a0 publish:(BOOL)a1 startBlock:(id /* block */)a2 progressBlock:(id /* block */)a3 completionBlock:(id /* block */)a4;
- (void)stopPlayMusic:(id)a0;
- (void)pausePlayMusic:(id)a0;
- (void)resumePlayMusic:(id)a0;
- (id)getAudioMgrInternal;
- (void)onMMLiveFinishedForNotifyOuter;
- (void).cxx_destruct;

@end
