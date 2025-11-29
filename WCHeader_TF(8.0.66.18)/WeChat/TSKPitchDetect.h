@interface TSKPitchDetect : NSObject {
    struct unique_ptr<audiobase::dsp::PitchDetect, std::default_delete<audiobase::dsp::PitchDetect>> { struct __compressed_pair<audiobase::dsp::PitchDetect *, std::default_delete<audiobase::dsp::PitchDetect>> { struct PitchDetect *__value_; } __ptr_; } _pd;
}

- (id)initWithSampleRate:(int)a0 channels:(int)a1 frameSize:(unsigned long long)a2 hopSize:(unsigned long long)a3 enableNonRealTimeCalculation:(BOOL)a4;
- (id)initWithSampleRate:(int)a0 channels:(int)a1 enableNonRealTimeCalculation:(BOOL)a2;
- (id)initWithSampleRate:(int)a0 channels:(int)a1;
- (void)dealloc;
- (void)process:(const short *)a0 bufLen:(unsigned long long)a1 timestamp:(float)a2;
- (id)pitchs;
- (void)seek:(unsigned long long)a0;
- (void)startTask;
- (void)stopTask;
- (id)nonRealTimePitchs;
- (id)nonRealTimePitchsAligned5Ms;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
