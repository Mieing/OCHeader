@class UIButton, NSString, UIImageView, AWEBinding, AWEAIImageExpandViewModel, AWEAIImageExpandLoadingView;
@protocol ACCSequencePlayControlServiceProtocol, ACCEditViewContainer, ACCSequenceEditServiceProtocol, ACCEditServiceProtocol, ACCAIEditConflictManagerProtocol, ACCCTRServiceProtocol, ACCVideoEditFlowControlService, ACCRealLivePhotoService, ACCEditSpecialEffectServiceProtocol, ACCEditPreviewProtocol, ACCEditorOneClickFilmingApplyDiffService;

@interface ACCAIImageExpandComponent : ACCFeatureComponent <ACCVideoEditFlowControlSubscriber, ACCFeatureComponentReloadableProtocol, ACCAIEditConflictManagerSubscription, ACCRealLivePhotoServiceSubscriber>

@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCSequencePlayControlServiceProtocol> sequencePlayControl;
@property (weak, nonatomic) id<ACCVideoEditFlowControlService> editFlowControlService;
@property (weak, nonatomic) id<ACCRealLivePhotoService> realLivePhotoService;
@property (weak, nonatomic) id<ACCEditPreviewProtocol> previewService;
@property (weak, nonatomic) id<ACCEditorOneClickFilmingApplyDiffService> oneClickFilmingApplyDiffService;
@property (weak, nonatomic) id<ACCCTRServiceProtocol> ctrService;
@property (weak, nonatomic) id<ACCEditSpecialEffectServiceProtocol> specialEffectService;
@property (weak, nonatomic) id<ACCAIEditConflictManagerProtocol> AIConflictsManager;
@property (retain, nonatomic) AWEAIImageExpandViewModel *viewModel;
@property (retain, nonatomic) AWEAIImageExpandLoadingView *loadingView;
@property (retain, nonatomic) UIImageView *flagImageView;
@property (retain, nonatomic) UIButton *aiExpandBarButton;
@property (retain, nonatomic) AWEBinding *binding;
@property (nonatomic) BOOL shouldDisable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willDirectPublishWithEditFlowService:(id)a0;
- (void)AIEditorConflictHeadChange;
- (void)livePhotoDidChangeMode:(unsigned long long)a0;
- (void)clearAllAIEditorConflicts;
- (void)onEnterPublishWithEditFlowService:(id)a0;
- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBinding;
- (void)bindServices:(id)a0;
- (void)componentDidReload;
- (void)componentWillReload;
- (void)observerLivePhotoSignalAndRefreshToolbar;
- (id)newFlagBarItemTitleView;
- (void)addAIImageExpandBarItemToToolBar;
- (void)updateAIImageExpandBarState;
- (id)imageExpandBarItem;
- (void)updateBarItemEnable;
- (BOOL)needShowAIImageExpandBarItem;
- (void)updateButtonAccessibilityLabel;
- (void)removeNewFlagBubbleView;
- (void)startAIImageExpand;
- (void)p_startAIImageExpand;
- (void)stopPlayerWithCompletion:(id /* block */)a0;
- (void)hiddenAIExpandLoadingView;
- (void)showAIExpandLoadingViewWithCancelAction:(id /* block */)a0;
- (void)aiExpandBarAction;
- (void).cxx_destruct;
- (void)dealloc;

@end
