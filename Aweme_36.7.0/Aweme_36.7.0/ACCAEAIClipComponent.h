@class NSNumber, NSString;
@protocol DVEEditingRuntimeProtocol, ACCAEViewContainerProtocol, DVECoreActionServiceProtocol, DVEComponentViewManagerProtocol, DVENLEEditorProtocol, ACCAdvanceEditViewModelProtocol, ACCAEComponentActionProtocol, ACCAdvanceEditBeatsViewModelProtocol, DVELoadingViewProtocol, DVETrackEventProtocol, DVEPlayerServiceProtocol, DVECoreVideoProtocol;

@interface ACCAEAIClipComponent : ACCAdvanceEditComponent <DVECoreActionDelegate>

@property (weak, nonatomic) id<ACCAEComponentActionProtocol> actionHandler;
@property (weak, nonatomic) id<ACCAdvanceEditViewModelProtocol> viewModel;
@property (weak, nonatomic) id<ACCAdvanceEditBeatsViewModelProtocol> beatsViewModel;
@property (weak, nonatomic) id<DVEPlayerServiceProtocol> playerService;
@property (weak, nonatomic) id<DVEEditingRuntimeProtocol> mediaContext;
@property (weak, nonatomic) id<DVETrackEventProtocol> trackManager;
@property (weak, nonatomic) id<DVECoreVideoProtocol> videoEditor;
@property (weak, nonatomic) id<ACCAEViewContainerProtocol> rootViewController;
@property (weak, nonatomic) id<DVEComponentViewManagerProtocol> bottomComponentManager;
@property (weak, nonatomic) id<DVECoreActionServiceProtocol> actionService;
@property (weak, nonatomic) id<DVENLEEditorProtocol> nleEditor;
@property (weak, nonatomic) id<DVETrackEventProtocol> tracker;
@property (weak, nonatomic) id<DVELoadingViewProtocol> loadingView;
@property (copy, nonatomic) NSNumber *realtimeBeatOnBoolObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMount;
- (void)componentDidUnmount;
- (void)bindServices:(id)a0;
- (void)nleEditorDidChange;
- (void)nleEditorWillDone;
- (void)undoRedoWillClikeByUser;
- (void)undoRedoClikedByUser;
- (void)accessibilityConfig:(id)a0;
- (void)handleAIClip:(id)a0;
- (id)AIClipStatus:(id)a0;
- (void)configAIClipStatueCell:(id)a0;
- (id)AIRangeStatus:(id)a0;
- (void)handleAIRange:(id)a0;
- (void)p_refreshAIClipStatusUI;
- (void)p_checkRealtimeBeatEdit;
- (void)trackAlertConfirm;
- (void)trackAlertCancel;
- (void).cxx_destruct;

@end
