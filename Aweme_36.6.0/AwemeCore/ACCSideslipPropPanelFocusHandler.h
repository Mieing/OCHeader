@class ACCSideslipPropPanelApplyTrackerHelper, ACCSideslipPanelGenericTemplateApplyHandler, ACCSideslipPanelApplyContainer, ACCThrottle, NSString, ACCSideslipCanvasStyleUpdater, ACCSideslipPropPanelPropTryTrackerHelper, ACCSideslipPanelLegacyEffectApplyHandler;
@protocol ACCGenericEffectPanelTrackerService, ACCEditSpecialEffectServiceProtocol, ACCStickerServiceProtocol, ACCEditEffectPanelServiceProtocol, ACCSideslipPropPanelPluginLifeCycleService, ACCSideslipPropService, AWEStudioAIMateEditFeaturePublicAPI, ACCAIGCEffectServiceProtocol, ACCSideslipPropPanelUIConfigService, ACCVideoEditFlowControlService, ACCSideslipPropPanelService, ACCDraftAutoSaveProtocol, ACCSideslipPropPanelPrefetchService, ACCSequenceEditServiceProtocol, ACCSideslipPropPanelTrackerService, ACCEditServiceProtocol, ACCSideslipPropPanelEditorEventDispatchServiceProtocol;

@interface ACCSideslipPropPanelFocusHandler : ACCSideslipBaseFocusHandler <ACCVideoEditFlowControlSubscriber, ACCEditPreviewMessageProtocolD, ACCSequenceEditServicePlayerSubscriber>

@property (retain, nonatomic) ACCThrottle *applyWhileSlidingThrottle;
@property (retain, nonatomic) ACCSideslipCanvasStyleUpdater *canvasStyleUpdater;
@property (retain, nonatomic) ACCSideslipPropPanelApplyTrackerHelper *applyTrackerHelper;
@property (retain, nonatomic) ACCSideslipPropPanelPropTryTrackerHelper *propTryTrackHelper;
@property (retain, nonatomic) ACCSideslipPanelApplyContainer *applyContainer;
@property (retain, nonatomic) ACCSideslipPanelLegacyEffectApplyHandler *legacyEffectApplyHandler;
@property (retain, nonatomic) ACCSideslipPanelGenericTemplateApplyHandler *genericTemplateApplyHandler;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<ACCVideoEditFlowControlService> editFlowService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCSideslipPropService> sideslipPropService;
@property (weak, nonatomic) id<ACCSideslipPropPanelService> sideslipPropPanelService;
@property (weak, nonatomic) id<ACCEditSpecialEffectServiceProtocol> specialEffectService;
@property (weak, nonatomic) id<ACCSideslipPropPanelEditorEventDispatchServiceProtocol> panelEditorEventDispatchService;
@property (weak, nonatomic) id<ACCSideslipPropPanelTrackerService> sideslipTrackerService;
@property (weak, nonatomic) id<ACCGenericEffectPanelTrackerService> genericEffectPanelTrackerService;
@property (weak, nonatomic) id<ACCSideslipPropPanelUIConfigService> uiConfigService;
@property (weak, nonatomic) id<ACCAIGCEffectServiceProtocol> aigcService;
@property (weak, nonatomic) id<ACCEditEffectPanelServiceProtocol> genericEffectPanelService;
@property (weak, nonatomic) id<ACCDraftAutoSaveProtocol> draftSaveService;
@property (weak, nonatomic) id<ACCSideslipPropPanelPluginLifeCycleService> pluginLifeCycleService;
@property (weak, nonatomic) id<ACCSideslipPropPanelPrefetchService> sideslipPrefetchService;
@property (weak, nonatomic) id<AWEStudioAIMateEditFeaturePublicAPI> aiMateEditFeatureAPI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sequenceEditService:(id)a0 changedWithAddedIndexSet:(id)a1 deletedIndexSet:(id)a2;
- (void)notifyEditPageExitWithType:(long long)a0;
- (void)bindService;
- (void)handleCancelPickedPropIfNeeded;
- (void)playerPlayToEnd;
- (void)handleEffectMessage:(id)a0;
- (id)initWithServiceProvider:(id)a0 repository:(id)a1;
- (void)handleItemPickedIsScrollByUserDrag:(BOOL)a0;
- (void)handleWillScroll;
- (void)handleDidEndScroll;
- (void)handleWillBeginScrollByUserDrag;
- (void)handleDidEndScrollByUserDrag;
- (void)updateApplyedEffectIfNeeded:(BOOL)a0;
- (void)handleRemoveApplyedEffectOrTemplateIfNeededWith:(id)a0;
- (void)resetPropTryStartTimeIfNeeded;
- (void)trackPropTryFinishEventIfNeeded;
- (void)trackPropTry;
- (id)applyedEffectId;
- (void)clearEffectCachePathWithEffect:(id)a0;
- (id)applyTrackerService;
- (void)dispatchDidRemoveEffectEvent;
- (void)initApplyGapIfNeeded;
- (void)handleApplyWithRawModel:(id)a0 currentIndex:(long long)a1 shouldTapic:(BOOL)a2;
- (void)applyEffectWhenMaterialChanged:(id)a0;
- (void)p_handlePickedPropApplyIfNeededByUserDrag:(BOOL)a0;
- (void)sendHadRemoveEffectSingle;
- (void).cxx_destruct;

@end
