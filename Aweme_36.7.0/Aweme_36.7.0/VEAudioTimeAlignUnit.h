@interface VEAudioTimeAlignUnit : VEAudioBaseUnit {
    void *_executor;
    struct property { int x0; int x1; int x2; void *x3; unsigned int x4; char *x5; void *x6; } *_property;
    struct AudioBufferQueue { char *bufferData; unsigned int dataSize; } _micbufferQuene;
    struct AudioBufferQueue { char *bufferData; unsigned int dataSize; } _bgmbufferQuene;
}

@property (nonatomic) double fristAudioCallbackTime;
@property (nonatomic) double fristVideoTime;
@property (nonatomic) double fristAudioTime;

- (void)p_stopProcessor;
- (void)downData:(id)a0;
- (void)p_startProcessor;
- (void)p_onStopProcessor;
- (void)p_initAudio;
- (void)p_processer:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 bgm:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a1 sampleCount:(int)a2 channel:(float)a3;
- (float)p_getDelayTime;
- (BOOL)processSampleData:(id)a0;
- (void)setFirstVideoTime:(double)a0 firstAudioTime:(double)a1;
- (BOOL)setAudioConfig:(id)a0;
- (id)init;
- (void)dealloc;

@end
