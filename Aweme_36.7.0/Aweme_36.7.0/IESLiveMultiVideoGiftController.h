@class IESLiveVideoGiftMetalConfiguration, NSMutableDictionary, IESLiveVideoGiftMetalPlayer, IESLiveVideoGiftResourceModel, NSString, NSObject, CHHapticEngine;
@protocol OS_dispatch_source, OS_dispatch_queue, IESLiveMultiVideoGiftControllerDelegate;

@interface IESLiveMultiVideoGiftController : NSObject <IESLiveVideoGiftMetalPlayerDelegate>

@property (retain, nonatomic) IESLiveVideoGiftMetalConfiguration *configuration;
@property (retain, nonatomic) NSMutableDictionary *callbackMap;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *drawTimer;
@property (retain, nonatomic) CHHapticEngine *hapticEngine;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *asyncRenderQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mtkRenderQueue;
@property (retain, nonatomic) IESLiveVideoGiftMetalPlayer *foregroundPlayer;
@property (retain, nonatomic) IESLiveVideoGiftMetalPlayer *backgroundPlayer;
@property (weak, nonatomic) id<IESLiveMultiVideoGiftControllerDelegate> delegate;
@property (retain, nonatomic) IESLiveVideoGiftResourceModel *model;
@property unsigned long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (float)audioPlayVolume;
- (void)playWithConfiguration:(id)a0;
- (void)pr_addNotification;
- (void)configMTKRenderQueue;
- (void)destroyAllPlayers;
- (void)pr_didFinishPlayingWithForegroundError:(id)a0 backgroundError:(id)a1;
- (void)reportVibrateSceneError:(id)a0;
- (void)destroyHapticEngine;
- (void)renderCompletionWithForegroundError:(id)a0 backgroundError:(id)a1;
- (void)pauseAllPlayers;
- (void)resumeAllPlayers;
- (void)startPlayAudioResources;
- (BOOL)enableCallbackForEvent:(id)a0 withPlayer:(id)a1;
- (void)startPlayHaptic;
- (void)startDrawTimer;
- (void)didApplicationDidEnterBackground:(id)a0;
- (void)clearDrawTimer;
- (void)reportAtPlayer:(id)a0 scene:(unsigned long long)a1 sceneError:(id)a2;
- (void)player:(id)a0 frameCallBack:(double)a1;
- (void)player:(id)a0 playingWithNonFatalError:(id)a1;
- (void)player:(id)a0 didFinishPlayingWithError:(id)a1;
- (void)player:(id)a0 willPlayFrame:(id)a1;
- (void)player:(id)a0 didEndPlayingFrame:(id)a1;
- (void)player:(id)a0 didFrameCommandBufferCommitted:(id)a1 error:(id)a2;
- (void)player:(id)a0 sceneError:(id)a1 scene:(unsigned long long)a2;
- (BOOL)player:(id)a0 videoControllerShouldDelayPlayIfAudioResouces:(id)a1;
- (void)viewDidLoadOnPlayer:(id)a0;
- (void)didStartPlayingAudioPlayer:(id)a0;
- (void)player:(id)a0 prepareAudioWithSampleRate:(double)a1 channels:(unsigned int)a2;
- (void)player:(id)a0 processAudioFrameWithRawData:(float **)a1 samples:(int)a2 timestamp:(long long)a3;
- (id)player:(id)a0 externalAudioPlayer:(id)a1 resource:(id)a2 error:(id *)a3;
- (void)stopWithFinishPlayingCallback;
- (void)didApplicationDidBecomeActive:(id)a0;
- (void).cxx_destruct;
- (BOOL)pause;
- (BOOL)isPlaying;
- (id)init;
- (void)stop;
- (id)initWithDelegate:(id)a0;
- (void)seekToTime:(double)a0;
- (void)willResignActive:(id)a0;
- (BOOL)resume;
- (void)dealloc;

@end
