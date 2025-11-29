@class TIMXSDKInstance;
@protocol TIMXDispatchQueuePoolProtocol;

@interface TIMXODispatchQueuePool : NSObject

@property (retain, nonatomic) id<TIMXDispatchQueuePoolProtocol> pool;
@property (weak, nonatomic) TIMXSDKInstance *r;

- (id)initWithMaxQueueCount:(unsigned long long)a0 queueNamePrefix:(id)a1;
- (id)queueWithQOS:(long long)a0;
- (id)createConcurrentOperatonQueueWithLabel:(const char *)a0 qos:(long long)a1;
- (void).cxx_destruct;

@end
