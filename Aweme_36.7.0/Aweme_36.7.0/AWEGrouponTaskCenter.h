@class NSMutableDictionary, AWEGrouponTaskExecutor;

@interface AWEGrouponTaskCenter : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwLock;
}

@property (retain, nonatomic) NSMutableDictionary *taskDict;
@property (retain, nonatomic) NSMutableDictionary *destroyTaskDict;
@property (retain, nonatomic) AWEGrouponTaskExecutor *executor;
@property (nonatomic) long long pageType;

- (id)initWithPageType:(long long)a0;
- (void)commitTask:(id)a0;
- (void)commitTasks:(id)a0;
- (void)commitTask:(id)a0 needTrigger:(BOOL)a1;
- (void)insertTaskToExecutor:(id)a0;
- (void)triggerTasksWithType:(id)a0;
- (void)triggerTasksWithType:(id)a0 triggerSource:(id)a1;
- (void)p_triggerSingleTasksWithType:(id)a0 triggerSource:(id)a1;
- (void)p_triggerCombinationTasksWithType:(id)a0 triggerSource:(id)a1;
- (void)p_commonDestroyTasksWithType:(id)a0 triggerSource:(id)a1 isCombination:(BOOL)a2;
- (void)p_commonTriggerTaskWithType:(id)a0 triggerSource:(id)a1 isCombination:(BOOL)a2;
- (id)p_commonFilterWithTaskList:(id)a0 triggerType:(id)a1 triggerSource:(id)a2;
- (void)revertTaskWithKey:(id)a0;
- (void)revertTasksWithKeys:(id)a0;
- (void).cxx_destruct;

@end
