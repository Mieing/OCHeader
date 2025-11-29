@class NSString;
@protocol ACCAETrackLinkageServiceProtocol, DVEPlayerServiceProtocol, DVETrackEventProtocol, DVECoreAudioProtocol, ACCAEViewContainerProtocol, ACCAdvanceEditViewModelProtocol, ACCAdvanceActionDispatchProtocol, ACCAEComponentActionProtocol, DVECoreVideoProtocol, DVEEditingRuntimeProtocol, DVEComponentViewManagerProtocol, DVELoadingViewProtocol, DVEMulitpleTrackViewServiceProtocol;

@interface ACCAEMusicEditActionComponent : ACCAdvanceEditComponent <AEKDiffChangeSubscriber, DVEVideoTimeRangeChangeDelegate>

@property (weak, nonatomic) id<ACCAEComponentActionProtocol> actionHandler;
@property (weak, nonatomic) id<ACCAdvanceActionDispatchProtocol> actionDispatch;
@property (weak, nonatomic) id<DVEComponentViewManagerProtocol> bottomBarManager;
@property (weak, nonatomic) id<DVEEditingRuntimeProtocol> mediaContext;
@property (weak, nonatomic) id<DVETrackEventProtocol> trackManager;
@property (weak, nonatomic) id<DVECoreAudioProtocol> audioEditor;
@property (weak, nonatomic) id<DVELoadingViewProtocol> loadingView;
@property (weak, nonatomic) id<DVEPlayerServiceProtocol> playerService;
@property (weak, nonatomic) id<DVECoreVideoProtocol> videoEditor;
@property (weak, nonatomic) id<DVEMulitpleTrackViewServiceProtocol> multipleTrackViewService;
@property (weak, nonatomic) id<ACCAEViewContainerProtocol> rootViewController;
@property (weak, nonatomic) id<ACCAdvanceEditViewModelProtocol> advanceEditViewModel;
@property (weak, nonatomic) id<ACCAETrackLinkageServiceProtocol> trackLinkageService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)diffResults:(id)a0 fromSource:(unsigned long long)a1;
- (void)componentDidMount;
- (void)bindServices:(id)a0;
- (BOOL)p_showTipsForDisable:(id)a0;
- (id)audioItemStatus:(id)a0;
- (void)videoTimeRangeChangeDidCancelWithModel:(id)a0 fromModel:(id)a1;
- (void)handleReplace:(id)a0;
- (void)handleVolume:(id)a0;
- (void)handleFade:(id)a0;
- (void)handleSplit:(id)a0;
- (void)handleDelete:(id)a0;
- (void)handleSpeed:(id)a0;
- (void)p_updateContextRuntimeDiffInfo:(id)a0;
- (void).cxx_destruct;

@end
