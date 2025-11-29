@interface IESMMAudioDenoise : IESMMObject {
    struct unique_ptr<mammon::Effect, std::default_delete<mammon::Effect>> { struct __compressed_pair<mammon::Effect *, std::default_delete<mammon::Effect>> { struct Effect *__value_; } __ptr_; } _processor;
}

- (id)initWithSampleRate:(int)a0 channels:(int)a1 config:(id)a2;
- (int)process:(float **)a0 samples:(unsigned long long)a1 channels:(int)a2;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)reset;
- (void)seekToTime:(double)a0;
- (void)dealloc;

@end
