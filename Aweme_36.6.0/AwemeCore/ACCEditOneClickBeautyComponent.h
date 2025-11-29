@class ACCEditorOneClickBeautyViewModel, ACCBarItem, NSString, UIView, ACCEditorSpecialFilterHandler, UIButton;
@protocol ACCLoadingViewProtocol, ACCEditViewContainer, ACCSequenceEditServiceProtocol, ACCEditServiceProtocol, ACCEditClipV1ServiceProtocol, ACCEditSpecialEffectServiceProtocol, ACCCTRServiceProtocol, ACCDraftAutoSaveProtocol, ACCAIEditConflictManagerProtocol, ACCEditPreviewProtocol, ACCSelectTemplateServiceProtocol;

@interface ACCEditOneClickBeautyComponent : ACCFeatureComponent <ACCEditSessionLifeCircleEvent, ACCDraftResourceRecoverProtocol, ACCFeatureComponentReloadableProtocol, ACCAIEditConflictManagerSubscription>

@property (retain, nonatomic) UIButton *beautyButton;
@property (retain, nonatomic) ACCBarItem *beautyBarItem;
@property (nonatomic) BOOL flag;
@property (nonatomic) BOOL shouldDisableBarItem;
@property (retain, nonatomic) ACCEditorOneClickBeautyViewModel *viewModel;
@property (retain, nonatomic) UIView<ACCLoadingViewProtocol> *loadingView;
@property (retain, nonatomic) ACCEditorSpecialFilterHandler *colorHandler;
@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCEditPreviewProtocol> previewService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceService;
@property (weak, nonatomic) id<ACCEditSpecialEffectServiceProtocol> specialEffectService;
@property (weak, nonatomic) id<ACCSelectTemplateServiceProtocol> selectTemplateService;
@property (weak, nonatomic) id<ACCEditClipV1ServiceProtocol> clipService;
@property (weak, nonatomic) id<ACCCTRServiceProtocol> ctrService;
@property (weak, nonatomic) id<ACCDraftAutoSaveProtocol> draftSaveService;
@property (weak, nonatomic) id<ACCAIEditConflictManagerProtocol> AIConflictManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)draftResourceIDsToDownloadForPublishViewModel:(id)a0;

- (void)AIEditorConflictHeadChange;
- (void)clearAllAIEditorConflicts;
- (void)sensorialRenderWithEditService:(id)a0;
- (void)dismissLoading;
- (void)enterSingleMode;
- (void)exitSingleMode;
- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBinding;
- (id)draftService;
- (void)bindServices:(id)a0;
- (void)componentDidReload;
- (void)componentWillReload;
- (void)updateBarItemView;
- (void)updateBarButtonSelected;
- (void)closeSmartBeauty;
- (void)closeSmartBeautyWhenLoading;
- (BOOL)isDraftRecoveryAIEnhanceOn;
- (void)beautyButtonDidClick;
- (void)updateToolbarLabel:(id)a0;
- (void)p_trackSmartBeauty:(BOOL)a0;
- (void)p_trackApplyPerf:(long long)a0 status:(BOOL)a1 error:(id)a2 trackInfo:(id)a3;
- (void)handlersPreloadDataIfNeeded;
- (void).cxx_destruct;

@end
