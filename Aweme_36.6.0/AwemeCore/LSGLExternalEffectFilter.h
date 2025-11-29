@class LSGLExternalEffectCallback, LSEffectContourInfoHelper;

@interface LSGLExternalEffectFilter : LSGLEffectFilter {
    struct unique_ptr<avframework::FFmpegAudioResampler, std::default_delete<avframework::FFmpegAudioResampler>> { struct __compressed_pair<avframework::FFmpegAudioResampler *, std::default_delete<avframework::FFmpegAudioResampler>> { struct FFmpegAudioResampler *__value_; } __ptr_; } s16_2_flt_resampler;
}

@property (retain, nonatomic) LSGLExternalEffectCallback *callback;
@property (nonatomic) int sampleRate;
@property (copy, nonatomic) id /* block */ contourDataBlock;
@property (copy, nonatomic) id /* block */ uncompressContourDataBlock;
@property (copy, nonatomic) id /* block */ effectMsgListenerBlock;
@property (retain, nonatomic) LSEffectContourInfoHelper *contourInfoHelper;
@property (readonly, nonatomic) int errorCount;

- (void)updateConfig:(id)a0;
- (void)resetFacePointBlock:(id /* block */)a0;
- (void)resetBachAlgorithmContourBlock:(id /* block */)a0;
- (void)resetBachAlgorithmUncompressContourBlock:(id /* block */)a0;
- (void)setEffectContourInfoHelperDataSource:(id)a0;
- (BOOL)effectAddBachAlgorithmConfig:(id)a0;
- (BOOL)setRoiInfoBlock:(id /* block */)a0;
- (BOOL)setAuxWithTexture:(unsigned int)a0 key:(id)a1 width:(unsigned int)a2 height:(unsigned int)a3;
- (void)setAudioPlayerFactory:(void *)a0;
- (BOOL)releaseSDK;
- (int)setComposerMode:(int)a0 orderType:(int)a1;
- (void)setMusicPlayTimeRequestCallback:(id /* block */)a0;
- (int)setSpeechRecognitionKeywords:(id)a0;
- (id)getSpeechRecognitionKeywords;
- (int)recognizeAudio:(const short *)a0 samplePerChannel:(int)a1 realSamplesPerChannel:(int *)a2;
- (BOOL)enableAudioRecognize;
- (int)audioEffectProcess:(float **)a0 outBuffer:(float **)a1 samplesPerChannel:(int)a2 realSamplesPerChannel:(int *)a3 channels:(int)a4 sampleRate:(int)a5;
- (int)audioEarMonitorEffectProcess:(float **)a0 outBuffer:(float **)a1 samplesPerChannel:(int)a2 realSamplesPerChannel:(int *)a3 channels:(int)a4 sampleRate:(int)a5;
- (void)setEffectABLicense:(id)a0;
- (void)restoreEffectIfNeeded;
- (void)setContourCalculateThreshold:(long long)a0;
- (void)setEnableContourCalculate:(BOOL)a0;
- (void)informTargetsAboutNewFrameAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)endProcessing;
- (id)framebufferForOutput;
- (void)setInputFramebuffer:(id)a0 atIndex:(long long)a1;
- (void)needRender:(BOOL)a0;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 atIndex:(long long)a1;
- (void)destructEffectModules;
- (void)checkBufferInEffectCategory:(struct __CVBuffer { } *)a0;
- (void)pauseEffectIfNeeded;
- (int)getAudioEffectStatus;
- (void)initialEffectCategory;
- (BOOL)audioDrivePictureEffectIsWorking;
- (BOOL)audioDrivePictureEffectUseInMic;
- (BOOL)audioDrivePictureEffectUseOutPlay;
- (BOOL)audioDrivePictureEffectUseOutPublish;
- (float)audioDrivePictureEffectGetPlayVolume;
- (float)audioDrivePictureEffectGetPublishVolume;
- (void)onMicForAudioDrivePictureEffect:(short *)a0 size:(unsigned int)a1 dataOut:(short *)a2 numberOfFrames:(int)a3 numberOfchannels:(int)a4 sampleRate:(int)a5;
- (void)audioPlayerEvent:(int)a0 event2:(int)a1;
- (void)setEffectInfoBlck:(id /* block */)a0;
- (void)disableExternalEffect;
- (id /* block */)findContourBlockImpl;
- (void)initialWithContext:(id)a0;
- (void)initialProcessorWithConfig:(id)a0;
- (void).cxx_destruct;
- (id)name;
- (id).cxx_construct;
- (id)initWithCallback:(id)a0;
- (id)processor;
- (void)startProcessing;

@end
