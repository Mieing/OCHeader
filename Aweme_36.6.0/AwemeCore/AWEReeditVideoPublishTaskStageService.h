@class AWEReeditVideoPublishTask, NSString, AWEPublishFlowModel, NSError;
@protocol AWEPublishInfiniTaskCoordinatorServiceProtocol, AWEPublishInfiniTaskFlowMessageServiceProtocol;

@interface AWEReeditVideoPublishTaskStageService : NSObject <AWEPublishInfiniTaskStageServiceProtocol>

@property (retain, nonatomic) NSError *error;
@property (weak, nonatomic) AWEReeditVideoPublishTask *task;
@property (weak, nonatomic) AWEPublishFlowModel *flowModel;
@property (retain, nonatomic) id<AWEPublishInfiniTaskFlowMessageServiceProtocol> flowMessageService;
@property (retain, nonatomic) id<AWEPublishInfiniTaskCoordinatorServiceProtocol> coordinatorService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindServices:(id)a0;
- (void)stage:(id)a0 didChangeStatus:(long long)a1;
- (void)stage:(id)a0 didUpdateProgress:(double)a1;
- (void)finishStage:(id)a0;
- (void)mergeSuccess;
- (void)uploadSuccess;
- (void)publishHandleAwemeSuccess;
- (void)uploadImageFramesSuccess;
- (void)publishFinishedSuccess;
- (void)releaseService;
- (id)userInfoWithStage:(id)a0;
- (void)publishFailed:(id)a0;
- (void)reeditModelSuccess;
- (void).cxx_destruct;
- (void)dealloc;

@end
