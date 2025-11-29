@class NSString;

@interface VEAudioQueueUnit : IESMMObject <VEAudioPlayerProtocol> {
    struct AudioQueueBuffer **_audioQueueBufferRefArray;
}

@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } asbd;
@property (nonatomic) struct OpaqueAudioQueue { } *audioQueue;
@property (nonatomic) unsigned int renderFrames;
@property (nonatomic) int bufferCount;
@property (nonatomic) BOOL isResetting;
@property (nonatomic) BOOL waitingForFirstPlayCallback;
@property (nonatomic) BOOL isAsyncExecute;
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

- (void)createAudioBufferQueue;
- (void)enqueueBuffer:(struct AudioQueueBuffer { unsigned int x0; void *x1; unsigned int x2; void *x3; unsigned int x4; struct AudioStreamPacketDescription *x5; unsigned int x6; } *)a0;
- (id)initWithAudioFormat:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a0;
- (void)resetAudioQueue;
- (void)resetAudioQueueBufferArray;
- (void)flush;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)init;
- (void)stop;
- (void)setVolume:(float)a0;
- (void)dealloc;
- (void)fillBuffer;
- (float)getVolume;

@end
