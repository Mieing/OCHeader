@class AVPlayerItem, NSString, KSSongInfo, AVPlayer;
@protocol KSAudioPlayerDelegate;

@interface MMKSLiveAudioPlayer : NSObject <KSAudioPlayerProtocol>

@property (retain, nonatomic) AVPlayer *player;
@property (retain, nonatomic) AVPlayerItem *currentPlayerItem;
@property (nonatomic) double cacheProgress;
@property (nonatomic) double bufferTime;
@property (nonatomic) double seekTime;
@property (nonatomic) double resumeTime;
@property (nonatomic) BOOL bIsObservering;
@property (nonatomic) BOOL bIsManualPaused;
@property (nonatomic) BOOL isPendingPlay;
@property (nonatomic) BOOL isPreparing;
@property (readonly, nonatomic) KSSongInfo *curSong;
@property (weak, nonatomic) id<KSAudioPlayerDelegate> delegate;
@property (readonly, nonatomic) unsigned long long status;
@property (nonatomic) BOOL manualProcessInterrup;
@property (nonatomic) BOOL pauseOnHeadPhoneOut;
@property (nonatomic) double playbackRate;
@property (nonatomic) float volume;
@property (readonly, nonatomic) double curTime;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) unsigned int secondCacheCnt;
@property (readonly, nonatomic) double playTimeWithNoPause;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (BOOL)play:(id)a0;
- (BOOL)play:(id)a0 seekTime:(double)a1;
- (void)stop;
- (void)internalStop;
- (void)pause;
- (void)resume;
- (void)seek:(double)a0;
- (double)firstBufTime;
- (id)dataProviderDetail;
- (id)errDetail;
- (unsigned long long)errType;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setStatus:(unsigned long long)a0 error:(id)a1;
- (void)setStatus:(unsigned long long)a0 error:(id)a1 presetParams:(id)a2;
- (void)releasePlayer;
- (void)addObserver;
- (void)removeObserver;
- (void)onPlayerDidFinishPlaying;
- (void)onPlayerItemFailedToPlayToEndTime:(id)a0;
- (void).cxx_destruct;

@end
