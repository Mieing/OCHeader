@class AWEAIGCLegacyBusinessContext, AWEEffectEditorManager, NSString, ACCAIGCCustomServiceImpl;
@protocol ACCEditServiceProtocol, AWEAIGCLegacyBusinessLegacyLoadingProtocol, AWEAIGCLegacyBusinessAfterProcessProtocol, ACCMusicVolumeViewModelProtocol, AWEAIGCLegacyBusinessAISuitProtocol, AWEAIGCLegacyBusinessLegacyAsyncQueueProtocol, AWEAIGCLegacyBusinessLegacyLoraProtocol, AWEAIGCLegacyBusinessAIMultiStyleProtocol;

@interface AWEAIGCLegacyBusinessLegacyAIEffect : NSObject <AWEAIGCLegacyBusinessLegacyAIEffectProtocol>

@property (retain, nonatomic) AWEAIGCLegacyBusinessContext *context;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCMusicVolumeViewModelProtocol> musicVolumeService;
@property (retain, nonatomic) ACCAIGCCustomServiceImpl *aigcCustomServiceImpl;
@property (retain, nonatomic) AWEEffectEditorManager *effectEditor;
@property (weak, nonatomic) id<AWEAIGCLegacyBusinessLegacyAsyncQueueProtocol> asyncQueue;
@property (weak, nonatomic) id<AWEAIGCLegacyBusinessAISuitProtocol> aiSuit;
@property (weak, nonatomic) id<AWEAIGCLegacyBusinessAIMultiStyleProtocol> multiStyle;
@property (weak, nonatomic) id<AWEAIGCLegacyBusinessAfterProcessProtocol> afterProcess;
@property (weak, nonatomic) id<AWEAIGCLegacyBusinessLegacyLoraProtocol> lora;
@property (weak, nonatomic) id<AWEAIGCLegacyBusinessLegacyLoadingProtocol> loading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleLegacyEffectMsg:(id)a0 taskId:(long long)a1;
- (void)handleShowPanelAndApplyEffect;
- (void)handleAIProcessCompletionWithSuccess:(BOOL)a0 isAsync:(BOOL)a1 resultModel:(id)a2 error:(id)a3 errMsg:(id)a4;
- (BOOL)handleCameraI2VApplyEffectIfNeeded;
- (void)handleCustomEffectWhenDirectPublishWithCellIndex:(long long)a0;
- (void)requestCustomizedEffectIdIfNeeded;
- (void)cameraI2VEffectHandleAIProcess;
- (void)handleAIGCCreationWithReceiveBody:(id)a0 taskId:(long long)a1;
- (BOOL)shuffleEditorSelectData;
- (void)recoverI2VGeneratedVideoInfo;
- (BOOL)remarkIndexStatus:(long long)a0 editPropId:(id)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)effect;
- (id)repository;

@end
