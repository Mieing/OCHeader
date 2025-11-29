@class ACCPicTemplatePanelViewModel, ACCEditorPicTemplateTracker, ACCPicTemplatePanelDataManager, NSString, UIView, ACCRepositoryWorkspace, ACCPicTemplatePanelContainerView;
@protocol ACCPicTemplateThumbnailService, ACCSequenceEditServiceProtocol, ACCEditPicTemplateServiceProtocol, ACCEditServiceProtocol;

@interface ACCPicTemplatePanelComponent : ACCSecondaryPageComponent <ACCPicTemplatePanelContainerViewDelegate, ACCPicTemplateThumbnailServiceSubscriber, ACCPicTemplateDownloadObserverProtocol, ACCEditPicTemplateServiceSubscriber>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) ACCPicTemplatePanelViewModel *viewModel;
@property (retain, nonatomic) ACCRepositoryWorkspace *workspace;
@property (retain, nonatomic) ACCPicTemplatePanelContainerView *templatePanelView;
@property (retain, nonatomic) ACCPicTemplatePanelDataManager *dataManager;
@property (retain, nonatomic) ACCEditorPicTemplateTracker *trackServiceImpl;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCEditPicTemplateServiceProtocol> picTemplateService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceService;
@property (weak, nonatomic) id<ACCPicTemplateThumbnailService> thumbnailService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didRemoveTemplate;
- (void)componentDidMount;
- (id)serviceBindingArray;
- (double)subViewHeight;
- (id)subViewInHierarchy;
- (unsigned long long)secondaryPageComponentType;
- (void)applySuccessWithTemplate:(id)a0 projectUUID:(id)a1;
- (void)didRemoveTemplateWith:(id)a0 projectUUID:(id)a1;
- (void)didFailedRemoveTemplateWith:(id)a0 projectUUID:(id)a1;
- (void)didCancelAIGCLoadingWithProjectUUID:(id)a0;
- (void)didFinishDownloadPicTemplate:(id)a0;
- (void)didFailDownloadPicTemplate:(id)a0 withError:(id)a1;
- (void)picTemplateProjectDidChange;
- (void)buildInitialTemplate;
- (void)applyTemplate:(id)a0 projectUUID:(id)a1;
- (void)didSelectedTemplate:(id)a0;
- (void)willDisplayTemplate:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setupUI;

@end
