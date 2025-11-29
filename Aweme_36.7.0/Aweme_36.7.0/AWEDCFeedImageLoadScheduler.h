@class NSMutableDictionary, NSString, NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface AWEDCFeedImageLoadScheduler : NSObject

@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSMutableDictionary *operationMap;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (nonatomic) long long lastBatchCount;
@property (nonatomic) double lastQueueTime;
@property (nonatomic) long long maxConcurrentTasks;
@property (copy, nonatomic) NSString *referString;

- (void)cancelTasksMatchingCondition:(id /* block */)a0;
- (void)finishWithOperation:(id)a0;
- (void)recordBatchCount:(id)a0;
- (void)setBatchCountWithTask:(id)a0;
- (void)updateTaskPriority:(long long)a0 withIdentifier:(id)a1;
- (void)addTask:(id)a0;
- (void).cxx_destruct;
- (void)suspend;
- (id)init;
- (void)resume;
- (void)setup;
- (void)cancelTaskWithID:(id)a0;

@end
