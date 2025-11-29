@class NSArray, NSString;

@interface AWEIMUITaskQueue : NSObject <AWEIMTaskDelegate>

@property (copy, nonatomic) NSArray *serialTaskQueue;
@property (copy, nonatomic) NSString *overExecutingTimerName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)enqueueUITask:(id)a0;
- (void)cancelAllTasksOfMergeID:(id)a0;
- (BOOL)containsTaskOfBizID:(id)a0;
- (void)task:(id)a0 stateDidChangeFrom:(long long)a1 to:(long long)a2;
- (void)tryToFireFirstReadyTask;
- (void)removeAllInvalidTasks;
- (BOOL)containsTask:(id)a0;
- (void)performTask:(id)a0;
- (void)removeTask:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)tasks;

@end
