@class NSString, NSMutableDictionary, SECLogTools, NSObject;
@protocol OS_dispatch_queue;

@interface SECURLSyncLogStash : NSObject <SECURLRelatedLogStash> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _stashLock;
    NSMutableDictionary *_stashes;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _taskCountingMutex;
    unsigned long long _submitTasks;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _cleaningMutex;
    BOOL _cleanupTaskScheduled;
    NSObject<OS_dispatch_queue> *_cleanupQueue;
    SECLogTools *_logger;
    NSString *_name;
}

@property double cleanupInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupCleanupInterval:(double)a0;
- (void)submitLogItem:(id)a0;
- (id)logsForURL:(id)a0 between:(double)a1 andTime:(double)a2;
- (id)stashName;
- (id)initWithStashName:(id)a0;
- (void)scheduleCleanupTask;
- (void)delayCleanup;
- (void).cxx_destruct;
- (void)cleanup;
- (id)init;

@end
