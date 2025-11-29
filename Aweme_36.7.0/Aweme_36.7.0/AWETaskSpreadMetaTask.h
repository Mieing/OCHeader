@class AWETaskSpreadMetaTaskInfo, NSMutableArray, AWETaskSpreadMetaTaskProgressMonitor;

@interface AWETaskSpreadMetaTask : NSObject

@property (retain, nonatomic) NSMutableArray *tasks;
@property (retain, nonatomic) AWETaskSpreadMetaTaskInfo *taskInfo;
@property (nonatomic, getter=isExecuting) BOOL executing;
@property (nonatomic, getter=isFinished) BOOL finished;
@property (retain, nonatomic) id info;
@property (retain, nonatomic) AWETaskSpreadMetaTaskProgressMonitor *monitor;

+ (id)metaTaskWithBlock:(id /* block */)a0 info:(id)a1;

- (void)executeWithFilterBlock:(id /* block */)a0;
- (id)initWithBlock:(id /* block */)a0 info:(id)a1;
- (void)addBlock:(id /* block */)a0 extraInfo:(id)a1;
- (void)__compeletionCheck;
- (void)__moveToFinishStateAndNotify;
- (void)executeAll;
- (void)executeOne;
- (void)removeTaskWithFilter:(id /* block */)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithInfo:(id)a0;
- (void)cancel;
- (void)addBlock:(id /* block */)a0;

@end
