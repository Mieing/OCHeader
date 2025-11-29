@class NSString, ACCEditorSideslipEffectApplyTracker, AWEVideoPublishViewModel;
@protocol ACCSideslipPropPanelService, ACCSideslipGenericTemplateService, IESServiceProvider, ACCEditEffectPanelServiceProtocol;

@interface ACCSideslipPropPanelApplyTrackerHelper : NSObject

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) id<ACCSideslipPropPanelService> sideslipPropPanelService;
@property (weak, nonatomic) id<ACCSideslipGenericTemplateService> genericTemplateService;
@property (weak, nonatomic) id<ACCEditEffectPanelServiceProtocol> genericEffectPanelService;
@property (retain, nonatomic) ACCEditorSideslipEffectApplyTracker *applyTracker;
@property (nonatomic) BOOL hasAppliedEffectBefore;
@property (copy, nonatomic) NSString *lastCancelEffectId;
@property (nonatomic) unsigned long long lastCancelEffectType;
@property (nonatomic) BOOL isScrolling;
@property (nonatomic) double timeScrollStarted;
@property (nonatomic) unsigned long long applyCountWhileScroll;

- (void)trackWithEventType:(id)a0;
- (void)updateApplyStage:(unsigned long long)a0;
- (void)trackWithEventType:(id)a0 error:(id)a1;
- (void)appendMsg:(id)a0;
- (id)initWithServiceContainer:(id)a0 repository:(id)a1;
- (void)trackApplyGenericTemplate:(id)a0 isAutoApply:(BOOL)a1 isAIMemory:(BOOL)a2 isAIMemoryTemplate:(BOOL)a3;
- (void)appendMaterailsInfoWithNLE:(id)a0;
- (void)trackGenericTemplateRenderCallbackWithGenericTemplate:(id)a0;
- (void)trackApplyGenericTemplate:(id)a0 isAutoApply:(BOOL)a1;
- (void)trackApplyEffectModel:(id)a0 isAutoApply:(BOOL)a1;
- (id)p_applyScene;
- (id)p_applyReason;
- (id)p_panelType;
- (void)p_trackEventStartWithContext:(id)a0;
- (void)markWhenWillScroll;
- (void)markDidEndScroll;
- (void)trackCancelIfNeeded;
- (void).cxx_destruct;

@end
