@class NSRecursiveLock, NSMutableDictionary, MMTimer, NSMutableSet, MMGCRootsTracer, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface MMLiveRetainCycleMonitor : NSObject

@property (retain, nonatomic) NSMutableDictionary *weakObjectsDict;
@property (retain, nonatomic) NSMutableArray *rootWeakObjects;
@property (retain, nonatomic) NSMutableSet *rootWeakObjectsAddressSet;
@property (retain, nonatomic) MMTimer *scheduleTimer;
@property (nonatomic) BOOL isRuning;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) MMGCRootsTracer *tracer;

+ (id)shareInstance;

- (id)init;
- (void)stopMonitor;
- (void)startMonitor;
- (void)registerRootObjects;
- (void)registerWeakServiceByName:(id)a0;
- (id)getRawRootObjects;
- (void)checkLeakObjects;
- (void)asyncCheckLeakObjects;
- (void)addWillDeallocObject:(id)a0;
- (void)addGCRootObjects:(id)a0;
- (id)currentCheckList;
- (id)currentInsertList;
- (BOOL)disableFinderBlockRetainCycle;
- (void).cxx_destruct;

@end
