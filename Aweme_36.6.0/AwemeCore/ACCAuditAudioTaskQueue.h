@class NSString, NSMutableDictionary;

@interface ACCAuditAudioTaskQueue : NSObject <ACCAuditAudioTaskDelegate>

@property (retain, nonatomic) NSMutableDictionary *tasks;
@property (nonatomic) long long timerTag;
@property (nonatomic) double retryInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)delayStart;
+ (id)shared;

- (void)p_loadTasks;
- (void)p_finishTask:(id)a0 error:(id)a1 mainErrorCode:(long long)a2;
- (void)p_safeAddTaskWithBuilder:(id)a0;
- (void)p_startIfNeededImpl;
- (void)p_startTimerIfNeeded;
- (BOOL)p_shouldExecuteTask:(id)a0;
- (void)p_finishTask:(id)a0;
- (id)p_trackExtraWithTask:(id)a0;
- (void)addTaskWithBuilder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)didBecomeActive:(id)a0;
- (void)task:(id)a0 didFinishWithError:(id)a1;
- (void)dealloc;
- (void)startIfNeeded;

@end
