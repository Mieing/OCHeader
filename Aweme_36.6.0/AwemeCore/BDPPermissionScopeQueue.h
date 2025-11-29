@class NSMutableDictionary, BDPUniqueID, NSRecursiveLock;

@interface BDPPermissionScopeQueue : NSObject

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSMutableDictionary *scopeQueue;

- (BOOL)scopeQueueIsWaiting:(id)a0;
- (void)scopeQueueAddCompletion:(id /* block */)a0 scope:(id)a1;
- (void)scopeQueueStartWaiting:(id)a0;
- (void)scopeQueueExcuteAllCompletion:(id)a0 scope:(id)a1;
- (void)scopeQueueCreateIfNeeded:(id)a0;
- (void).cxx_destruct;
- (id)initWithUniqueID:(id)a0;

@end
