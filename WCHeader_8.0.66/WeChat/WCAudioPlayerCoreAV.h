@class WCAudioInfo, AVPlayer, NSString;
@protocol IWCAudioPlayerCoreDelegate;

@interface WCAudioPlayerCoreAV : NSObject <IWCAudioPlayerCore>

@property (nonatomic) unsigned long long status;
@property (nonatomic) double bufferedTime;
@property (retain, nonatomic) AVPlayer *innerPlayer;
@property (nonatomic) BOOL isPreparing;
@property (nonatomic) BOOL isObserving;
@property (nonatomic) BOOL isReuse;
@property (nonatomic) BOOL isPausedBeforeReset;
@property (weak, nonatomic) id<IWCAudioPlayerCoreDelegate> delegate;
@property (nonatomic) unsigned long long mode;
@property (readonly, nonatomic) WCAudioInfo *currentInfo;
@property (readonly, nonatomic) double currentTime;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double displayTime;
@property (nonatomic) float playRate;
@property (nonatomic) float volume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)onEvent:(unsigned long long)a0;
- (void)playWithAudioInfo:(id)a0 startTime:(double)a1;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)reset;
- (void)seekToTime:(double)a0 autoPlay:(BOOL)a1;
- (BOOL)isPlaying;
- (BOOL)isPaused;
- (void)removeAVObserver;
- (void)addAVObserver:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)onDidPlayToEndTimeNotification:(id)a0;
- (void)onFailedToPlayToEndTimeNotification:(id)a0;
- (void).cxx_destruct;

@end
