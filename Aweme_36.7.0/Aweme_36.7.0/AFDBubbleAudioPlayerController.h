@class AFDNotesAudioModel, NSString, AFDBubbleAudioContentView, UIView, AFDAudioPlayerManager;

@interface AFDBubbleAudioPlayerController : NSObject <AFDAudioPlayerManagerDelegate, AFDBubbleAudioContentViewDelegate, AFDBubbleAudioPlayerControllerProtocol>

@property (retain, nonatomic) AFDBubbleAudioContentView *audioContentView;
@property (retain, nonatomic) AFDAudioPlayerManager *playerManager;
@property (retain, nonatomic) AFDNotesAudioModel *audioModel;
@property (nonatomic) BOOL isPlayByClick;
@property (nonatomic) double lastStartTime;
@property (readonly, nonatomic) UIView *contentView;
@property (nonatomic) BOOL isBGColorWhite;
@property (copy, nonatomic) id /* block */ playerDidPlayBlock;
@property (copy, nonatomic) id /* block */ playerDidPauseBlock;
@property (copy, nonatomic) id /* block */ playerDidFinishBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playerManagerLoadState:(id)a0;
- (void)playerManagerDidStarted:(id)a0;
- (void)playerManagerDidPaused:(id)a0;
- (void)playerManagerDidStopped:(id)a0;
- (void)playerManagerDidFinished:(id)a0;
- (void)playerManagerDidFailed:(id)a0;
- (void)playerManagerPlaying:(id)a0 currentTime:(double)a1;
- (void)stopAudio;
- (void)pauseAudio;
- (void)continueAudio;
- (BOOL)isPlayerPlaying;
- (void)configPlayer;
- (void)configWithAudioModelObject:(id)a0;
- (void)trackPlayTime;
- (void)bubbleAudioContentViewTapped:(id)a0;
- (void)configWithAudioModel:(id)a0;
- (void).cxx_destruct;
- (void)playAudio;

@end
