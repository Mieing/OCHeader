@class NSString;

@interface IESMMAudioDSP : VEAudioEffectBase {
    struct unique_ptr<mammon::MDSPEffect, std::default_delete<mammon::MDSPEffect>> { struct __compressed_pair<mammon::MDSPEffect *, std::default_delete<mammon::MDSPEffect>> { struct MDSPEffect *__value_; } __ptr_; } _processor;
}

@property (retain, nonatomic) NSString *effectPath;

- (int)process:(float **)a0 samples:(int)a1 channels:(int)a2;
- (id)initWithSampleRate:(int)a0 config:(id)a1;
- (void)changeEffectPath:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)reset;
- (void)dealloc;

@end
