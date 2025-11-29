@class AWECommentModel, NSString, NSDictionary, AWECommentAudioPlayerManager;

@interface AWECommentListAudioPlayerController : NSObject <AWECommentAudioPlayerManagerDelegate, AWECommentListAudioPlayerControllerProtocol>

@property (retain, nonatomic) AWECommentAudioPlayerManager *playerManager;
@property (retain, nonatomic) AWECommentModel *currentCommentModel;
@property (copy, nonatomic) NSDictionary *trackExtra;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL willStartPlay;
@property (nonatomic) BOOL hasWillPlayComment;
@property (nonatomic) BOOL forbidChangeState;
@property (nonatomic) double startTime;
@property (nonatomic) unsigned long long pauseAudioReasonType;
@property (copy, nonatomic) id /* block */ trackExtraBlock;
@property (copy, nonatomic) id /* block */ didStartedPlay;
@property (copy, nonatomic) id /* block */ didPausePlay;
@property (copy, nonatomic) id /* block */ didFinishedPlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playerManagerLoadState:(id)a0;
- (void)playerManagerDidStarted:(id)a0;
- (void)playerManagerDidFinished:(id)a0;
- (void)playerManagerDidFailed:(id)a0;
- (void)playerManagerPlaying:(id)a0 currentTime:(double)a1;
- (BOOL)needContinueAudio;
- (unsigned long long)pauseAudioReason;
- (void)pauseAudioWithCommentModel:(id)a0 needChangeState:(BOOL)a1;
- (void)stopAudioWithCommentModel:(id)a0 isForce:(BOOL)a1;
- (void)playAudioWithCommentModel:(id)a0 audioEffectExternInfo:(id)a1;
- (void)playAudioWithCommentModel:(id)a0 seekToTime:(double)a1 audioEffectExternInfo:(id)a2;
- (void)pauseAudioWithCommentModel:(id)a0 needChangeState:(BOOL)a1 isForce:(BOOL)a2;
- (void)pauseAudioWithCommentModel:(id)a0 needChangeState:(BOOL)a1 isForce:(BOOL)a2 pauseAudioReason:(unsigned long long)a3;
- (void)playAudioWithCommentModel:(id)a0 seekToTime:(double)a1;
- (void)continueAudioWithCommentModel:(id)a0;
- (void)trackCommentAudioAbnormalCaseWithType:(id)a0;
- (void)playerManagerDidPaused:(id)a0 isForce:(BOOL)a1;
- (void)playerManagerDidStoped:(id)a0 isForce:(BOOL)a1;
- (void)trackAudioInfoIfStopPlay;
- (void)trackAudioStop;
- (void)trackAudioFinish;
- (id)trackAudioCommonParams;
- (void)playAudioWithCommentModel:(id)a0 startTime:(double)a1 audioEffectExternInfo:(id)a2;
- (BOOL)isPlayingCommentModel:(id)a0;
- (void)audioPlayerManagerDidStarted;
- (void)audioPlayerManagerDidPaused:(BOOL)a0;
- (void)audioPlayerManagerDidStoped:(BOOL)a0;
- (BOOL)needAudioEffect;
- (void).cxx_destruct;

@end
