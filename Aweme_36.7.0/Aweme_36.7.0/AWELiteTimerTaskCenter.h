@class NSMutableDictionary, NSString, AWELiteTimerCacheProvider, AWELiteTaskTimer;

@interface AWELiteTimerTaskCenter : NSObject <AWELiteTimerTaskServiceProtocol, AWELiteTimerTaskExecuteDelegate>

@property (retain, nonatomic) AWELiteTaskTimer *timer;
@property (retain, nonatomic) NSMutableDictionary *taskDic;
@property (retain, nonatomic) NSMutableDictionary *currentTimeIntervalDic;
@property (retain, nonatomic) AWELiteTimerCacheProvider *storage;
@property (nonatomic) BOOL fixTimerCenterIntervalBugSwitch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)hasReachedLimit:(id)a0;
- (void)onServiceLaunch;
- (void)removeTaskWithTaskID:(id)a0;
- (void)resumeTaskWithTaskID:(id)a0;
- (void)pauseTaskWithTaskID:(id)a0;
- (id)taskWithTaskID:(id)a0;
- (BOOL)isTaskListEmpty;
- (void)excecuteTasksWithRule:(id)a0 timeInterval:(double)a1;
- (void)taskDidStartedCounting:(id)a0;
- (void)taskDidStoppedCounting:(id)a0;
- (void)__didEnterBackground;
- (void)__applicationWillTerminate;
- (void)__storageTasksIfNeeded;
- (BOOL)__checkTaskImp:(id)a0;
- (void)taskStatusDidChanged:(id)a0 status:(long long)a1;
- (long long)taskStatusWithTaskID:(id)a0;
- (BOOL)isCountingForTask:(id)a0;
- (void)storageTaskWithTaskID:(id)a0;
- (id)tasksWithRule:(id)a0;
- (void)addTask:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
