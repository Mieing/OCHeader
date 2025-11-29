@class AWERequestVidFeatureModel, NSString, AWEMusicModel, AWEUITransitionHost, ACCPicTemplateShootEntranceConfigHelper;

@interface ACCGenericTemplateRouterHelperImpl : NSObject <ACCGenericTemplateRouterHelperProtocol>

@property (retain, nonatomic) AWEUITransitionHost *transitionHost;
@property (retain, nonatomic) ACCPicTemplateShootEntranceConfigHelper *shootEntranceConfig;
@property (retain, nonatomic) AWERequestVidFeatureModel *featureModel;
@property (retain, nonatomic) AWEMusicModel *templateShootSelectMusic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)ensureLoginRequirementsForVideoRecording:(id /* block */)a0;
- (void)startVideoWithGenericTemplateId:(id)a0 templateType:(long long)a1 trackParams:(id)a2 mvSource:(id)a3 featureModel:(id)a4 completion:(id /* block */)a5;
- (void)startVideoWithGenericTemplateId:(id)a0 templateType:(long long)a1 trackParams:(id)a2 mvSource:(id)a3 completion:(id /* block */)a4;
- (void)startVideoWithGenericTemplateModel:(id)a0 trackParams:(id)a1 mvSource:(id)a2 completion:(id /* block */)a3;
- (void)startVideoWithGenericTemplateModel:(id)a0 trackParams:(id)a1 mvSource:(id)a2 featureModel:(id)a3 completion:(id /* block */)a4;
- (void)startVideoWithGenericTemplateId:(id)a0 templateType:(long long)a1 publishModel:(id)a2 trackParams:(id)a3 mvSource:(id)a4 completion:(id /* block */)a5;
- (void)startVideoWithGenericTemplateId:(id)a0 templateType:(long long)a1 publishModel:(id)a2 trackParams:(id)a3 mvSource:(id)a4 featureModel:(id)a5 completion:(id /* block */)a6;
- (void)startVideoWithGenericTemplateModel:(id)a0 publishModel:(id)a1 trackParams:(id)a2 mvSource:(id)a3 completion:(id /* block */)a4;
- (void)startVideoWithGenericTemplateModel:(id)a0 publishModel:(id)a1 trackParams:(id)a2 fromMvScene:(unsigned long long)a3 mvSource:(id)a4 completion:(id /* block */)a5;
- (void)startVideoWithGenericTemplateModel:(id)a0 publishModel:(id)a1 trackParams:(id)a2 fromMvScene:(unsigned long long)a3 mvSource:(id)a4 featureModel:(id)a5 completion:(id /* block */)a6;
- (id)applyGenericTemplateModel:(id)a0 service:(id)a1 publishModel:(id)a2 trackParams:(id)a3 fromMvScene:(unsigned long long)a4 mvSource:(id)a5;
- (void)predownloadTemplateResourcesIfNeeded:(id)a0 service:(id)a1;
- (void)p_applyAIAvatarTemplate:(id)a0 profileInfo:(id)a1 service:(id)a2 publishModel:(id)a3 trackParams:(id)a4 fromMvScene:(unsigned long long)a5 mvSource:(id)a6 completion:(id /* block */)a7;
- (id)p_setupContextForApplyTemplate:(id)a0 publishModel:(id)a1 fromMvScene:(unsigned long long)a2 mvSource:(id)a3 trackParams:(id)a4;
- (void)p_presentGenericTemplateImportViewController:(id)a0 publishModel:(id)a1 service:(id)a2 trackParams:(id)a3 completion:(id /* block */)a4;
- (void)p_applyOnlyAIAvatarSlotsTemplateWithLoraInfo:(id)a0 template:(id)a1 publishModel:(id)a2 service:(id)a3 completion:(id /* block */)a4;
- (id)configInputData:(id)a0 featureModel:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
