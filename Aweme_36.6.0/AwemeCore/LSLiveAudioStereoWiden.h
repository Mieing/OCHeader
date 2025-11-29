@interface LSLiveAudioStereoWiden : NSObject {
    struct MsProcess { int x0; int x1; float x2; float x3; } *_stereoWiden;
    float *_bufferData;
    int _bufferLength;
    float *_inputBuffer;
    int _inputBufferLen;
    int _weightId;
}

- (BOOL)processBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0;
- (BOOL)getEnable;
- (BOOL)process:(float **)a0 andInput:(float *)a1 andLen:(int)a2 andSamplePerChannel:(int)a3;
- (void)updateFormat:(int)a0;
- (void)dealloc;
- (id)initWithChannel:(int)a0;

@end
