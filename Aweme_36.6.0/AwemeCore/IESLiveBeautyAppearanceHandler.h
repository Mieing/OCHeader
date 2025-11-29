@class NSArray, NSString;

@interface IESLiveBeautyAppearanceHandler : IESLiveBeautyBaseHandler <IESLiveEffectConflictStatusHandle, IESLiveEffectModuleBeautyForAudienceService>

@property (retain, nonatomic) NSArray *cacheResourceItems;
@property (nonatomic) BOOL isCacheResourceRender;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleEffectConflictStatus:(long long)a0 scene:(long long)a1;
- (void)switchItemDidSelect:(id)a0;
- (id)initWithConfig:(id)a0 context:(id)a1 diContext:(id)a2;
- (void)beautyResourceDownloadComplete:(id)a0;
- (void)cacheResourceItemsWith:(id)a0;
- (void)rectifyBeautyResource;
- (void)useCacheResourceRender;
- (void)effectEnvironmentReady;
- (void)appearanceSwitchItemDidSelect:(id)a0;
- (void)onEntryItemSelected;
- (void)updateBeautyItemsForInterfaceTextCompletion:(id /* block */)a0 resourceCompletion:(id /* block */)a1;
- (double)outputValueForItemForInterface:(id)a0;
- (id)provideBeautyResourceInfo;
- (long long)currentEffectProcessScene;
- (void)onInitRenderComplete;
- (id)needAutoRenderBeautyItems;
- (void).cxx_destruct;
- (long long)defaultSelectedIndex;

@end
