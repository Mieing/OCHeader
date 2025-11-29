@class NSMutableDictionary;

@interface BDUGLuckyDogTimingTaskManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *allRegistedTasksDict;
@property (retain, nonatomic) NSMutableDictionary *runningTasksDict;
@property (retain, nonatomic) NSMutableDictionary *triggeredOncePerSessionTasksDict;

+ (void)unregisterTriggerTasks:(id)a0;
+ (void)registerTriggerTasks:(id)a0;
+ (id)__beginDateForTask:(id)a0;
+ (id)__taskKeyForTask:(id)a0;
+ (void)__logTaskTrigger:(id)a0 msg:(id)a1;
+ (id)__expireDateForTask:(id)a0;
+ (id)sharedInstance;

- (void)triggerOnDateTaskIfNeed;
- (void)__unlock;
- (BOOL)__isValidForTask:(id)a0;
- (void)__triggerTaskIfNeededForTask:(id)a0;
- (id)__getCurrentServerDate;
- (void).cxx_destruct;
- (id)init;
- (void)__lock;

@end
