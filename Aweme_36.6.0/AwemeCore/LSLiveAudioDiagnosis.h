@interface LSLiveAudioDiagnosis : NSObject {
    void *_diagnosis;
    int _sampleRate;
}

- (id)init:(BOOL)a0 sampleRate:(int)a1 channels:(int)a2 maxBlockSize:(int)a3 modelFilePath:(const char *)a4 parameters:(const char *)a5 threshold:(const char *)a6 switchInfo:(const char *)a7;
- (void)processBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 inNumberFrames:(unsigned int)a1;
- (void)dealloc;
- (id)getResult;

@end
