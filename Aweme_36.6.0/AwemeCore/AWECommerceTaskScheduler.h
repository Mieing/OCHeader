@class NSString, AWECommerceTaskQueue;

@interface AWECommerceTaskScheduler : HTSService <AWEGokuPluginTargetProtocol, AWECommerceTaskScheduler>

@property (retain, nonatomic) AWECommerceTaskQueue *taskQueue;
@property (nonatomic) unsigned long long executeNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)executeTasks:(id)a0;
- (void)vc_viewDidAppearWith:(id)a0;
- (void)executeAvoidFeedTasks;
- (void)executeRunloopBeforeWaitingTasks;
- (void)executeAvoidPrefetchTasks;
- (void)addTask:(id)a0;
- (BOOL)removeTask:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)moduleNames;

@end
