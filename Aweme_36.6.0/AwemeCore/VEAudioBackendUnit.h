@interface VEAudioBackendUnit : VEAudioBaseUnit

@property (nonatomic) void *processor;

- (void)checkConfig:(id)a0;
- (int)p_processer:(float *)a0 datasize:(unsigned long long)a1 channel:(unsigned long long)a2 type:(int)a3 sampleCount:(unsigned long long)a4;
- (int)p_getResult:(float *)a0 datasize:(unsigned long long)a1 channel:(unsigned long long)a2 type:(int)a3 sampleCount:(unsigned long long)a4;
- (void)p_stopProcessor;
- (void)downData:(id)a0;
- (void)p_startProcessor;
- (BOOL)processAudioSampleData:(id)a0;
- (void)p_initAudio;
- (BOOL)setAudioConfig:(id)a0;
- (id)init;
- (void)dealloc;

@end
