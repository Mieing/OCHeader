@class ACCRecursiveLock, ACCContext, NSString;

@interface ACCIdleInUTJobQueue : NSObject <ACCJobQueue>

@property (readonly, nonatomic) ACCRecursiveLock *lockedJobMap;
@property (readonly, nonatomic) ACCContext *queueContext;
@property (readonly, nonatomic) long long intensiveType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedDequeuePriorities;

- (id)p_jobs:(id)a0 shouldTake:(BOOL)a1;
- (id)takeJobs:(id)a0;
- (id)allJobs:(id)a0;
- (id)cancelAll:(id)a0;
- (BOOL)canDequeue:(id)a0;
- (id)takeAll:(id)a0;
- (void)enqueue:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)count:(id)a0;
- (id)context;
- (id)initWith:(long long)a0;
- (BOOL)isEmpty:(id)a0;
- (id)dequeue:(id)a0;

@end
