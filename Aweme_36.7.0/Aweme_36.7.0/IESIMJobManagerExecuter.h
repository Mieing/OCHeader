@class NSArray, IESIMJobManagerEvent, NSObject;
@protocol OS_dispatch_queue;

@interface IESIMJobManagerExecuter : IESIMJobManagerInnerObject

@property (readonly, nonatomic) IESIMJobManagerEvent *event;
@property (readonly, copy, nonatomic) NSArray *jobList;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *baseConcurrentQueue;
@property (readonly, nonatomic) unsigned int subSlaveCount;
@property (copy) id /* block */ finalCallback;

+ (id /* block */)p_subFetcherWithProvider:(id)a0;
+ (id /* block */)p_mainThenSubFetcherWithProvider:(id)a0;
+ (id /* block */)p_mainFetcherWithProvider:(id)a0;

- (id)initWithManager:(id)a0 event:(id)a1 jobList:(id)a2;
- (unsigned int)p_fetchQueueQosClass;
- (unsigned int)p_fetchMaxSlaveCount;
- (void)p_autoRunJobs:(id)a0 blockingCompletion:(id /* block */)a1 allDoneCompletion:(id /* block */)a2;
- (id)p_blockingJobsNameFromJobList:(id)a0;
- (void)p_runJobsOnPreferQueue:(id)a0 shouldBlocking:(BOOL)a1 completion:(id /* block */)a2;
- (id /* block */)p_runnerWithEvent:(id)a0 provider:(id)a1;
- (void)p_asyncRun:(id /* block */)a0 onGroup:(id)a1;
- (id)p_settingKeyWithName:(id)a0;
- (void)p_asyncRun:(id /* block */)a0;
- (void).cxx_destruct;
- (void)start;

@end
