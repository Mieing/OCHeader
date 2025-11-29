@class NSString, NSDictionary, AWECommentAudioPlayerManager, UIView, AWECommentAudioModel;
@protocol AWECommentAudioContentViewProtocol;

@interface AWECommentInputAudioPlayerController : NSObject <AWECommentAudioPlayerManagerDelegate, AWECommentAudioContentViewDelegate, AWECommentInputAudioPlayerControllerProtocol>

@property (retain, nonatomic) AWECommentAudioPlayerManager *playerManager;
@property (copy, nonatomic) NSDictionary *trackExtra;
@property (nonatomic) BOOL forbidChangeState;
@property (nonatomic) BOOL didPausedPreviousPlayer;
@property (nonatomic) unsigned long long pauseAudioReasonType;
@property (nonatomic) double startTime;
@property (weak, nonatomic) UIView<AWECommentAudioContentViewProtocol> *audioContentView;
@property (retain, nonatomic) AWECommentAudioModel *commentAudioModel;
@property (copy, nonatomic) id /* block */ closeAudioContentViewBlock;
@property (copy, nonatomic) id /* block */ willPausePreviousPlayer;
@property (copy, nonatomic) id /* block */ willResumePreviousPlayer;
@property (copy, nonatomic) id /* block */ trackExtraBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)commentAudioContentViewTapped:(id)a0 type:(unsigned long long)a1;
- (void)commentAudioContentViewPanGesture:(id)a0 type:(unsigned long long)a1 progress:(double)a2;
- (void)playerManagerLoadState:(id)a0;
- (void)playerManagerDidStarted:(id)a0;
- (void)playerManagerDidFinished:(id)a0;
- (void)playerManagerDidFailed:(id)a0;
- (void)playerManagerPlaying:(id)a0 currentTime:(double)a1;
- (void)stopAudio;
- (void)pauseAudio;
- (void)pauseAudioWithReason:(unsigned long long)a0;
- (void)continueAudio;
- (BOOL)needContinueAudio;
- (BOOL)isPlayerPlaying;
- (unsigned long long)pauseAudioReason;
- (void)trackCommentAudioAbnormalCaseWithType:(id)a0;
- (void)playerManagerDidPaused:(id)a0 isForce:(BOOL)a1;
- (void)playerManagerDidStoped:(id)a0 isForce:(BOOL)a1;
- (void)trackAudioContentSlide:(double)a0;
- (void)trackAudioDelete;
- (void)trackAudioContentTapIsStart:(BOOL)a0;
- (void)willResumePreviousWithIsForce:(BOOL)a0;
- (void)trackAudioInfoIfStopPlay;
- (void)trackAudioStop;
- (void)trackAudioFinish;
- (id)trackAudioCommonParams;
- (void).cxx_destruct;

@end
