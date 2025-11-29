@class NSString, AWEComposerBeautyEffectWrapper;
@protocol ACCEditServiceProtocol;

@interface ACCEditorSpecialFilterHandler : ACCEditorSmartBeautyBasicHandler <ACCEditorOneClickBeautyHandler>

@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) AWEComposerBeautyEffectWrapper *colorEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)smartBeautyType;
- (void)smartBeautyRemoveWithContext:(id)a0;
- (void)smartBeautyPreloadDataIfNeed;
- (void)smartBeautyPrepareApplyWithContext:(id)a0 trackInfo:(id)a1 completion:(id /* block */)a2;
- (void)smartBeautyApplyWithContext:(id)a0;
- (BOOL)currentModelDownloaded;
- (BOOL)dataExist;
- (void)buildCurrentModelWithResponseModel:(id)a0;
- (id)toDownloadEffectModels;
- (id)logCategory;
- (void).cxx_destruct;
- (id)panelName;

@end
