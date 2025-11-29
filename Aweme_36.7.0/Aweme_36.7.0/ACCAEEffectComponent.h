@class ACCAEEffectPanelViewModel, ACCAEEffectApplyHandler, ACCAEEffectTracker, NSString, ACCAEEffectTrackViewModel, DVETrackPanelContext, ACCAEEffectPickerViewController;
@protocol DVEPlayerServiceProtocol, AEKEffectOperator, ACCAEGlobalDraftDownloadProtocol, DVENLEEditorProtocol, DVEEditingContextProtocol, DVETrackEventProtocol, ACCAEViewContainerProtocol, DVEEditingRuntimeProtocol;

@interface ACCAEEffectComponent : ACCAdvanceEditComponent <ACCAEEffectPickerViewControllerDelegate, AEKPreviewEditorSubscriber>

@property (weak, nonatomic) DVETrackPanelContext *panelContext;
@property (weak, nonatomic) id<DVEEditingRuntimeProtocol> mediaContext;
@property (weak, nonatomic) id<ACCAEViewContainerProtocol> viewControllerService;
@property (weak, nonatomic) id<DVEEditingContextProtocol> editingContext;
@property (weak, nonatomic) id<DVENLEEditorProtocol> nleEditor;
@property (weak, nonatomic) id<DVEPlayerServiceProtocol> playerService;
@property (weak, nonatomic) id<DVETrackEventProtocol> dveTracker;
@property (weak, nonatomic) id<ACCAEGlobalDraftDownloadProtocol> globalDraftDownloadHandler;
@property (retain, nonatomic) ACCAEEffectTrackViewModel *effectTrackVM;
@property (retain, nonatomic) ACCAEEffectPickerViewController *effectViewController;
@property (retain, nonatomic) ACCAEEffectPanelViewModel *viewModel;
@property (retain, nonatomic) ACCAEEffectApplyHandler *handler;
@property (retain, nonatomic) ACCAEEffectTracker *tracker;
@property (nonatomic) double playerTimeWhenPanelShown;
@property (retain, nonatomic) id<AEKEffectOperator> currentPreviewEffect;
@property (retain, nonatomic) id<AEKEffectOperator> selectedEffectWhenPanelShow;
@property (nonatomic) BOOL isPreviewingEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playerCurrentPlayTimeChanged:(double)a0;
- (double)currentPlayerTime;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (void)bindServices:(id)a0;
- (void)componentFirstFrameDidRender;
- (void)registerMenuActions;
- (void)prefetchEffectPickerData;
- (void)menuActionClickEffect:(id)a0;
- (void)menuActionApplySceneEffect:(id)a0;
- (void)menuActionApplyCharacterEffect:(id)a0;
- (void)menuActionReplace:(id)a0;
- (void)menuActionCopy:(id)a0;
- (void)menuActionDelete:(id)a0;
- (void)menuActionApplyToCurrentSegment:(id)a0;
- (void)menuActionApplyToAllSegment:(id)a0;
- (BOOL)checkIfCurrentPlayerTimeEnableToAddAndToastIfNeeded;
- (void)createEffectPickerViewController;
- (BOOL)checkEffectCountOrLayerReachMax:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 ignore:(id)a1;
- (id)currentSelectedEffect;
- (BOOL)checkEffectLayerReachMax:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 ignore:(id)a1;
- (double)validEffectEndTimeWithStart:(double)a0;
- (BOOL)checkIfEffectCountReachMaxAndToastIfNeeded;
- (id)prefetchCategoryKeys;
- (void)didUpdateEffect:(id)a0;
- (void)didClearSelectedEffect;
- (void)aeEffectPickerDidTapConfirmBtn:(id)a0;
- (void)aeEffectPickerDidTapCancelBtn:(id)a0;
- (void).cxx_destruct;

@end
