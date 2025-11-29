@class NSString;

@interface VEAudioUnit : IESMMObject <VEAudioPlayerProtocol>

@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } asbd;
@property (nonatomic) unsigned int renderFrames;
@property (nonatomic) int bufferCount;
@property (nonatomic) BOOL isResetting;
@property (nonatomic) BOOL waitingForFirstPlayCallback;
@property (nonatomic) struct OpaqueAUGraph { } *graph;
@property (nonatomic) int outputNode;
@property (nonatomic) int mixerNode;
@property (nonatomic) struct OpaqueAudioComponentInstance { } *outputUnit;
@property (nonatomic) struct OpaqueAudioComponentInstance { } *mixerUnit;
@property (copy, nonatomic) id /* block */ getNextBufferBlock;
@property (copy, nonatomic) id /* block */ getUnitNextBufferBlock;
@property (copy, nonatomic) id /* block */ playDidStartBlock;
@property (copy, nonatomic) id /* block */ playerDidStartBlock;
@property (nonatomic) BOOL isPlaying;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)recordQueueUnitCreation:(id)a0;
+ (void)recordQueueUnitDestruction:(id)a0;
+ (id)audioQueueUnitFromPointer:(void *)a0;

- (id)initWithAudioFormat:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a0;
- (void)resetAudioQueue;
- (void)p_initAudioGraph;
- (void)p_setupAudioSesson;
- (void)p_setupMixerUnit;
- (void)p_setupOutputUnit;
- (void)p_stopAudioUnit;
- (void)p_destroyGraph;
- (void)p_flush:(struct OpaqueAudioComponentInstance { } *)a0;
- (void)resetAudioQueueBufferArray;
- (void)flush;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)init;
- (void)stop;
- (void)setVolume:(float)a0;
- (void)dealloc;
- (float)getVolume;

@end
