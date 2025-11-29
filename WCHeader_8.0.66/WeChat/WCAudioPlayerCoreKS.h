@class NSString, WCAudioPlayerCoreKSPauseContext, WCAudioPlayerSeekingContext, KSAudioPlayer, WCAudioInfo;
@protocol IWCAudioPlayerCoreDelegate;

@interface WCAudioPlayerCoreKS : NSObject <IWCAudioPlayerCore>

@property (retain, nonatomic) KSAudioPlayer *innerPlayer;
@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) WCAudioPlayerCoreKSPauseContext *pauseContext;
@property (nonatomic) BOOL isKSResuming;
@property (retain, nonatomic) WCAudioPlayerSeekingContext *seekingContext;
@property (weak, nonatomic) id<IWCAudioPlayerCoreDelegate> delegate;
@property (nonatomic) unsigned long long mode;
@property (readonly, nonatomic) WCAudioInfo *currentInfo;
@property (readonly, nonatomic) double currentTime;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double bufferedTime;
@property (readonly, nonatomic) double displayTime;
@property (nonatomic) float playRate;
@property (nonatomic) float volume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)cacheRootPath;
+ (void)cleanCache;

- (void)dealloc;
- (id)fileCacheIdForAudioInfo:(id)a0;
- (void)playWithAudioInfo:(id)a0 startTime:(double)a1;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)reset;
- (void)seekToTime:(double)a0 autoPlay:(BOOL)a1;
- (BOOL)isPlaying;
- (BOOL)isPaused;
- (unsigned long long)_updateStateWithStatus:(unsigned long long)a0 songInfo:(id)a1 params:(id)a2;
- (void)audioPlayer:(id)a0 status:(unsigned long long)a1 params:(id)a2;
- (void)audioPlayer:(id)a0 dataBuffering:(double)a1;
- (void).cxx_destruct;

@end
