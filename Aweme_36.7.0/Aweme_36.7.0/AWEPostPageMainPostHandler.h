@class AWEPublishBaseTask, AWEVideoPublishFlowService, NSString, AWEStudioComposerPublishBasicFeature, NSObject, UIViewController, NSNumber, AWEPostPageContext;
@protocol IESServiceRegister, IESServiceProvider, ACCSequenceEditServiceProtocol, AWEPostPageFeatureConfigService, ACCEditServiceProtocol;

@interface AWEPostPageMainPostHandler : NSObject <AWEPostPageMainPostService>

@property (weak, nonatomic) id<IESServiceRegister, IESServiceProvider> serviceContainer;
@property (retain, nonatomic) AWEPostPageContext *context;
@property (readonly, nonatomic) id<ACCEditServiceProtocol> editService;
@property (readonly, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (retain, nonatomic) AWEVideoPublishFlowService *flowService;
@property (weak, nonatomic) UIViewController *postPage;
@property BOOL cancelsPreuploadOnRequestComplete;
@property (retain, nonatomic) NSObject *requestUploadParamsStateSignal;
@property (retain, nonatomic) NSNumber *publishStateSignal;
@property (weak, nonatomic) id<AWEPostPageFeatureConfigService> featureConfigService;
@property (weak, nonatomic) AWEStudioComposerPublishBasicFeature *basicFeature;
@property (readonly, nonatomic) AWEPublishBaseTask *currentTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aACCMidVideoCreationProtocolClass;

- (id)publishTask;
- (void)beginPublish;
- (void)bindServices:(id)a0;
- (id)dynamicyPrepareCanvasPublishAsImageFlagValue;
- (id)aACCMidVideoCreationProtocol;
- (BOOL)disablePreUploadWithNetWorkCondition;
- (void)removePreUploadingTask;
- (void)cancelPreUploadingTask;
- (void)handleDeactiveSignal;
- (void)handlePrePublish;
- (void)saveHashtagWithPublishState:(BOOL)a0;
- (void)resetPublishTask;
- (void)replaceTaskWithTask:(id)a0;
- (void)removePreUploadingTask:(BOOL)a0;
- (void)removePreUploadingTaskForPreview;
- (void)startPreMergeOrUploadIfNeeded;
- (void)delayStartPreMergeOrUploadIfNeeded;
- (BOOL)needOpenPreUploadWithInfo:(id)a0;
- (void)markCancelsPreuploadFlagIsYes;
- (void)endPublish;
- (void)configPublishTask;
- (void)requestUploadParameters:(id /* block */)a0;
- (BOOL)closePreMergeWithInfo:(id)a0;
- (void)p_recoverPlayerEdgeIfNeed;
- (unsigned long long)videoPublishStatus;
- (BOOL)isImageOrMixed;
- (BOOL)closePreMergeForImageAlbum;
- (BOOL)isImageAlumPublishModel:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
