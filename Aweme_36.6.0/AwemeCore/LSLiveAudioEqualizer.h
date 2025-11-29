@class LSLiveAudioEqualizerFormat;

@interface LSLiveAudioEqualizer : NSObject {
    struct Equalizer { int x0; BOOL x1; int x2; int x3; float *x4; int x5; struct _equalizer_config_t *x6; BOOL x7; float *x8; float x9; float **x10; float **x11; float ***x12; float ***x13; BOOL x14; } *_equalizer;
    float *_bufferData;
    int _bufferLength;
    float *_inputBuffer;
    int _inputBufferLen;
    LSLiveAudioEqualizerFormat *_format;
}

- (id)initWithSample:(int)a0 channels:(int)a1;
- (BOOL)processBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0;
- (BOOL)getEnable;
- (BOOL)process:(float **)a0 andInput:(float *)a1 andLen:(int)a2 andSamplePerChannel:(int)a3;
- (void)updateFormat:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
