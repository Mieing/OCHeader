@interface VEAudioNewBalanceUnit : VEAudioBaseUnit {
    void *_handle;
    struct extractorCreateParameter { unsigned int sampleRate; unsigned int numChannel; } _param;
}

@property (copy, nonatomic) id /* block */ newBalanceCallback;

- (void)p_stopProcessor;
- (void)downData:(id)a0;
- (void)p_startProcessor;
- (BOOL)processAudioSampleData:(id)a0;
- (void)p_initAudio;
- (void)p_processer:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 sampleCount:(int)a1 channel:(float)a2;
- (void)p_getResults:(id)a0;
- (struct featureArray { struct feature *x0; unsigned int x1; unsigned int x2; } *)findWantedFeature:(struct featureSet { int x0; struct featureArray *x1; } *)a0 feature_id:(int)a1;
- (BOOL)setAudioConfig:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
