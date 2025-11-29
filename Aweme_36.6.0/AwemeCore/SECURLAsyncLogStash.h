@class NSString, NSMutableDictionary, SECLogTools, NSObject;
@protocol OS_dispatch_queue;

@interface SECURLAsyncLogStash : NSObject <SECURLRelatedLogStash> {
    NSObject<OS_dispatch_queue> *_stashQ;
    NSMutableDictionary *_stashes;
    BOOL _cleanupTaskScheduled;
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
- (BOOL)isInStashQueue;
- (void)submitToQueueWithLogItem:(id)a0 withAPI:(id)a1;
- (id)logsInQueueForURL:(id)a0 between:(double)a1 andTime:(double)a2;
- (void)cleanupInQueue;
- (id)initWithStashName:(id)a0;
- (void)scheduleCleanupTask;
- (void).cxx_destruct;
- (void)cleanup;
- (id)init;

@end
