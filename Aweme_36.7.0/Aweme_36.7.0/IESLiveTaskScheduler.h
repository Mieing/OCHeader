@protocol IESLiveTaskExcuted, IESLiveSchedulerProtocol;

@interface IESLiveTaskScheduler : NSObject {
    id<IESLiveSchedulerProtocol> _strategy;
    float _taskDuration;
    id<IESLiveTaskExcuted> _observer;
}

- (void)executeTasks;
- (id)topTask;
- (void)addTask:(id /* block */)a0 name:(id)a1 identifier:(id)a2 priority:(long long)a3;
- (void)addTask:(id /* block */)a0 priority:(long long)a1;
- (BOOL)executeTaskImmediately:(id)a0 identifier:(id)a1;
- (void)clearTasksWithIdentifier:(id)a0;
- (id)initWithTaskDuration:(float)a0 observer:(id)a1;
- (void)addTask:(id /* block */)a0;
- (BOOL)empty;
- (void).cxx_destruct;
- (id)init;
- (void)clearTasks;
- (void)clean;

@end
