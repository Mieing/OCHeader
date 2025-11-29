@class NSMutableDictionary;

@interface LVMultiTasksProgress : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (retain, nonatomic) NSMutableDictionary *tasksMap;
@property (retain, nonatomic) NSMutableDictionary *proportionsMap;
@property (nonatomic) double progress;
@property (copy, nonatomic) id /* block */ progressHandler;

+ (id)taskIDs:(id)a0;

- (id)initWithTaskIDs:(id)a0;
- (void)refreshProgress;
- (void)recalculateTotalProgress;
- (void)progressDidChange;
- (void)updateProgress:(double)a0 forTaskID:(id)a1;
- (void)setProportion:(double)a0 forTaskID:(id)a1;
- (void)addTaskID:(id)a0;
- (void)removeTaskID:(id)a0;
- (void)completeForTaskID:(id)a0;
- (void)complete;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
