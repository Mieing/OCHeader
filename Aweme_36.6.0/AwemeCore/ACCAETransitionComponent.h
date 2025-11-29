@class NSString, DVETransitionEffectBundleViewModel;
@protocol ACCAETrackLinkageServiceProtocol, ACCAEComponentActionProtocol, ACCAEViewContainerProtocol;

@interface ACCAETransitionComponent : ACCAdvanceEditComponent <DVEVideoTimeRangeChangeDelegate>

@property (weak, nonatomic) id<ACCAEComponentActionProtocol> actionHandler;
@property (weak, nonatomic) id<ACCAEViewContainerProtocol> root;
@property (weak, nonatomic) id<ACCAETrackLinkageServiceProtocol> trackLinkageService;
@property (retain, nonatomic) DVETransitionEffectBundleViewModel *effectViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindServices:(id)a0;
- (void)componentFirstFrameDidRender;
- (void)videoTimeRangeChangeDidCancelWithModel:(id)a0 fromModel:(id)a1;
- (void)videoTransitionWithModel:(id)a0 fromModel:(id)a1;
- (void)clickTransition:(id)a0;
- (void)preloadTransitionPanelIfNeeded;
- (void).cxx_destruct;

@end
