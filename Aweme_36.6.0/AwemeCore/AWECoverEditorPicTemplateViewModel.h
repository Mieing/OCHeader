@class NSArray, ACCPicTemplateApplyHandler, NSString, AWEVideoPublishViewModel, NSIndexPath;
@protocol ACCPicTemplatePanelDataProtocol, ACCSequenceEditServiceProtocol, IESServiceProvider, ACCStickerServiceProtocol, ACCPicTemplateTrackServiceProtocol, ACCEditorRecoverServiceProtocol, ACCEditServiceProtocol;

@interface AWECoverEditorPicTemplateViewModel : NSObject <ACCPicTemplateApplyHandlerDelegate, AWECoverEditPicTemplateServiceProtocol>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCEditorRecoverServiceProtocol> recoverService;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<ACCPicTemplatePanelDataProtocol> dataManagerService;
@property (weak, nonatomic) id<ACCPicTemplateTrackServiceProtocol> trackerService;
@property (copy, nonatomic) NSArray *cachedData;
@property (retain, nonatomic) ACCPicTemplateApplyHandler *applyHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSIndexPath *willSelectIndexPath;
@property (retain, nonatomic) NSIndexPath *didSelectedIndexPath;
@property (retain, nonatomic) NSIndexPath *lastSelectedIndexPath;

- (id)appliedPicTemplateIdWith:(id)a0;
- (id)initWithServiceProvider:(id)a0 repository:(id)a1;
- (id)appliedPicTemplateCategoryIdWith:(id)a0;
- (void)openPicTemplatePanelPageWithEnterMethod:(id)a0 completion:(id /* block */)a1;
- (void)applyPicTemplate:(id)a0 completion:(id /* block */)a1;
- (void)applyPicTemplate:(id)a0 project:(id)a1 completion:(id /* block */)a2;
- (void)applyPicTemplateAllProjects:(id)a0 completion:(id /* block */)a1;
- (void)applyTemplateIfNeedWithCompletion:(id /* block */)a0;
- (void)removePicTemplate;
- (void)preloadPicTemplatePanelData;
- (id)fetchCachePicTemplatePanelData;
- (void)assignPipContainerAtIndex:(long long)a0;
- (void)resetPipContainerAtIndex:(long long)a0;
- (BOOL)canCancelLastAndStartNewTrackerWithProjectUUID:(id)a0 templateId:(id)a1;
- (void)didRenderFirstFrameWithContext:(id)a0;
- (void)willRemoveTemplateWithContext:(id)a0;
- (void)applyPicTemplateWithEditService:(id)a0 publishViewModel:(id)a1 projectUUID:(id)a2 template:(id)a3 capturePreviewImage:(BOOL)a4 completion:(id /* block */)a5;
- (void)removePicTemplateWithEditService:(id)a0 publishViewModel:(id)a1 projectUUID:(id)a2 completion:(id /* block */)a3;
- (id)originalFilePathWithNLEModel:(id)a0;
- (void)removePicTemplateWithCompletion:(id /* block */)a0;
- (id)appliedPresetPicTemplateIdWith:(id)a0;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;

@end
