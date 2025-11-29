@class NSThread, TTVideoEngine, NSString, NSDictionary;
@protocol KryptonVideoPlayerDelegate;

@interface BUPlayableLynxKryptonVideoPlayer : NSObject <TTVideoEngineDelegate, TTVideoEngineDataSource, KryptonVideoPlayer>

@property (retain, nonatomic) TTVideoEngine *videoEngine;
@property (retain, nonatomic) id<KryptonVideoPlayerDelegate> playerDelegate;
@property (retain, nonatomic) NSThread *lynxJSThread;
@property (nonatomic) BOOL destroyed;
@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (copy, nonatomic) NSString *playToken;
@property (nonatomic) BOOL fixiOS18VideoNoPicture;
@property (nonatomic) BOOL fixNoAudioClockVideo;
@property (copy, nonatomic) NSDictionary *videoModelMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)resolutionWithValue:(long long)a0;
+ (id)apiWithToken:(id)a0;

- (void)videoEngineUserStopped:(id)a0;
- (void)videoEngine:(id)a0 playbackStateDidChanged:(long long)a1;
- (void)videoEngine:(id)a0 loadStateDidChanged:(unsigned long long)a1;
- (void)videoEngineDidFinish:(id)a0 error:(id)a1;
- (void)videoEngineDidFinish:(id)a0 videoStatusException:(long long)a1;
- (void)videoEngineCloseAysncFinish:(id)a0;
- (void)videoEngineReadyToDisPlay:(id)a0;
- (void)videoEngineReadyToPlay:(id)a0;
- (void)videoEngine:(id)a0 retryForError:(id)a1;
- (void)videoEngine:(id)a0 mdlKey:(id)a1 hitCacheSze:(long long)a2;
- (struct __CVBuffer { } *)copyPixelBuffer;
- (id)apiForFetcher:(unsigned long long)a0;
- (int)getVideoWidth;
- (int)getVideoHeight;
- (long long)getVideoRotation;
- (void)_notifyPlayerState:(id)a0;
- (void)notifyPlayerState:(long long)a0;
- (BOOL)getLooping;
- (void)configVideoPlayer;
- (void)setCurrentTime:(double)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (double)getDuration;
- (id)init;
- (void)setVolume:(double)a0;
- (void)dispose;
- (void)setSource:(id)a0;
- (void)resume;
- (void)setLooping:(BOOL)a0;
- (void)setDelegate:(id)a0;
- (double)getCurrentTime;
- (void)_loadWithURL:(id)a0;

@end
