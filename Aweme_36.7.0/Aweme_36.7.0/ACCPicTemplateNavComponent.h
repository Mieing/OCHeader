@class UIButton, NSString, UIView;
@protocol ACCSequencePlayControlServiceProtocol, ACCEditorRecoverServiceProtocol, ACCEditPicTemplateServiceProtocol, ACCTextStickerServiceProtocol, ACCPicTemplatePanelService, ACCPicTemplatePanelDataProtocol, ACCPicTemplateTrackServiceProtocol, ACCPicTemplateThumbnailService;

@interface ACCPicTemplateNavComponent : ACCSecondaryPageComponent <ACCPicTemplatePanelServiceSubScriber, ACCPicTemplateThumbnailServiceSubscriber>

@property (retain, nonatomic) UIView *containerView;
@property (weak, nonatomic) id<ACCPicTemplatePanelService> panelService;
@property (weak, nonatomic) id<ACCPicTemplateThumbnailService> thumbnailService;
@property (weak, nonatomic) id<ACCEditPicTemplateServiceProtocol> picTemplateService;
@property (weak, nonatomic) id<ACCEditorRecoverServiceProtocol> recoverService;
@property (weak, nonatomic) id<ACCPicTemplatePanelDataProtocol> dataManager;
@property (weak, nonatomic) id<ACCPicTemplateTrackServiceProtocol> trackService;
@property (weak, nonatomic) id<ACCSequencePlayControlServiceProtocol> sequenceControlService;
@property (weak, nonatomic) id<ACCTextStickerServiceProtocol> textStickerService;
@property (retain, nonatomic) UIButton *saveBtn;
@property (retain, nonatomic) UIButton *cancelBtn;
@property (nonatomic) BOOL hasChangedTemplate;
@property (nonatomic) unsigned long long prePlayMode;
@property (nonatomic) BOOL saveBtnAlwaysEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidAppear;
- (void)componentDidMount;
- (id)stickerService;
- (void)didClickCancel:(id)a0;
- (void)didClickSave:(id)a0;
- (void)dismissNavBarWithAnimation;
- (double)subViewHeight;
- (id)subViewInHierarchy;
- (unsigned long long)secondaryPageComponentType;
- (id)getBackupRepoModelsClass;
- (void)updateBtnsStatus;
- (void)picTemplatePanelServiceDidSelectedTemplate:(id)a0;
- (void)picTemplatePanelServiceDidRemoveTemplate;
- (void)picTemplateDidApplyAll:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;

@end
