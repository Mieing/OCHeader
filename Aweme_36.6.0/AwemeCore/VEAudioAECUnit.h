@interface VEAudioAECUnit : VEAudioBaseUnit {
    struct unique_ptr<mammon::Effect, std::default_delete<mammon::Effect>> { struct __compressed_pair<mammon::Effect *, std::default_delete<mammon::Effect>> { struct Effect *__value_; } __ptr_; } _processor;
}

+ (id)requeirements;
+ (id)modelName;

- (void)p_stopProcessor;
- (void)p_startProcessor;
- (BOOL)processAudioSampleData:(id)a0;
- (void)p_initAudio;
- (void)p_processer:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 bgm:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a1 sampleCount:(int)a2 channel:(float)a3;
- (void)p_createFile;
- (BOOL)setAudioConfig:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)dealloc;

@end
