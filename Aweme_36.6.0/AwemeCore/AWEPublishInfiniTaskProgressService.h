@class NSArray, NSTimer, AWEPublishFlowModel, AWEPublishBaseTask, NSMutableArray, NSString;
@protocol AWEPublishInfiniTaskCoordinatorServiceProtocol, AWEPublishInfiniTaskFlowMessageServiceProtocol;

@interface AWEPublishInfiniTaskProgressService : NSObject <AWEPublishInfiniTaskFlowStageMessageServiceSubscriber, AWEPublishInfiniTaskFlowPreUploadMessageServiceSubscriber, AWEPublishInfiniTaskFlowNotificationMessageServiceSubscriber, AWEPublishInfiniTaskProgressServiceProtocol>

@property (nonatomic) double progress;
@property (weak, nonatomic) AWEPublishBaseTask *task;
@property (weak, nonatomic) AWEPublishFlowModel *flowModel;
@property (retain, nonatomic) NSTimer *simulateTimer;
@property (retain, nonatomic) NSMutableArray *progressStages;
@property (retain, nonatomic) id<AWEPublishInfiniTaskFlowMessageServiceProtocol> flowMessageService;
@property (retain, nonatomic) id<AWEPublishInfiniTaskCoordinatorServiceProtocol> coordinatorService;
@property (retain, nonatomic) NSMutableArray *lastProgressTimeArray;
@property (retain, nonatomic) NSArray *firstProgress80Time;
@property (retain, nonatomic) NSArray *firstProgress98Time;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEStudioGlobalConfigClass;

- (void)appDidBecomeActiveNotification;
- (id)aAWEStudioGlobalConfig;
- (void)bindServices:(id)a0;
- (void)simulateProgress;
- (void)stage:(id)a0 didUpdateProgress:(double)a1;
- (void)resetPreUploadStage;
- (void)stopSimulateProgress;
- (void)callTaskProgressMessage;
- (void)setProgressInfoIfNeeded;
- (id)progressWeightDict;
- (double)calculateProgress;
- (void).cxx_destruct;
- (void)resetProgress;
- (void)execute;
- (void)dealloc;

@end
