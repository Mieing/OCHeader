@class NSMutableArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface VEAudioOutputUnit : VEAudioBaseUnit {
    struct AudioBufferQueue { char *bufferData; unsigned int dataSize; } _bufferQuene;
    NSObject<OS_dispatch_semaphore> *_sem;
}

@property (retain, nonatomic) NSMutableArray *buffers;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startTime;
@property (nonatomic) unsigned int simpleDataSize;
@property (nonatomic) float loudness_results;
@property (nonatomic) float peak_results;
@property (nonatomic) float delayTime;
@property (nonatomic) BOOL needOutput;
@property (nonatomic) BOOL micHasStarted;
@property (nonatomic) BOOL bgmHasStarted;
@property (nonatomic) double bgmSimpleTime;
@property (nonatomic) double micSimpleTime;
@property (nonatomic) double bgmDelayTime;
@property (nonatomic) double micDelayTime;

- (void)checkConfig:(id)a0;
- (void)p_stopProcessor;
- (void)p_startProcessor;
- (void)p_onStopProcessor;
- (struct opaqueCMSampleBuffer { } *)getCMSampleBuffer;
- (void)getAudioBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0;
- (float)getTimeAlign;
- (BOOL)processSampleData:(id)a0;
- (BOOL)setAudioConfig:(id)a0;
- (id)init:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
