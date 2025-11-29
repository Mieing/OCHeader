@class LSLiveAudioEqualizer, LSLiveAudioReverbV2, LSLiveAudioCleaner, LSLiveAudioStereoWiden, LSLiveAudioReverb, LSLiveAudioExciter, LSLiveMMAudioCompressor;

@interface LSLiveAudioEffect : NSObject {
    LSLiveAudioCleaner *_audioCleaner;
    LSLiveAudioReverb *_reverb;
    LSLiveAudioStereoWiden *_stereoWiden;
    LSLiveAudioEqualizer *_equalizer;
    LSLiveAudioReverbV2 *_reverb2;
    LSLiveAudioExciter *_exciter;
    LSLiveMMAudioCompressor *_compressor;
    double _sampleRate;
    float *_audioData;
    float *_singScoreData;
    float *_exciterOutput;
    float *_exciterOutputL;
    float *_exciterOutputR;
    int _exciterOutLength;
    int _audioDataLen;
    int _singScoreDataLen;
    int _exciterDataLen;
    BOOL _enableCleaner;
    BOOL _enableExciter;
    BOOL _enableCompressor;
    BOOL _useFloat;
}

- (BOOL)needProcess;
- (void)processBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0;
- (BOOL)convertFloatDataWithAudioBuffer:(float *)a0 inAudioBuffer:(struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; })a1;
- (void)convertIntDataForAudioBuffer:(struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; })a0 inAudioData:(float *)a1 numberOfChannels:(int)a2 samplesPerChannel:(int)a3;
- (id)initWithSampleRate:(double)a0 channels:(int)a1 useFloat:(BOOL)a2;
- (void)processBuffer:(struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; })a0 samplePerCh:(int)a1;
- (void)updateStereoWiden:(int)a0;
- (void)updateReverbFormat:(id)a0;
- (void)updateEqualizerFormat:(id)a0;
- (void)updateReverb2Format:(id)a0;
- (void)updateAudioCleanerFormat:(id)a0;
- (void)updateExciterFormat:(id)a0;
- (void)updateCompressFormat:(id)a0;
- (void)enableCleaner:(BOOL)a0;
- (void)enableExciter:(BOOL)a0;
- (void)enableCompressor:(BOOL)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
