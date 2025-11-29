@class MMLiveTaskId, MMLiveTask;

@interface MMLiveLikeClapVoicePlayQueue : NSObject

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (readonly, nonatomic) MMLiveTask *liveTask;
@property (readonly, nonatomic) BOOL hasStartGlobalClap;
@property (nonatomic) unsigned long long currentGlobalClapPlayTimes;
@property (nonatomic) long long globalClapVoiceType;
@property (nonatomic) long long nextGlobalClapVoiceType;
@property (readonly, nonatomic) BOOL hasStartSelfClap;
@property (nonatomic) long long selfClapVoiceType;
@property (nonatomic) double globalClapVoiceStartPlayTime;
@property (nonatomic) double lastGlobalClapVoiceEndTime;
@property (nonatomic) BOOL needPlaySelfClapVoice;
@property (nonatomic) unsigned int playSelfClapVoiceCnt;
@property (copy, nonatomic) id /* block */ globalClapEndCallback;
@property (copy, nonatomic) id /* block */ selfClapEndCallback;

- (id)initWithTaskId:(id)a0;
- (BOOL)playGlobalLikeClapVoice:(long long)a0 endCallback:(id /* block */)a1;
- (void)stopPlayGlobalLikeClapVoice;
- (BOOL)playSelfLikeClapVoiceWithEndCallback:(id /* block */)a0;
- (void)stopPlaySelfLikeClapVoice:(BOOL)a0;
- (void)updateLikeClapVoiceVolumn;
- (void)innerStopPlaySelfLikeClapVoice;
- (id)getGlobalLikeClapVoicePath;
- (id)getSelfLikeClapVoicePath;
- (double)getGlobalClapPlayDurationForNewVoiceType;
- (void)updateGlobalClapType:(long long)a0;
- (void)invokeGlobalLikeClapVoicePlay;
- (BOOL)checkNeedContinuePlayGlobalClap;
- (BOOL)isCurrentGlobalClapPlayOverLimitTimes;
- (void)setGlobalLikeClapVoiceVolume:(long long)a0;
- (void)invokeSelfLikeClapVoicePlay;
- (void)setSelfLikeClapVoiceVolume:(long long)a0;
- (BOOL)isSelfLikeClapVoiceOverMinDuration;
- (BOOL)checkNeedStopSelfLikeClapVoice;
- (void).cxx_destruct;

@end
