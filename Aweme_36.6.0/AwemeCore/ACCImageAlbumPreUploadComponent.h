@class AWEPublishBaseTask, NSString, AWEResourceUploadParametersResponseModel;
@protocol ACCQuickSaveService, ACCSequenceEditServiceProtocol, ACCStickerServiceProtocol, ACCEditHDPhotoService, ACCVideoEditFlowControlService, AWEPublishTaskBusinessProtocol, ACCEditServiceProtocol;

@interface ACCImageAlbumPreUploadComponent : ACCFeatureComponent <ACCEditSessionLifeCircleEvent, ACCVideoEditFlowControlSubscriber, AWEVideoPublishAsImageAlbumResourceMessageProtocol, ACCPublishServiceMessage, ACCQuickSaveSubscriber, ACCEditHDPhotoServiceSubscription, ACCSequenceEditServicePlayerSubscriber>

@property (weak, nonatomic) id<ACCVideoEditFlowControlService> flowService;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCQuickSaveService> quickSaveService;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<ACCEditHDPhotoService> hdPhotoService;
@property (nonatomic) BOOL isStaticCheckFailed;
@property (nonatomic) BOOL didCancelPreload;
@property (nonatomic) BOOL hasTriggerPreUploadOnce;
@property (nonatomic) BOOL firstRenderDidComplete;
@property (nonatomic) BOOL didEnterToPublishVc;
@property (retain, nonatomic) AWEResourceUploadParametersResponseModel *uploadParams;
@property (weak, nonatomic) AWEPublishBaseTask<AWEPublishTaskBusinessProtocol> *preUploadTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sequenceEditService:(id)a0 changedWithAddedIndexSet:(id)a1 deletedIndexSet:(id)a2;
- (void)hdPhotoDidReplacedSuccess;
- (void)willGoBackToRecordPageWithEditFlowService:(id)a0;
- (void)didFetchUploadParams:(id)a0;
- (void)willExitEditModeWithService:(id)a0;
- (void)firstRenderWithEditService:(id)a0;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (unsigned long long)preferredLoadPhase;
- (void)bindServices:(id)a0;
- (void)publishServiceWillStart;
- (BOOL)enablePreUploadStaticCheck;
- (void)doPreloadIfNeed;
- (void)cancelPreUpload;
- (void)cancelPreUploadIfNeed;
- (void)markDisableEditUploadReason:(id)a0;
- (BOOL)enablePreUploadDynamicCheck;
- (BOOL)enablePreUploadResourceCheck;
- (void)appendDisableEditUploadReason:(id)a0;
- (BOOL)isSingleImageAlbum;
- (BOOL)shouldPreUploadForSlides;
- (BOOL)shouldHandleHDPhoto;
- (BOOL)isPublishAsImageAlbumForSlides;
- (BOOL)enableUsingOriginImageForSlides;
- (BOOL)satisfyLimitCountForSlides;
- (void)onPublishAsImageOriginImageSaveToFileReadyForTaskId:(id)a0;
- (void)willTriggerQuickSaveAction;
- (void).cxx_destruct;
- (void)dealloc;

@end
