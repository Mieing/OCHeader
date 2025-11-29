@class IESLiveEffectConfig, IESLiveRenderFilterWrapper;

@interface IESLiveRenderFilterNewLink : NSObject

@property (retain, nonatomic) IESLiveEffectConfig *effectConfig;
@property (retain, nonatomic) IESLiveRenderFilterWrapper *renderFilterWrapper;

- (id /* block */)initialWithContextBlockImpl;
- (id /* block */)initialProcessorWithConfigBlockImpl;
- (id /* block */)setInputFramebufferBlockImpl;
- (id /* block */)getOutputFramebufferBlockImpl;
- (id /* block */)needRenderBlockImpl;
- (id /* block */)newFrameReadyAtTimeBlockImpl;
- (id /* block */)startProcessingBlockImpl;
- (id /* block */)endProcessingBlockImpl;
- (id /* block */)updateConfigBlockImpl;
- (id /* block */)releaseSDKBlockImpl;
- (id)getTransferEffectConfig:(id)a0;
- (id /* block */)setEffectABLicenseBlockImpl;
- (id /* block */)setComposerModeBlockImpl;
- (void).cxx_destruct;
- (id)initWithCallback:(id)a0;

@end
