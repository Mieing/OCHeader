@class NSObject;
@protocol OS_dispatch_semaphore;

@interface TPCondiction : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (nonatomic) unsigned long long waitMs;

- (id)init;
- (id)initWithCondiction:(long long)a0 waitTime:(unsigned long long)a1;
- (void)wait;
- (void)waitWithTimeoutBlock:(id /* block */)a0;
- (void)signal;
- (void).cxx_destruct;

@end
