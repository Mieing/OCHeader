@class NSString, NSDictionary, AWEPublishFlowModel, AWEPublishBaseTask, AWEResourceUploadParametersResponseModel;
@protocol AWEPublishInfiniTaskCoordinatorServiceProtocol, AWEPublishInfiniTaskFlowMessageServiceProtocol;

@interface AWEPublishInfiniTaskFlowService : NSObject <AWEPublishRunnableStageObserver, AWEPublishInfiniTaskFlowServiceProtocol>

@property (weak, nonatomic) AWEPublishBaseTask *task;
@property (weak, nonatomic) AWEPublishFlowModel *flowModel;
@property (retain, nonatomic) id<AWEPublishInfiniTaskFlowMessageServiceProtocol> flowMessageService;
@property (retain, nonatomic) id<AWEPublishInfiniTaskCoordinatorServiceProtocol> coordinatorService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long flowType;
@property (retain, nonatomic) AWEResourceUploadParametersResponseModel *uploadParamsCache;
@property (copy, nonatomic) NSDictionary *logExtraDict;

- (void)appWillResignActiveNotification;
- (void)appDidBecomeActiveNotification;
- (void)appWillTerminateNotification;
- (void)useCacheIfNeeded;
- (void)bindServices:(id)a0;
- (void)saveDraftType:(long long)a0 completion:(id /* block */)a1 isBackup:(BOOL)a2;
- (BOOL)hideDraftWhenRetry;
- (void)saveDraftPrepareForExecuteWithCompletion:(id /* block */)a0;
- (void)resetPreUploadTask;
- (void)markEditPreUploadToPublish;
- (void)autoRetryWithStrategy:(id)a0;
- (void)registerServicesIfNeeded;
- (void)buildStageNet;
- (void)updatePublishConfig;
- (void)publishDidClick;
- (BOOL)shouldUseCache;
- (void).cxx_destruct;
- (void)execute;
- (void)applicationWillEnterForeground;
- (void)addNotificationObservers;
- (void)resume;
- (void)dealloc;

@end
