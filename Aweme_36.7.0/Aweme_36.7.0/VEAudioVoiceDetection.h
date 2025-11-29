@interface VEAudioVoiceDetection : NSObject {
    struct unique_ptr<mammon::Extractor, std::default_delete<mammon::Extractor>> { struct __compressed_pair<mammon::Extractor *, std::default_delete<mammon::Extractor>> { struct Extractor *__value_; } __ptr_; } _extractor;
}

@property (nonatomic) int audioFrameCount;
@property (nonatomic) float voiceDetectionResult;

- (id)initWithSampleRate:(int)a0 channels:(int)a1 config:(id)a2;
- (void)resetVoiceDetectionResult;
- (int)process:(float **)a0 samples:(unsigned long long)a1;
- (void).cxx_destruct;
- (float)fetchResult;
- (id).cxx_construct;
- (void)reset;
- (void)dealloc;

@end
