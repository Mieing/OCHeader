@class ACCPicTemplateModel, NSString;
@protocol ACCSideslipPropPanelTrackerService, ACCSideslipPropPanelService, ACCEditPicTemplateServiceProtocol, ACCSideslipPropService, ACCSideslipPropPanelDownloadService, ACCSideslipPropPanelEditorEventDispatchServiceProtocol, ACCEditServiceProtocol;

@interface ACCSideslipPanelPicTemplateApplyHandler : ACCSideslipPanelBaseApplyHandler <ACCSideslipPropPanelDownloadServiceSubscriber, ACCEditPicTemplateServiceSubscriber>

@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCSideslipPropPanelTrackerService> sideslipTrackerService;
@property (weak, nonatomic) id<ACCEditPicTemplateServiceProtocol> picTemplateService;
@property (weak, nonatomic) id<ACCSideslipPropService> sideslipPropService;
@property (weak, nonatomic) id<ACCSideslipPropPanelService> sideslipPropPanelService;
@property (weak, nonatomic) id<ACCSideslipPropPanelDownloadService> sideslipPropDownloadService;
@property (weak, nonatomic) id<ACCSideslipPropPanelEditorEventDispatchServiceProtocol> panelEditorEventDispatchService;
@property (retain, nonatomic) ACCPicTemplateModel *applyingPicTemplate;
@property (copy, nonatomic) id /* block */ didUpdateAppliedEffectIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindService;
- (void)downloadService:(id)a0 didFinishDownloadDataModel:(id)a1;
- (void)downloadService:(id)a0 didFailDownloadDataModel:(id)a1 withError:(id)a2;
- (void)didRemoveTemplateWith:(id)a0 projectUUID:(id)a1;
- (void)didFailedRemoveTemplateWith:(id)a0 projectUUID:(id)a1;
- (id)initWithServiceContainer:(id)a0 repository:(id)a1;
- (BOOL)handleApplyWithEffectRawModel:(id)a0;
- (BOOL)handleRemoveAppliedEffectWithScene:(id)a0;
- (void)dispatchDidRemoveEffectEvent;
- (void)replaceWithEffectRawModel:(id)a0 resources:(id)a1;
- (void)dispatchDidApplyEffectEvent;
- (id)appliedPicTemplateId;
- (BOOL)handleApplyPicTemplate:(id)a0;
- (void)clearPicTemplateAIGCInfoIfNeededWithShouldTapic:(BOOL)a0;
- (void)removeAppliedPicTemplate;
- (void)finishDownloadedPicTemplateModel:(id)a0 success:(BOOL)a1 error:(id)a2;
- (void).cxx_destruct;

@end
