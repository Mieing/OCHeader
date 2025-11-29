@class NSString;

@interface LSLiveNoiseSuppressionV2 : NSObject <LSLiveAudioAlgorithmProcessor> {
    struct unique_ptr<float[], std::default_delete<float[]>> { struct __compressed_pair<float *, std::default_delete<float[]>> { float *__value_; } __ptr_; } _data;
    struct unique_ptr<float[], std::default_delete<float[]>> { struct __compressed_pair<float *, std::default_delete<float[]>> { float *__value_; } __ptr_; } _data1;
    struct unique_ptr<float[], std::default_delete<float[]>> { struct __compressed_pair<float *, std::default_delete<float[]>> { float *__value_; } __ptr_; } _data2;
    float *_inData[2];
    float *_MonoData[1];
    struct vector<unsigned char, std::allocator<unsigned char>> { char *__begin_; char *__end_; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *__value_; } __end_cap_; } _modelVec;
    void *_handle;
    int _sampleRate;
    int _numChannels;
    int _blockSize;
    struct executorContextCreateParameter { int sampleRate; int maxBlockSize; char *modelBuffer; int modelLen; int numChannel; char *bussinessInfo; char *configInfo; int numAudioBuffer; } _createParameter;
    struct audioBuffer { unsigned int numberChannels; unsigned int numberSamples; int isInterleave; float **data; } _inBuffer;
    struct audioBlock { int dataType; unsigned int numberAudioData; void *audioData; } _inBlock;
    int _status;
    float _denoiseRate;
    float _denoiseMode;
    BOOL _useSingleChannel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)processBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 inNumberFrames:(unsigned int)a1;
- (id)initWithSample:(int)a0 channels:(int)a1 useSingleChannel:(BOOL)a2 resourceUrl:(id)a3;
- (void)setParams:(float)a0 param2:(float)a1 param3:(float)a2;
- (void)initNNBlockWithSampleRate:(int)a0 numChannels:(int)a1 modelPath:(id)a2;
- (void)initModelVecWithPath:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
