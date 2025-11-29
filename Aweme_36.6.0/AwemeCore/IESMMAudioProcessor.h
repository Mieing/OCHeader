@class IESMMEffectConfig, NSString, NSObject;
@protocol OS_dispatch_semaphore;

@interface IESMMAudioProcessor : NSObject <IESMMAudioProcessProtocol>

@property (nonatomic) int audioSamplerate;
@property (nonatomic) int audioChannels;
@property (retain, nonatomic) IESMMEffectConfig *config;
@property (nonatomic) void *renderHandle;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *sem_lock;
@property (nonatomic) BOOL useAudioEffectSticker;
@property (nonatomic) BOOL effectNodeInAudioChainIsOn;
@property (nonatomic) BOOL useAudioBackend;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)setMusicPlayMode:(long long)a0;
- (BOOL)needProcessAudio;
- (BOOL)needResolveAudio;
- (void)setAudioSampleRate:(int)a0 channel:(int)a1;
- (void)sendAudioBuffer:(struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; })a0;
- (void)processAudio:(struct opaqueCMSampleBuffer { } *)a0;
- (void)finishAudioProcess;
- (void)resolveAudio:(struct opaqueCMSampleBuffer { } *)a0;
- (void)finishAudioResolve;
- (id)initWithConfig:(id)a0 effectHandle:(void *)a1;
- (BOOL)enableCher;
- (BOOL)enableAudioReco;
- (void)destory;
- (void).cxx_destruct;

@end
