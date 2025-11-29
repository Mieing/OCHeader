@class ACCRefactorInfoStickerHandler, ACCInfoStickerHandler, NSString, AWECoverEditorPicTemplateViewModel, AWECoverPicTemplatePanelContainerView, ACCEditorRecoverServiceImpl, ACCPicTemplatePanelDataManager, AWECoverEditorNLEEditorInputData, ACCEditorPicTemplateTracker;
@protocol AWECoverEditPicTemplateServiceProtocol, AWECoverNLEEditorBottomSwitchService, ACCStickerServiceProtocol, ACCEditViewContainer, AWECoverEditImageChooseCoverService, AWECoverNLEEditorRevertService, AWECoverEditorNLEEditorLayoutManager;

@interface AWECoverEditorTemplateComponent : ACCFeatureComponent <ACCPicTemplateDownloadObserverProtocol, AWECoverPicTemplatePanelContainerViewDelegate, AWEVideoCoverEditorBottomPanelContainerViewDelegate, AWECoverEditorTemplatePanelProtocol>

@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<AWECoverEditorNLEEditorLayoutManager> layoutManager;
@property (weak, nonatomic) id<AWECoverNLEEditorBottomSwitchService> switchService;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (weak, nonatomic) ACCInfoStickerHandler *infoStickerHandler;
@property (weak, nonatomic) ACCRefactorInfoStickerHandler *refactorInfoStickerHandler;
@property (retain, nonatomic) id<AWECoverNLEEditorRevertService> editorRevertService;
@property (retain, nonatomic) AWECoverEditorPicTemplateViewModel *viewModel;
@property (retain, nonatomic) AWECoverPicTemplatePanelContainerView *templatePanelView;
@property (retain, nonatomic) ACCPicTemplatePanelDataManager *dataManager;
@property (retain, nonatomic) ACCEditorRecoverServiceImpl *recoverService;
@property (retain, nonatomic) ACCEditorPicTemplateTracker *trackServiceImpl;
@property (weak, nonatomic) id<AWECoverEditPicTemplateServiceProtocol> picTemplateService;
@property (weak, nonatomic) id<AWECoverEditImageChooseCoverService> chooseCoverService;
@property (retain, nonatomic) AWECoverEditorNLEEditorInputData *inputData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)commonTrackParams;
- (void)didRemoveTemplate;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBindingArray;
- (void)bindServices:(id)a0;
- (void)provideTrackParamsWithBlock:(id /* block */)a0;
- (void)didFinishDownloadPicTemplate:(id)a0;
- (void)didFailDownloadPicTemplate:(id)a0 withError:(id)a1;
- (void)buildInitialTemplate;
- (void)forceReloadTemplatePanel;
- (void)findAndConfigRefactorInfoStickerHandler;
- (void)findInfoStickerHandler;
- (void)configInfoStickerHandler;
- (void)reloadHotCategoryIfNeeded;
- (BOOL)panelIsOnTop;
- (void)willChangeTemplate;
- (void)applyPicTemplate:(id)a0;
- (void)trackSelectTemplate:(id)a0;
- (void)trackDeleteSticker;
- (void)trackEditStickerCover;
- (void)didSelectedTemplate:(id)a0 atIndexPath:(id)a1;
- (void)willRemoveTemplate;
- (void)trackSelectCategoryModel:(id)a0 type:(id)a1 loadDuration:(double)a2;
- (void)trackTemplateShowWith:(id)a0 model:(id)a1 indexPath:(id)a2 enterType:(id)a3;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setupUI;

@end
