@class IESMMAudioSamiProcessorConfig;

@interface IESMMAudioSamiProcessorFilter : VEAudioFilter {
    void *_handle;
}

@property (nonatomic) long long lastMediaTime;
@property (nonatomic) struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; struct __compressed_pair<double *, std::allocator<double>> { double *__value_; } __end_cap_; } lastParams;
@property (retain, nonatomic) IESMMAudioSamiProcessorConfig *config;

- (void)destroySAMI;
- (void *)createSAMIHandle:(id)a0 findPath:(id)a1;
- (struct vector<double, std::allocator<double>> { double *x0; double *x1; struct __compressed_pair<double *, std::allocator<double>> { double *x0; } x2; })parseKeyframeParam:(const void *)a0;
- (long long)getMediaTimeForSampleIndex:(long long)a0 sampleRate:(long long)a1;
- (void)initSami:(id)a0 sampleRate:(unsigned int)a1 sampleCount:(unsigned int)a2;
- (void)processKeyFrame:(long long)a0 paramIndex:(const void *)a1 clipParams:(const void *)a2 keyFrames:(const void *)a3;
- (void)processEachBlock:(unsigned int)a0 sampleOffset:(unsigned int)a1 channelCount:(unsigned int)a2 inDataBuff:(float **)a3 outDataBuff:(float **)a4;
- (int)processAudio:(float **)a0 output:(float **)a1 samples:(unsigned long long)a2 channels:(int)a3 mediaTime:(int)a4 sampleRate:(int)a5;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithConfig:(id)a0;
- (void)dealloc;

@end
