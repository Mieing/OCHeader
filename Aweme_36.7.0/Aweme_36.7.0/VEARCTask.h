@class NSObject;
@protocol OS_dispatch_semaphore;

@interface VEARCTask : NSObject

@property (nonatomic) long long refcount;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *sema;

- (long long)runDecrementTaskAtomic:(id /* block */)a0;
- (long long)runIncrementTaskAtomic:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
