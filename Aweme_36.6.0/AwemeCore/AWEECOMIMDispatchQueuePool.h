@class TIMXODispatchQueuePool;

@interface AWEECOMIMDispatchQueuePool : NSObject

@property (retain, nonatomic) TIMXODispatchQueuePool *pool;
@property (retain, nonatomic) TIMXODispatchQueuePool *globalPool;

+ (id)sharedInstance;

- (void)setupWithMaxQueueCount:(unsigned long long)a0 queueNamePrefix:(id)a1;
- (id)queueWithQOS:(long long)a0;
- (id)createConcurrentOperatonQueueWithLabel:(const char *)a0 qos:(long long)a1;
- (void).cxx_destruct;

@end
