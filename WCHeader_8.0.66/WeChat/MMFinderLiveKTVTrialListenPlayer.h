@class TrialListenBGMInfo, MMLiveTaskId, MMLiveTask;

@interface MMFinderLiveKTVTrialListenPlayer : NSObject

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (readonly, nonatomic) MMLiveTask *liveTask;
@property (retain, nonatomic) TrialListenBGMInfo *bgmAudioInfo;
@property (copy, nonatomic) id /* block */ startCallback;
@property (copy, nonatomic) id /* block */ endCallback;
@property (nonatomic) unsigned long long startSeq;
@property (nonatomic) BOOL isStart;
@property (nonatomic) BOOL isStartPlaySucc;
@property (nonatomic) BOOL isPlayToSingingEndPosition;
@property (nonatomic) BOOL isEnd;
@property (nonatomic) long long bgmChnlId;

- (id)initWithTaskId:(id)a0;
- (void)initDefaultDatas;
- (void)configAudioParamSettings;
- (void)dealloc;
- (id)getAudioMgrInternal;
- (id)currentLiveTask;
- (void)clearPlayingState;
- (void)playBGM:(int)a0 path:(id)a1 startBlock:(id /* block */)a2 progressBlock:(id /* block */)a3 completionBlock:(id /* block */)a4;
- (void)seekToPosition:(long long)a0;
- (void)handlePlayMusicStart:(long long)a0;
- (void)handlePlayMusicProgress:(long long)a0 allDuration:(long long)a1;
- (void)handlePlayMusicEnd:(long long)a0;
- (void)startPlayResultAutoCheck;
- (void)finishPlayResultAutoCheck;
- (void)autoCheckPlayResult;
- (void)cancelPlayResultAutoCheck;
- (void)checkIsPlayToSingEndPosition:(long long)a0;
- (void)onPlayToSingEndPosition;
- (void)updateStartSeq;
- (void)prepareWithBGMInfo:(id)a0 onStart:(id /* block */)a1 onEnd:(id /* block */)a2;
- (void)start;
- (void)stop;
- (void)setBGMAbsVomlue:(int)a0;
- (void).cxx_destruct;

@end
