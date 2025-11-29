@class NSString, ACCSideslipPanelApplyContainer, ACCSideslipPanelAIGCApplyHandler;
@protocol ACCSideslipPropPanelService, ACCSideslipPropPanelTrackerService, ACCVideoEditFlowControlService;

@interface ACCSideslipAIGCPanelFocusHandler : ACCSideslipBaseFocusHandler <ACCVideoEditFlowControlSubscriber, ACCSideslipPropPanelAIGCFocusEditorHandleServiceProtocol>

@property (weak, nonatomic) id<ACCVideoEditFlowControlService> editFlowService;
@property (weak, nonatomic) id<ACCSideslipPropPanelService> sideslipPropPanelService;
@property (weak, nonatomic) id<ACCSideslipPropPanelTrackerService> sideslipTrackerService;
@property (retain, nonatomic) ACCSideslipPanelApplyContainer *applyContainer;
@property (retain, nonatomic) ACCSideslipPanelAIGCApplyHandler *aigcApplyHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *applyedEffectId;
@property (readonly, nonatomic) long long applyedEffectIndex;
@property (nonatomic) BOOL handleItemPickedIsScrollByUserDrag;
@property (readonly, nonatomic) BOOL hasApplyPropFailed;

- (void)notifyEditPageExitWithType:(long long)a0;
- (void)bindService;
- (void)handleCancelPickedPropIfNeeded;
- (id)initWithServiceProvider:(id)a0 repository:(id)a1;
- (void)handleItemPickedIsScrollByUserDrag:(BOOL)a0;
- (void)handleWillScroll;
- (void)handleDidEndScroll;
- (void)handleWillBeginScrollByUserDrag;
- (void)handleDidEndScrollByUserDrag;
- (void)relocateApplyPropIfNeeded;
- (void)updateApplyedEffectIfNeeded:(BOOL)a0;
- (void)handleRemoveApplyedEffectOrTemplateIfNeededWith:(id)a0;
- (void)resetPropTryStartTimeIfNeeded;
- (void)trackPropTryFinishEventIfNeeded;
- (void)trackPropTry;
- (BOOL)applyEffect:(id)a0 index:(long long)a1;
- (void)clearEffectCachePathWithEffect:(id)a0;
- (void)clearEffectCachePathWithEffect:(id)a0 onIndex:(id)a1;
- (void).cxx_destruct;

@end
