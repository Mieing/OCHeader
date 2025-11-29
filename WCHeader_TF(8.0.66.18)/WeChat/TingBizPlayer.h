@class TingPlayerConfiguration, TingPlayerStateMachine, NSString, TingItem;
@protocol TingBizPlayerDelegate;

@interface TingBizPlayer : NSObject <TingPlayingItem>

@property (retain, nonatomic) TingItem *tingItem;
@property (retain, nonatomic) TingPlayerConfiguration *tingConfiguration;
@property (retain, nonatomic) TingPlayerStateMachine *stateMachine;
@property (nonatomic) int previousEvent;
@property (weak, nonatomic) id<TingBizPlayerDelegate> delegate;
@property (readonly, nonatomic) int status;
@property (readonly, nonatomic) double currentTime;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double displayTime;
@property (readonly, nonatomic) int playerKernelType;
@property (readonly, nonatomic) unsigned int startTime;
@property (readonly, nonatomic) double progress;
@property (readonly, nonatomic) double bufferedTime;
@property (nonatomic) float playRate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTingItem:(id)a0 configuartion:(id)a1;
- (void)updateTingItem:(id)a0;
- (void)reset;
- (void)onError:(id)a0;
- (void)onError:(id)a0 toastMessage:(id)a1;
- (void)onEvent:(int)a0 error:(id)a1;
- (void)onInfoEvent:(int)a0 error:(id)a1;
- (void)notifyProgressChanged;
- (id)displayElement;
- (id)view;
- (BOOL)isPlayRateSupported;
- (BOOL)canSeek;
- (BOOL)isLoading;
- (BOOL)isPlaying;
- (BOOL)isPaused;
- (void)prepareToPlay;
- (void)play;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)seekToTime:(double)a0;
- (void)setVolume:(float)a0;
- (id)getAuditoryEnhanceEffectArgs;
- (void)setAudioMixPcmBuffer:(id)a0 hasMore:(BOOL)a1 streamType:(int)a2 sampleRate:(int)a3 sampleFormat:(int)a4 channelCount:(int)a5;
- (void)openAuthorPageInViewController:(id)a0;
- (void)openDetailPageInViewController:(id)a0;
- (void).cxx_destruct;

@end
