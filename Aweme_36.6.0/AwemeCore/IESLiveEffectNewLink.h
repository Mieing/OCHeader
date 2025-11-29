@class IESLiveEffectConfig, IESLiveEffectWrapper;

@interface IESLiveEffectNewLink : NSObject

@property (retain, nonatomic) IESLiveEffectConfig *effectConfig;
@property (retain, nonatomic) IESLiveEffectWrapper *effectWrapper;

- (id /* block */)initialWithContextBlockImpl;
- (id /* block */)initialProcessorWithConfigBlockImpl;
- (id /* block */)setInputFramebufferBlockImpl;
- (id /* block */)getOutputFramebufferBlockImpl;
- (id /* block */)needRenderBlockImpl;
- (id /* block */)newFrameReadyAtTimeBlockImpl;
- (id /* block */)startProcessingBlockImpl;
- (id /* block */)endProcessingBlockImpl;
- (id /* block */)updateConfigBlockImpl;
- (id /* block */)setEffectInfoBlockImpl;
- (id /* block */)resetFacePointBlockImpl;
- (id /* block */)effectAddBachAlgorithmConfigBlockImpl;
- (id /* block */)setRoiInfoBlockImpl;
- (id /* block */)setContourCalculateThresholdBlockImpl;
- (id /* block */)setEnableContourCalculateBlockImpl;
- (id /* block */)releaseSDKBlockImpl;
- (id /* block */)setAuxWithTextureBlockImpl;
- (id /* block */)initialEffectCategoryBlockImpl;
- (id /* block */)destructEffectModulesBlockImpl;
- (id /* block */)checkBufferInEffectCategoryBlockImpl;
- (id /* block */)pauseEffectIfNeededBlockImpl;
- (id /* block */)restoreEffectIfNeededBlockImpl;
- (id /* block */)setAudioPlayerFactoryBlockImpl;
- (id /* block */)audioEffectProcessBlockImpl;
- (id /* block */)audioEarMonitorEffectProcessBlockImpl;
- (id /* block */)setSpeechRecognitionKeywordsBlockImpl;
- (id /* block */)getSpeechRecognitionKeywordsBlockImpl;
- (id /* block */)recognizeAudioBlockImpl;
- (id /* block */)getAudioEffectStatusBlockImpl;
- (id /* block */)enableAudioRecognizeBlockImpl;
- (id /* block */)setFindContourBlockImpl;
- (id /* block */)audioDrivePictureEffectIsWorkingBlockImpl;
- (id /* block */)audioDrivePictureEffectUseMicBlockImpl;
- (id /* block */)audioDrivePictureEffectUseOutPlayBlockImpl;
- (id /* block */)audioDrivePictureEffectUseOutPublishBlockImpl;
- (id /* block */)onLinkMicAudioBlockImpl;
- (id /* block */)audioPlayerEventBlockImpl;
- (id /* block */)setMusicPlayTimeRequestCallbackBlockImpl;
- (id /* block */)audioDrivePictureEffectGetPlayVolumeBlockImpl;
- (id /* block */)audioDrivePictureEffectGetPublishVolumeBlockImpl;
- (id)getTransferEffectConfig:(id)a0;
- (void).cxx_destruct;
- (id)initWithCallback:(id)a0;

@end
