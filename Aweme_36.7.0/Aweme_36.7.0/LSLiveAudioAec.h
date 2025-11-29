@interface LSLiveAudioAec : NSObject {
    struct unique_ptr<LiveCoreAEC, std::default_delete<LiveCoreAEC>> { struct __compressed_pair<LiveCoreAEC *, std::default_delete<LiveCoreAEC>> { struct LiveCoreAEC *__value_; } __ptr_; } _aec;
    BOOL _useNNAec;
    BOOL _aecInited;
    int m_channles;
    int m_samplerate;
}

- (int)getAECType;
- (void)setEnableAgc:(BOOL)a0;
- (id)initWithSample:(int)a0 channels:(int)a1 modelPath:(const char *)a2;
- (void)setAECCoeff:(float)a0;
- (void)processPlayerBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 inNumberFrames:(unsigned int)a1;
- (void)processMicBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 inNumberFrames:(unsigned int)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
