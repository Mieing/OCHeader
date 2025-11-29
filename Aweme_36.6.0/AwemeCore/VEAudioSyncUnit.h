@class VEAudioResamplerUnit;

@interface VEAudioSyncUnit : VEAudioBaseUnit {
    struct AudioBufferQueue { char *bufferData; unsigned int dataSize; } _bgmQueue;
    struct AudioBufferQueue { char *bufferData; unsigned int dataSize; } _micQueue;
}

@property (retain, nonatomic) VEAudioResamplerUnit *bgmAudioConverter;
@property (retain, nonatomic) VEAudioResamplerUnit *micAudioConverter;
@property (nonatomic) BOOL hasStarted;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startTime;
@property (nonatomic) unsigned int simpleProcessDatasize;
@property (copy, nonatomic) id /* block */ syncStatusCallBack;

- (void)checkConfig:(id)a0;
- (void)p_stopProcessor;
- (void)p_startProcessor;
- (void)p_initAudio;
- (void)p_processBGMData:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0;
- (BOOL)p_processMicData:(id)a0;
- (void)p_createFile;
- (BOOL)processSampleData:(id)a0;
- (BOOL)setAudioConfig:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
