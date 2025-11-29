@class NSString;

@interface TIMXDispatchRealQueuePool : NSObject {
    struct { char *x0; void **x1; unsigned int x2; _Atomic unsigned int x3; } *_context;
}

@property (readonly, nonatomic) unsigned long long maxQueueCount;
@property (readonly, copy, nonatomic) NSString *name;

- (id)initWithName:(id)a0 queueCount:(unsigned long long)a1 qos:(long long)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (id)queue;

@end
