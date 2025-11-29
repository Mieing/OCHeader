@class IESMMAudioDetectionConfig;

@interface IESMMAudioDetection : VEAudioFilter {
    struct unique_ptr<mammon::Extractor, std::default_delete<mammon::Extractor>> { struct __compressed_pair<mammon::Extractor *, std::default_delete<mammon::Extractor>> { struct Extractor *__value_; } __ptr_; } _processor;
}

@property (weak, nonatomic) IESMMAudioDetectionConfig *config;
@property (readonly, nonatomic) float loudness;
@property (readonly, nonatomic) float peak;

- (id)initWithSampleRate:(int)a0 channels:(int)a1 config:(id)a2;
- (int)process:(float **)a0 samples:(unsigned long long)a1 channels:(int)a2;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)reset;
- (void)dealloc;

@end
