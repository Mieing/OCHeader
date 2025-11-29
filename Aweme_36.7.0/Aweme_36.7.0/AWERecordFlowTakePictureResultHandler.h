@class NSString, AWEStudioFlowResultModel, AWEVideoPublishViewModel;
@protocol ACCRecordSwitchModeService, ACCComponentController, IESServiceProvider, ACCRecordActionFlowBridgeService, AWEStudioBusinessCameraFlowControlProtocol, ACCRecordFlowService;

@interface AWERecordFlowTakePictureResultHandler : NSObject <AWERecordFlowResultHandlerService>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) id<ACCComponentController> controller;
@property (weak, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (weak, nonatomic) id<ACCRecordActionFlowBridgeService> bridgeFlowService;
@property (weak, nonatomic) id<AWEStudioBusinessCameraFlowControlProtocol> cameraFlowService;
@property (weak, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) AWEStudioFlowResultModel *firstFlowResultModel;
@property (retain, nonatomic) AWEStudioFlowResultModel *lastFlowResultModel;
@property (nonatomic) BOOL hdHasNextPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canHandleResult:(id)a0;

- (id)recordScene;
- (id)initWithServiceProvider:(id)a0 repository:(id)a1 controller:(id)a2;
- (void)executeOperationWith:(id)a0 completion:(id /* block */)a1;
- (void)destroyOperation;
- (void)jumpNextPageOperationWith:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
