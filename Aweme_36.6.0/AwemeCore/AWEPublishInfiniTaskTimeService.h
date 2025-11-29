@class NSString, NSDictionary, AWEPublishFlowModel, AWEPublishBaseTask;
@protocol AWEPublishInfiniTaskCoordinatorServiceProtocol, AWEPublishInfiniTaskFlowMessageServiceProtocol;

@interface AWEPublishInfiniTaskTimeService : NSObject <AWEPublishInfiniTaskFlowPreUploadMessageServiceSubscriber, AWEPublishInfiniTaskFlowStageMessageServiceSubscriber, AWEPublishInfiniTaskTimeServiceProtocol>

@property (weak, nonatomic) AWEPublishBaseTask *task;
@property (weak, nonatomic) AWEPublishFlowModel *flowModel;
@property (retain, nonatomic) NSDictionary *eventMap;
@property (retain, nonatomic) id<AWEPublishInfiniTaskFlowMessageServiceProtocol> flowMessageService;
@property (retain, nonatomic) id<AWEPublishInfiniTaskCoordinatorServiceProtocol> coordinatorService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindServices:(id)a0;
- (void)stage:(id)a0 didChangeStatus:(long long)a1;
- (void)runningPreUploadStageWhenPublishClick:(id)a0;
- (void)preuploadFinished;
- (void)resetPreUploadStage;
- (id)exportImagesTypeCountDic:(id)a0;
- (void)endPreUploadEvent;
- (void)extraInfoWithEvent:(id)a0;
- (void).cxx_destruct;
- (void)execute;

@end
