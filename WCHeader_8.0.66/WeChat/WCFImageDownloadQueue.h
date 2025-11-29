@class NSRecursiveLock, NSMutableDictionary, NSMutableOrderedSet, NSObject;
@protocol OS_dispatch_queue;

@interface WCFImageDownloadQueue : NSObject {
    NSRecursiveLock *_lock;
}

@property (nonatomic) long long maxConcurrentCount;
@property (nonatomic) long long executingCount;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableOrderedSet *operations;
@property (retain, nonatomic) NSMutableDictionary *dict;
@property (nonatomic) long long maxPreloadCount;

- (id)init;
- (void)addOperation:(id)a0;
- (void)addToDict:(id)a0;
- (void)removeFromDict:(id)a0;
- (id)operationForKey:(id)a0;
- (void)lock;
- (void)unlock;
- (void)removeOperation:(id)a0;
- (void)schedule;
- (id)removeAndSchedule:(id)a0;
- (void)run;
- (void).cxx_destruct;

@end
