@interface IESMMAudioLimiter : VEAudioEffectBase {
    void *_limiter;
    struct unique_ptr<mammon::Effect, std::default_delete<mammon::Effect>> { struct __compressed_pair<mammon::Effect *, std::default_delete<mammon::Effect>> { struct Effect *__value_; } __ptr_; } _limitProcessor;
    int _channels;
}

@property (nonatomic) float volume;

- (id)initWithChannels:(int)a0 sampleRate:(int)a1;
- (void)processStereo:(float **)a0 samplesPerCh:(int)a1;
- (void)processPlanarStereo:(float *)a0 samplesPerCh:(int)a1;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (id)init;
- (id).cxx_construct;
- (void)reset;
- (void)dealloc;

@end
