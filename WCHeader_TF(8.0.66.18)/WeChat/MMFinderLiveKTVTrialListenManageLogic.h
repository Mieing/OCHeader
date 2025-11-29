@class MMLiveStorageCleanupPinningToken, MMLiveTask, TrialListenBGMInfo, MMLiveTaskId, MMFinderLiveKSKitMusicSong, MMFinderLiveKTVTrialListenPlayer, MMFinderLiveKTVSongItem;

@interface MMFinderLiveKTVTrialListenManageLogic : NSObject

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (readonly, nonatomic) MMLiveTask *liveTask;
@property (nonatomic) long long currProcessState;
@property (retain, nonatomic) MMFinderLiveKSKitMusicSong *currSongData;
@property (retain, nonatomic) MMLiveStorageCleanupPinningToken *songResourcesPinningToken;
@property (retain, nonatomic) MMFinderLiveKTVTrialListenPlayer *trialListenPlayer;
@property (retain, nonatomic) TrialListenBGMInfo *currBgmInfo;
@property (nonatomic) BOOL isTrialListenPlaying;
@property (copy, nonatomic) id /* block */ playCallback;
@property (readonly, nonatomic) MMFinderLiveKTVSongItem *currSong;

- (id)initWithTaskId:(id)a0;
- (void)dealloc;
- (long long)start:(id)a0;
- (long long)stop;
- (long long)getOthersVolumeWhenTrialPlaying;
- (void)prepareResources;
- (void)startTrialPlay;
- (void)clearCurrentStates;
- (void)notifyPlaying:(BOOL)a0;
- (void)createTrialListenPlayerIfNeed;
- (void)updateProcessState:(long long)a0;
- (void).cxx_destruct;

@end
