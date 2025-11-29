@class RxScheduler, NSString, NSArray, NSHashTable, NSError, NSObject, NSMutableArray;
@protocol OS_dispatch_semaphore;

@interface RxPromise : NSObject <RxCancellable> {
    struct MutexLock { void /* function */ **_vptr$LockingInterface; struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _impl; } _mutex;
    long long _state;
    NSObject<OS_dispatch_semaphore> *_sem;
    NSMutableArray *_callbacks;
    NSArray *_parentPromises;
    id _value;
    NSError *_error;
    NSHashTable *_cancellables;
    RxScheduler *_scheduler;
}

@property (readonly, nonatomic) id value;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) BOOL fulfilled;
@property (readonly, nonatomic) BOOL rejected;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)promise:(id /* block */)a0;
+ (id)when:(id)a0;
+ (id)promise:(id /* block */)a0 scheduler:(id)a1;
+ (id)resolve:(id)a0 scheduler:(id)a1;
+ (id)reject:(id)a0 scheduler:(id)a1;
+ (void)__resolve:(id)a0 value:(id)a1 scheduler:(id)a2;
+ (id)resolve:(id)a0;
+ (id)reject:(id)a0;
+ (id)join:(id)a0;

- (id)then:(id /* block */)a0 error:(id /* block */)a1 scheduler:(id)a2;
- (id)then:(id /* block */)a0 scheduler:(id)a1;
- (id)performWhenFinished:(id /* block */)a0 scheduler:(id)a1;
- (id)then:(id /* block */)a0 error:(id /* block */)a1;
- (void)addCancellable:(id)a0;
- (void)resolveWithValue:(id)a0 scheduler:(id)a1;
- (void)rejectWithError:(id)a0 scheduler:(id)a1;
- (BOOL)isRunningOrResolved;
- (id)performWhenFinished:(id /* block */)a0;
- (void)joinedPromiseFulfilled:(id)a0 scheduler:(id)a1;
- (id)waitForValueWithTimeout:(double)a0;
- (id)waitForValue;
- (BOOL)cancelled;
- (void).cxx_destruct;
- (id)initWithScheduler:(id)a0;
- (BOOL)isRunning;
- (id)then:(id /* block */)a0;
- (BOOL)completed;
- (id)init;
- (void)finish;
- (id).cxx_construct;
- (void)dealloc;
- (void)cancel;

@end
