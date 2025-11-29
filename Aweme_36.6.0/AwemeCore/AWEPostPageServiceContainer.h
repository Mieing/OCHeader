@class AWEVideoPublishFlowService, ACCPublishViewControllerInputData, AWEVideoPublishViewModel, UIViewController;
@protocol ACCEditServiceProtocol, ACCSequenceEditServiceProtocol;

@interface AWEPostPageServiceContainer : AWEPostPageBaseServiceContainer

@property (retain, nonatomic) AWEVideoPublishViewModel *model;
@property (weak, nonatomic) UIViewController *viewController;
@property (weak, nonatomic) AWEVideoPublishFlowService *flowService;
@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) ACCPublishViewControllerInputData *inputData;

- (id)provideSingleton:(id)a0 AWEPostPageListDataTemplate:(id)a1;
- (id)provideSingleton:(id)a0 AWEPostPageImageAlbumService:(id)a1;
- (id)provideSingleton:(id)a0 AWEPostPageFlowService:(id)a1;
- (id)provideSingleton:(id)a0 AWEPostPageAudioService:(id)a1;
- (id)provideSingleton:(id)a0 AWEPostPageReeditService:(id)a1;
- (id)provideSingleton:(id)a0 AWEPostPageBubbleService:(id)a1;
- (id)provideSingleton:(id)a0 AWEPostPageNavigationBarService:(id)a1;
- (id)provideSingleton:(id)a0 AWEPostPageInputService:(id)a1;
- (id)provideSingleton:(id)a0 AWEPostPageSlidesService:(id)a1;
- (id)provideSingleton:(id)a0 AWEPostPageAnchorService:(id)a1;
- (id)provideSingleton:(id)a0 AWEPostPageFooterService:(id)a1;
- (id)provideSingleton:(id)a0 AWEPostPageVideoSyncService:(id)a1;
- (id)provideSingleton:(id)a0 AWEPostPageMixService:(id)a1;
- (id)provideSingleton:(id)a0 AWEPostPageElementCenter:(id)a1;
- (id)provideSingleton:(id)a0 AWEPostPageContext:(id)a1;
- (id)provideSingleton:(id)a0 AWEPostPageServiceCoordinator:(id)a1;
- (id)provideSingleton:(id)a0 AWEPostPagePreviewService:(id)a1;
- (id)provideSingleton:(id)a0 AWEPostPageDraftService:(id)a1;
- (id)provideSingleton:(id)a0 AWEPostPageRouterService:(id)a1;
- (id)provideSingleton:(id)a0 AWEPostPageMainPostService:(id)a1;
- (id)provideSingleton:(id)a0 AWEPostPagePlayerService:(id)a1;
- (id)provideSingleton:(id)a0 AWEPostPagePreviewUtilService:(id)a1;
- (id)provideSingleton:(id)a0 AWEPostPageListService:(id)a1;
- (id)provideSingleton:(id)a0 AWEPostPageReeditLoadingService:(id)a1;
- (id)provideSingleton:(id)a0 AWEPostPageFeatureConfigService:(id)a1;
- (void).cxx_destruct;

@end
