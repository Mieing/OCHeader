@interface VEAudioBufferQueue : NSObject

@property (nonatomic) struct _VECompileAudioBuffer { short *audioDataList; unsigned long long dataSize; unsigned long long maxSize; long long initialPts; long long processedSampleCount; } audioBufferPool;

- (id)initWithMaxQueueSize:(unsigned long long)a0;
- (void)enqueueAudioData:(short *)a0 sampleCount:(unsigned int)a1 pts:(long long)a2;
- (void)enqueueInterleavedAudioData:(float *)a0 sampleCount:(unsigned int)a1 pts:(long long)a2 format:(int)a3;
- (void)enqueueAudioSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (BOOL)dequeueAudioData:(short *)a0 outPts:(long long *)a1 sampleCount:(unsigned int)a2 outSampleCount:(unsigned int *)a3 dequeueWithMismatchSampleCount:(BOOL)a4;
- (void)dealloc;

@end
