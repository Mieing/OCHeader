@class ACCSideslipPropPanelApplyTrackerHelper, NSString, ACCSideslipPropPanelPropTryTrackerHelper, IESEffectModel, ACCSideslipCanvasStyleUpdater;
@protocol ACCSideslipPropPanelDownloadService, ACCEditSpecialEffectServiceProtocol, ACCSideslipPropPanelEditorEventDispatchServiceProtocol, ACCEditEffectPanelServiceProtocol, ACCGenericEffectPanelTrackerService, ACCEditElementBindService, ACCGenericTemplateApplierService, ACCSideslipPropService, ACCSideslipPropPanelService, ACCDraftAutoSaveProtocol, ACCSequenceEditServiceProtocol, ACCSideslipPropPanelTrackerService, ACCEditServiceProtocol, ACCEditToolMusicEffectProtocol;

@interface ACCSideslipPanelLegacyEffectApplyHandler : ACCSideslipPanelBaseApplyHandler <ACCSideslipPropPanelDownloadServiceSubscriber>

@property (nonatomic) long long currentIndex;
@property (nonatomic) BOOL shouldTapic;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCSideslipPropService> sideslipPropService;
@property (weak, nonatomic) id<ACCSideslipPropPanelService> sideslipPropPanelService;
@property (weak, nonatomic) id<ACCSideslipPropPanelTrackerService> sideslipTrackerService;
@property (weak, nonatomic) id<ACCEditEffectPanelServiceProtocol> genericEffectPanelService;
@property (weak, nonatomic) id<ACCGenericEffectPanelTrackerService> genericEffectPanelTrackerService;
@property (weak, nonatomic) id<ACCSideslipPropPanelEditorEventDispatchServiceProtocol> panelEditorEventDispatchService;
@property (weak, nonatomic) id<ACCSideslipPropPanelDownloadService> sideslipPropDownloadService;
@property (weak, nonatomic) id<ACCEditElementBindService> editElementBindService;
@property (weak, nonatomic) id<ACCEditToolMusicEffectProtocol> effectProtocol;
@property (weak, nonatomic) id<ACCEditSpecialEffectServiceProtocol> specialEffectService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCDraftAutoSaveProtocol> draftSaveService;
@property (weak, nonatomic) id<ACCGenericTemplateApplierService> templateApplierService;
@property (retain, nonatomic) IESEffectModel *appliedEffect;
@property (retain, nonatomic) ACCSideslipCanvasStyleUpdater *canvasStyleUpdater;
@property (retain, nonatomic) ACCSideslipPropPanelApplyTrackerHelper *applyTrackerHelper;
@property (retain, nonatomic) ACCSideslipPropPanelPropTryTrackerHelper *propTryTrackHelper;
@property (copy, nonatomic) id /* block */ didUpdateAppliedEffectIndex;
@property (copy, nonatomic) id /* block */ handleApplyAIGCTransitionEffect;
@property (copy, nonatomic) id /* block */ handleRemoveAIGCTransitionEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindService;
- (void)downloadService:(id)a0 didFinishDownloadDataModel:(id)a1;
- (void)downloadService:(id)a0 didFailDownloadDataModel:(id)a1 withError:(id)a2;
- (BOOL)applyEffect:(id)a0 index:(long long)a1;
- (id)initWithServiceContainer:(id)a0 repository:(id)a1;
- (void)forceRemoveAppliedEffectWithScene:(unsigned long long)a0;
- (BOOL)handleApplyWithEffectRawModel:(id)a0;
- (BOOL)handleRemoveAppliedEffectWithScene:(id)a0;
- (id)appliedEffectId;
- (id)applyTrackerService;
- (BOOL)handleApplyEffect:(id)a0;
- (void)clearEffectCachePathIfNeededWithEffect:(id)a0;
- (void)replaceWithEffectRawModel:(id)a0 resources:(id)a1;
- (void)willReplaceSlotWithScene:(unsigned long long)a0;
- (void)removeAppliedEffectWithScene:(unsigned long long)a0 context:(id)a1;
- (void)enterPlayModeIfNeed;
- (void)dispatchDidApplyEffectEvent;
- (void)updateCurrentIndex:(long long)a0 shouldTapic:(BOOL)a1;
- (void)removeAppliedEffect:(BOOL)a0 context:(id)a1;
- (void)effectDidAppliedWithModel:(id)a0;
- (void)setEffect:(id)a0 withStartTime:(double)a1 andStopTime:(double)a2 effectCachePath:(id)a3;
- (void)handleGenericPanelApplyIfNeededAfterModelDownload:(id)a0;
- (void)handleSideslipApplyIfNeededAfterModelDownload:(id)a0;
- (void).cxx_destruct;

@end
