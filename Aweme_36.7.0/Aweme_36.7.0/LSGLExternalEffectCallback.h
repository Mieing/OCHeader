@interface LSGLExternalEffectCallback : NSObject

@property (copy, nonatomic) id /* block */ initialWithContextBlock;
@property (copy, nonatomic) id /* block */ initialProcessorWithConfigBlock;
@property (copy, nonatomic) id /* block */ setInputFramebufferBlock;
@property (copy, nonatomic) id /* block */ getOutputFramebufferBlock;
@property (copy, nonatomic) id /* block */ needRenderBlock;
@property (copy, nonatomic) id /* block */ newFrameReadyAtTimeBlock;
@property (copy, nonatomic) id /* block */ audioEffectProcessBlock;
@property (copy, nonatomic) id /* block */ audioEarMonitorEffectProcessBlock;
@property (copy, nonatomic) id /* block */ startProcessingBlock;
@property (copy, nonatomic) id /* block */ endProcessingBlock;
@property (copy, nonatomic) id /* block */ updateConfigBlock;
@property (copy, nonatomic) id /* block */ resetFacePointBlock;
@property (copy, nonatomic) id /* block */ effectAddBachAlgorithmConfigBlock;
@property (copy, nonatomic) id /* block */ setRoiInfoBlock;
@property (copy, nonatomic) id /* block */ setAudioPlayerFactoryBlock;
@property (copy, nonatomic) id /* block */ audioPlayerEventBlock;
@property (copy, nonatomic) id /* block */ releaseSDKBlock;
@property (copy, nonatomic) id /* block */ setAuxWithTextureBlock;
@property (copy, nonatomic) id /* block */ setEffectInfoBlock;
@property (copy, nonatomic) id /* block */ initialEffectCategoryBlock;
@property (copy, nonatomic) id /* block */ destructEffectModulesBlock;
@property (copy, nonatomic) id /* block */ checkBufferInEffectCategoryBlock;
@property (copy, nonatomic) id /* block */ pauseEffectIfNeededBlock;
@property (copy, nonatomic) id /* block */ restoreEffectIfNeededBlock;
@property (copy, nonatomic) id /* block */ setSpeechRecognitionKeywordsBlock;
@property (copy, nonatomic) id /* block */ getSpeechRecognitionKeywordsBlock;
@property (copy, nonatomic) id /* block */ recognizeAudioBlock;
@property (copy, nonatomic) id /* block */ getAudioEffectStatusBlock;
@property (copy, nonatomic) id /* block */ enableAudioRecognizeBlock;
@property (copy, nonatomic) id /* block */ setFindContourBlock;
@property (copy, nonatomic) id /* block */ setContourCalculateThresholdBlock;
@property (copy, nonatomic) id /* block */ setEnableContourCalculateBlock;
@property (copy, nonatomic) id /* block */ setMusicPlayTimeRequestCallbackBlock;
@property (copy, nonatomic) id /* block */ setEffectABLicenseBlock;
@property (copy, nonatomic) id /* block */ setComposerModeBlock;
@property (copy, nonatomic) id /* block */ audioDrivePictureEffectIsWorkingBlock;
@property (copy, nonatomic) id /* block */ audioDrivePictureEffectUseMicBlock;
@property (copy, nonatomic) id /* block */ audioDrivePictureEffectUseOutPlayBlock;
@property (copy, nonatomic) id /* block */ audioDrivePictureEffectUseOutPublishBlock;
@property (copy, nonatomic) id /* block */ audioDrivePictureEffectGetPlayVolumeBlock;
@property (copy, nonatomic) id /* block */ audioDrivePictureEffectGetPublishVolumeBlock;
@property (copy, nonatomic) id /* block */ onLinkMicAudioBlock;

- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
