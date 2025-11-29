@class LSGLFramebuffer, LSGLBmfBrightenFilter, LSLiveEffectProcessorInterface;

@interface LSGLEffectFilter : LSGLFilter {
    BOOL _needRender;
    BOOL _enableMipmap;
    struct LSGPUTextureOptions { unsigned int minFilter; unsigned int magFilter; unsigned int wrapS; unsigned int wrapT; unsigned int internalFormat; unsigned int format; unsigned int type; unsigned int bind; } _outputTextureOptionsMipmap;
    LSGLFramebuffer *lastEffectProcessdFrame;
}

@property (retain, nonatomic) LSGLBmfBrightenFilter *videoBrighten;
@property (nonatomic) BOOL isAux;
@property (nonatomic) struct CGSize { double width; double height; } lastEffectFrameSize;
@property (nonatomic) int forceDetectCount;
@property (nonatomic) BOOL forceDetectInFirstThreeFrames;
@property (retain, nonatomic) LSLiveEffectProcessorInterface *processor;
@property (nonatomic) BOOL enableEffect;
@property (copy, nonatomic) id /* block */ effectInfoBlck;

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
- (void)handleFullLinkEnableDumpNotifications:(id)a0;
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
- (BOOL)checkEnableMipmap;
- (id)fetchOutputFrameBuffer;
- (void)videoBrightenProcess:(const struct { long long x0; int x1; unsigned int x2; long long x3; } *)a0;
- (void)generateMipmap:(int)a0;
- (void)releaseFBO;
- (void)skipFrameProcess;
- (id)videoBrightenParams;
- (BOOL)videoBrightenSetup:(id)a0 callback:(id /* block */)a1;
- (id)videoBrightenGetReport;
- (void)videoBrightenSetEnable:(BOOL)a0;
- (void)disableExternalEffect;
- (void)initialProcessorWithConfig:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)name;
- (void)dealloc;
- (void)startProcessing;

@end
