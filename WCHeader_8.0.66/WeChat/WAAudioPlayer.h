@class NSString, AVPlayer;
@protocol IWAAudioPlayerDelegate;

@interface WAAudioPlayer : MMObject <WAAudioPlayerInterface> {
    long long _state;
}

@property (weak, nonatomic) id<IWAAudioPlayerDelegate> delegate;
@property (retain, nonatomic) AVPlayer *player;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *audioId;
@property (retain, nonatomic) NSString *src;
@property (nonatomic) double startTime;
@property (nonatomic) double startPostion;
@property (nonatomic) double bufferTime;
@property (nonatomic) BOOL autoLoop;
@property (nonatomic) BOOL autoPlay;
@property (nonatomic) BOOL isSeeking;
@property (nonatomic) BOOL readyToPlay;
@property (nonatomic) double playbackRate;
@property (readonly, nonatomic) double curTime;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double volume;
@property (readonly, nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)addObserver;
- (void)removeObserver;
- (id)initWithAudioId:(id)a0 appId:(id)a1 delegate:(id)a2;
- (void)setPlayerWithSrc:(id)a0 url:(id)a1 startTime:(double)a2 autoPlay:(BOOL)a3 loop:(BOOL)a4 obeyMuteSwitch:(BOOL)a5 volume:(double)a6 fileData:(id)a7 playbackRate:(double)a8 referrer:(id)a9;
- (void)play;
- (void)realPlay;
- (void)pause;
- (void)forcePause;
- (void)stop;
- (void)seekTo:(double)a0;
- (BOOL)isSet;
- (BOOL)isPlaying;
- (BOOL)isPaused;
- (BOOL)isWaiting;
- (BOOL)isIdle;
- (void)setState:(long long)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)tryToSeekAfterReadyToPlay;
- (void)onPlayerDidFinishPlaying;
- (void)onPlayerItemFailedToPlayToEndTime:(id)a0;
- (void).cxx_destruct;

@end
