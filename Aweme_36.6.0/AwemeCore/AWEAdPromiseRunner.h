@class AWEAdPromise, NSArray, NSString, RxPromise, AWEAdPromiseContext;

@interface AWEAdPromiseRunner : HTSService <AWEAdPromiseExecuteProtocol, AWEAdPromiseRunnerProtocol>

@property (nonatomic) BOOL isAsyncTaskGroup;
@property (nonatomic) BOOL isTaskTypeRunner;
@property (retain, nonatomic) RxPromise *asyncTaskGroupResult;
@property (retain, nonatomic) NSArray *runningTasks;
@property (retain, nonatomic) NSArray *taskTypes;
@property (retain, nonatomic) AWEAdPromiseContext *context;
@property (readonly, nonatomic) AWEAdPromise *runnerResult;
@property (copy, nonatomic) id /* block */ errorTask;
@property (nonatomic) BOOL isTaskTypeRunnerSuccess;
@property (nonatomic) BOOL finishWhenSuccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)runTasks:(id)a0 withContext:(id /* block */)a1;
+ (id)runTasks:(id)a0 withRawContext:(id)a1;
+ (id)availableTaskFilter:(id)a0;
+ (id)taskTypeGroup:(id)a0;
+ (id)asyncTaskGroup:(id)a0;

- (void)taskManagerExecuteSuccess:(id /* block */)a0 failHandler:(id /* block */)a1;
- (id)performWhenFinished:(id /* block */)a0 scheduler:(id)a1;
- (void)whenCancelled:(id /* block */)a0;
- (void)runTaskWithContext:(id)a0;
- (id)taskForType:(long long)a0 context:(id)a1;
- (id)asyncTaskForType:(long long)a0 context:(id)a1;
- (void)buildTaskTypeRunner;
- (void)asyncRunAllTask;
- (void)runTaskAtIndex:(long long)a0;
- (id)performWhenFinishedWithContext:(id /* block */)a0 scheduler:(id)a1;
- (id)configFinishWhenSuccess:(BOOL)a0;
- (void)newTaskManagerExecuteSuccess:(id /* block */)a0 failHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)finish;
- (id)scheduler;
- (void)cancel;
- (id)promise;

@end
