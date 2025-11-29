@class LVMultiTasksProgress, LVProcessVideoSession, NSMutableSet, LVTemplateDataManager, NSObject, NSError;
@protocol OS_dispatch_group, LVPreprocessManagerDelegate;

@interface LVPreprocessManager : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (retain, nonatomic) NSObject<OS_dispatch_group> *taskGroup;
@property (retain, nonatomic) LVTemplateDataManager *dataManager;
@property (retain, nonatomic) LVProcessVideoSession *videoSession;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) LVMultiTasksProgress *tasksProgress;
@property (retain, nonatomic) NSMutableSet *runningTasks;
@property (weak, nonatomic) id<LVPreprocessManagerDelegate> delegate;

- (void)preprocessWithCallback:(id /* block */)a0;
- (void)videoSessionDidFailWithError:(id)a0;
- (void)videoSessionDidSucceed;
- (void)excuteSession:(id)a0 withComplete:(id /* block */)a1;
- (void)addRunningTaskWithTaskID:(id)a0;
- (id)removeRunningTaskWithTaskID:(id)a0;
- (void).cxx_destruct;
- (id)initWithDataManager:(id)a0;
- (void)dealloc;
- (void)cancel;
- (void)preprocess;

@end
