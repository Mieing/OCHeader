@class NSString, AWEVideoPublishViewModel;
@protocol ACCRecordActionFlowBridgeService, ACCRecordSwitchModeService, ACCComponentController, IESServiceProvider, ACCCameraService, ACCRecordConfigService, ACCRecordFlowService;

@interface AWERecordFlowRecordVideoResultHandler : NSObject <AWERecordFlowResultHandlerService>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) id<ACCComponentController> controller;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordConfigService> recordConfigService;
@property (weak, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) id<ACCRecordActionFlowBridgeService> bridgeFlowService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canHandleResult:(id)a0;

- (void)onFinishExportVideoDataWithData:(id)a0 error:(id)a1;
- (void)fillChallengeNameForFragmentInfo;
- (id)recordScene;
- (id)initWithServiceProvider:(id)a0 repository:(id)a1 controller:(id)a2;
- (void)fillChallengeInfo:(id)a0;
- (void)executeOperationWith:(id)a0 completion:(id /* block */)a1;
- (BOOL)recordVideoResourceCheckWithData:(id)a0;
- (void)executeExportCompletionWithData:(id)a0 needAddAudio:(BOOL)a1 completion:(id /* block */)a2;
- (void)executeExportCompletionWithVideoData:(id)a0 completion:(id /* block */)a1;
- (void)finishExportVideoWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
