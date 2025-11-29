@class NSObject;
@protocol OS_dispatch_queue;

@interface BDByteLinkAudioPlayer : NSObject {
    struct OpaqueAudioQueue { } *_audioQueue;
    NSObject<OS_dispatch_queue> *_lockQueue;
    void *isOnRunTargetQueueKey;
    BOOL inuse[16];
    struct AudioQueueBuffer *audioQueueBuffer[16];
}

@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } inputASBD;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) struct { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; _Atomic int x4; BOOL x5; } *circularBuffer;
@property (nonatomic) unsigned long long pcmBufferSize;
@property (nonatomic) BOOL waitBufferFull;
@property (nonatomic) BOOL isInterleaved;
@property (nonatomic) unsigned long long bufferSizeToPlay;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *runQueue;

- (void)audioSessionInterruptionHandle:(id)a0;
- (void)createAudioQueue;
- (void)allocateBuffers;
- (long long)occupyPCMBufferSize;
- (long long)popPCMBuffer:(char *)a0 length:(int)a1;
- (long long)pushPCMBuffer:(char *)a0 length:(unsigned long long)a1;
- (void)enqueueBuffers;
- (long long)availablePCMBufferSize;
- (void)setBufferWith:(unsigned long long)a0 forUse:(BOOL)a1;
- (BOOL)bufferInuseWith:(unsigned long long)a0;
- (void)fillDataAndEqueue:(struct AudioQueueBuffer { unsigned int x0; void *x1; unsigned int x2; void *x3; unsigned int x4; struct AudioStreamPacketDescription *x5; unsigned int x6; } *)a0;
- (void)enqueueAudioBytes:(char *)a0 size:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)stop;
- (void)dealloc;
- (id)initWithASBD:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a0;

@end
