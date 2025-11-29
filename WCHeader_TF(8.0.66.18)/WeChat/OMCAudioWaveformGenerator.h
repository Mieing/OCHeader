@interface OMCAudioWaveformGenerator : NSObject {
    struct SharedPtr<XMFAudioWaveformGenF32> { struct XMFAudioWaveformGenF32 *_ptr; } _backingGen;
}

- (id)initWithInputSampleCountPerOutputSample:(unsigned long long)a0;
- (id)initWithInputSampleCountPerOutputSample:(unsigned long long)a0 bufferScale:(unsigned long long)a1;
- (void)updateWithPCMData:(const float *)a0 length:(unsigned long long)a1;
- (void)reset;
- (const void *)outputSamples;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
